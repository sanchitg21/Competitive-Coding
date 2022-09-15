//also includes priority queue
#include<bits/stdc++.h>
using namespace std;

class Heap
{
	public:
		int *a;
		int cap;
		int size;
		minHeap(int c)
		{
			a=new int(c);
			cap=c;
			size=0;
		}
		int left(int i)	return (2*i+1);
		int right(int i) return (2*i+2);
		int parent(int i) return (i-1)/2;
		//add the element to the last of the array and then keep sending it up the heap
		void min_insert(int n) //O(log n )
		{
			if(size==cap)
				return;

			size++;
			a[size-1]=n;
			int ind=size-1;
			while(ind>0 && a[ind]>a[parent(ind)])//check if it is greater than its parent
			{
				swap(a[ind], a[parent(ind)]);
				ind=parent(ind);
			}
			return;
		}
		void min_heapify(int i)//take index of element possibly out of position and min_heapify. O(log n). Sending a bigger
		//element down the heap
		{
			int l=left(i);
			int r=right(i);
			if(l<size && r<size)
			{
				int smol=a[l]<a[r] ? l : r; //swap with the smallest
				if(a[smol]<a[i])
				{
					swap(a[smol], a[i]);
					min_heapify(smol);
				} 
			}
			else if(l<size)
			{
				if(a[l]<a[i])
				{
					swap(a[l], a[i]);
					min_heapify(l);
				}
			}
			return;
		}
		//will remove the smallest element and modify the heap accordingly.
		//V nice solution
		//O(log n)
		int extract_min() //O(log N)
		{
			if(size==0)
				return 1e9;
			if(size==1)
			{
				size--;
				return a[0];
			}

			int ans=a[0];
			a[0]=a[size-1];//swap with the largest element in the heap and then heapify
			size--;
			min_heapify(0);
			return ans;
		}
		//decreases the value at index i to x;
		void decreasekey(int i, int x) //O(log N)
		{
			a[i]=x;
			while((i=>0) && (a[i]<a[parent(i)]))
			{
				swap(a[i], a[parent(i)]);
				i=parent(i);
			}
		}
		//you can't just swap with last element and call minheapify since that can break the 
		//sturcture of the heap.
		void delete(int i)
		{
			if(size==0 || i>=size)
        		return;

			decreasekey(i, -1e9);
			extractmin();
		}

		void build_min_heap()//O(N)
		{
			for(int i=size-1;i>=0;i--)
				min_heapify(i);
		}
		//heap sort
		//steps:
		//first make the heap using heapify and build heap functions
		//then a run a loop as many times as the length of the array and take the top most element of the heap evey time 
		//and swap it with the element on the ith index where i is the iteration of the loop.
		//then we again heapify and continue.
		void max_heapify(int arr[], int n, int i)//this will basically correct an incorrect max heap starting from the given index
		//sending smaller elements down the heap
    	{
        	int left=2*i+1;
        	int right=2*i+2;
        	if(left<n && right<n)
        	{
        	    int largest=arr[left]>arr[right] ? left : right;
        	    if(arr[largest]>arr[i])
        	    {
        	        swap(arr[largest], arr[i]);
        	        max_heapify(arr, n ,largest);
        	    }
        	}
        	else if(left<n)
        	{
        	    if(arr[left]>arr[i])
        	    {
        	        swap(arr[left], arr[i]);
        	        max_heapify(arr , n, left);
        	    }
        	}
    	}
    	void build_max_Heap(int arr[], int n)//from a given array, this will build a maxheap
    	{ 
    	    for(int i=n-1;i>=0;i++)
    	        max_heapify(arr, n, i);
    	}
    	void heapSort(int arr[], int n)//driver code of heap sort. This will sort in ascending order 
    	{
    	    build_max_Heap(arr, n);
    	    for(int i=n-1;i>=0;i--)
    	    {
    	        swap(arr[0], arr[i]);
    	        max_heapify(arr, i, 0);
    	    }
    	}
    	//k sorted array
    	//in descending, use defalut priority queue since it is by default in max heap format
    	//each element is at most k positions away from its destination
    	void sort_k_sorted_ascending(int a[], int n, int k)
		{
			priority_queue<int, vector<int>, greater<int>> pq;//min heap format priority queue
			for(int i=0;i<=k;i++)
				pq.push(a[i]);
		
			int ind=0;
			for(int i=k+1;i<n;i++)
			{
				a[ind]=pq.top();
				ind++;
				pq.pop();
				pq.push(a[i]);
			}
			while(!pq.empty())
			{
				a[ind]=pq.top();
				pq.pop();
			}
		}
		
		//merge k sorted arrays. Very very very important boss
		vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    	{
    	    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    	    vector<int> v;
    	    for(int i=0;i<K;i++)
    	    {
    	        pq.push(make_pair(arr[i][0], make_pair(i, 0)));
    	    }
    	        
    	    while(!pq.empty())
    	    {
    	        pair<int, pair<int, int>> top=pq.top();
    	        pq.pop();
    	        v.push_back(top.first);
    	        int bp=top.second.first;
    	        int sp=top.second.second;
    	        if(sp+1<arr[bp].size())
    	        {
    	            pq.push({arr[bp][sp+1], {bp, sp+1}});
    	        }
    	    }
    	    return v;
    	}

    	//find the median of a given stream
    	//basically maintain two priority queues, first is a max heap style as we are concerned with the biggest element it
    	//and the second is a min heap type since we are concerned with the smallest element of it.
    	priority_queue<int> p1;
    	priority_queue<int, vector<int>, greater<int>> p2;
    	void insertHeap(int &x)
    	{
    	    if(p1.empty() && p2.empty())
    	        p1.push(x);
    	    else if(p2.empty() && x<p1.top())
    	    {
    	        int a=p1.top();
    	        p1.pop();
    	        p2.push(a);
    	        p1.push(x);
    	    }
    	    else if(p2.empty() && x>p1.top())
    	        p2.push(x);
    	    else if(p1.size()==p2.size())
    	    {
    	        if(x>p2.top())
    	        {
    	            int a=p2.top();
    	            p2.pop();
    	            p1.push(a);
    	            p2.push(x);
    	        }
    	        else
    	        {
    	            p1.push(x);
    	        }
    	    }
    	    else//first one has more elements than the second one
    	    {
    	        if(x>p1.top())
    	        {
    	            p2.push(x);
    	        }
    	        else
    	        {
    	            int a=p1.top();
    	            p1.pop();
    	            p2.push(a);
    	            p1.push(x);
    	        }
    	    }
    	}
    	
    	//Function to return Median.
    	double getMedian()
    	{
    	    double ans=0;
    	    if(p1.empty() && p2.empty())
    	        return ans;
    	    else if(p1.size()==p2.size())
    	    {
    	        ans=(p1.top()+p2.top())/2;
    	        return ans;
    	    }
    	    else
    	    {
    	        ans=p1.top();
    	        return ans;
    	    }
    	}
};
int main()
{
	return 0;
}
