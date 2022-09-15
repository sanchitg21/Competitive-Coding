//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

//MaxHeap
class Heap{
    protected:
    int heapsize;
    int n;
    vector<int>tree;
    void heapify(int position,int treesize);

    public:
    Heap(int mx);
    void insert(int e);
    int removeMax();
    int getMax();
    void print();
};

void Heap::heapify(int position,int treesize){
    int leftchild = 2*position+1;
    int rightchild = 2*position+2;
    int largest=position;
    if(leftchild < treesize && tree[leftchild]>tree[position]){
        largest = leftchild;
    }
    if(rightchild < treesize && tree[rightchild]>tree[largest]){
        largest = rightchild;
    }


    if(largest!=position){
        swap(tree[position],tree[largest]);
        heapify(largest,treesize);
    }
}

Heap::Heap(int mx){
    heapsize=mx;
    tree.resize(mx,-1);
    n=0;
}

void Heap::insert(int e){
    n++;
    tree[n-1]= e;
    int currentPosition = n-1;
    while(currentPosition > 0){
        if(tree[(currentPosition-1)/2] < tree[currentPosition]){
            swap(tree[(currentPosition-1)/2],tree[currentPosition]);
            currentPosition= (currentPosition-1)/2;
        }
        else{
            break;
        }
    }
}

int Heap::removeMax(){
    int mx=tree[0];
    tree[0]=-1;
    n--;
    if(n==0){
        return mx;
    }
    swap(tree[n],tree[0]);
    heapify(0,n);

    return mx;
}

int Heap::getMax(){
    return tree[0];
}

void Heap::print(){

}

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     Heap h(5);
//     h.insert(100);
//     h.insert(60);
//     h.insert(70);
//     h.insert(90);
//     h.insert(80);
    
//     cout << h.getMax() << endl;
//     h.removeMax();
//     cout << h.getMax() << endl;
// }


// //MinHeap
// class Heap{
//     protected:
//     int heapsize;
//     int n;
//     vector<int>tree;
//     void heapify(int position,int treesize);

//     public:
//     Heap(int mx);
//     void insert(int e);
//     int removeMin();
//     int getMin();
//     void print();
// };

// void Heap::heapify(int position,int treesize){
//     int leftchild = 2*position+1;
//     int rightchild = 2*position+2;
//     int least=position;
//     if(leftchild < treesize && tree[leftchild]<tree[position]){
//         least = leftchild;
//     }
//     if(rightchild < treesize && tree[rightchild]<tree[least]){
//         least = rightchild;
//     }
//     if(least!=position){
//         swap(tree[position],tree[least]);
//         heapify(least,treesize);
//     }
// }

// Heap::Heap(int mx){
//     heapsize=mx;
//     tree.resize(mx,-1);
//     n=0;
// }

// void Heap::insert(int e){
//     n++;
//     tree[n-1]= e;
//     int currentPosition = n-1;
//     while(currentPosition > 0){
//         if(tree[(currentPosition-1)/2] > tree[currentPosition]){
//             swap(tree[(currentPosition-1)/2],tree[currentPosition]);
//             currentPosition= (currentPosition-1)/2;
//         }
//         else{
//             break;
//         }
//     }
// }

// int Heap::removeMin(){
//     int mn=tree[0];
//     tree[0]=-1;
//     n--;
//     if(n==0){
//         return mn;
//     }
//     swap(tree[n],tree[0]);
//     heapify(0,n);
//     return mn;
// }

// int Heap::getMin(){
//     return tree[0];
// }

// void Heap::print(){
//     for(lli i=0;i<tree.size();i++){
//         cout << tree[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     Heap h(5);
//     h.insert(100);
//     h.insert(60);
//     h.insert(70);
//     h.insert(90);
//     h.insert(80);
//     h.print();
//     cout << h.getMin() << endl;
//     h.removeMin();
//     cout << h.getMin() << endl;
//     h.print();
// }



class PriorityQueue: public Heap{
    public:
    PriorityQueue();
    void enqueue(int e);
    int dequeue();
    int front();
};

PriorityQueue:: PriorityQueue(): Heap(10000){

}

int PriorityQueue::dequeue(){
    return Heap::removeMax();
}

void PriorityQueue::enqueue(int e){
    Heap::insert(e);
}

int PriorityQueue::front(){
    return Heap::getMax();
}


class HeapSort: public Heap{
    public:
    HeapSort();
    void insert(int e);
    void display();
    
};

HeapSort::HeapSort(): Heap(10000){

}



void HeapSort::insert(int e){
    Heap::insert(e);
}

void HeapSort::display(){
    vector<int> v;
    while(Heap::n>0){
        v.insert(v.begin(),Heap::removeMax());
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}



int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    PriorityQueue pq;
    pq.insert(30);
    pq.insert(60);
    pq.insert(40);
    pq.insert(20);
    pq.insert(50);
    pq.insert(80);
    pq.insert(10);
    pq.insert(90);
    
    cout << pq.front() << endl;

    HeapSort s;
    s.insert(30);
    s.insert(60);
    s.insert(40);
    s.insert(20);
    s.insert(50);
    s.insert(80);
    s.insert(10);
    s.insert(90);

    s.display();

}
