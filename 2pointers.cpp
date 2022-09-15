//https://techparoksha.quora.com/The-Two-Pointer-Algorithm
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// Given a sorted array A, having N integers. You need to find any pair(i,j) having sum as given number X.
int Q1(int arr[],int n,int sum){
    cout << "QUESTION 1" << endl;
    int l=0;
    int r=n-1;
    while(l<r){ 
        if(arr[l]+arr[r]==sum){
            cout << l << " " << r << endl;
            r--;
        }
        if(arr[l]+arr[r]<sum){
            l++;
            continue;
        }
        if(arr[r]+arr[l]>sum){
            r--;
        }
    } 
    return 0;
}

// Given two sorted arrays A and B, each having length N and M respectively. 
// Form a new sorted merged array having values of both the arrays in sorted format.
int *Q2(int a[],int b[],int n1, int n2){
    cout << "QUESTION 2" << endl;  
    int l1=0;
    int l2=0;
    static int arr[2];
    int index=0;
    while(l1<n1 || l2<n2){  // we can also put condition as "index<n1+n2"
        if(l1==n1){
            arr[index++]=b[l2++];
            continue;
        }
        if(l2==n2){
            arr[index++]=a[l1++];
            continue;
        }
        if(a[l1]>=b[l2]){
            arr[index++]=b[l2++];
        }
        if(a[l1]<b[l2]){
            arr[index++]=a[l1++];
        }
    }
    for(int i=0;i<n1+n2;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}
//Given an array having N integers, find the contiguous subarray having sum as great as possible, but not greater than M.

// CAN ALSO BE DONE BY BINARY SEARCH. WE MAKE AN ARRAY OF CUMULATIVE SUM. Awesome way of doing in O(N)!
int Q3a(int arr[],int n,int sum){
    cout << "QUESTION 3 USING BINARY" << endl;
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    int low=0,high=0,mx=0,l,h;
    for(low=0;low<n;low++){
        if(arr[high]-arr[low]<=sum){ 
            if (mx<arr[high]-arr[low]){
                mx=arr[high]-arr[low];
                l=low;
                h=high;
            }
            high++;
            low--;
        }
        if(arr[high]-arr[low]>sum){
            continue;
        }
    }
    cout << mx << endl;
    cout << l+1 << " " << h << endl;
    return 0;
}
int Q3(int arr[],int n,int sum){
    cout << "QUESTION 3" << endl;
    lli low=0,high=0,wsum=0,mx=0,l,h;
    for(low=0;low<n;low++){
        while(high<n && wsum<=sum){
            wsum=wsum+arr[high];
            high++;
            if(wsum<=sum){ 
                if(mx<wsum){ 
                    mx=wsum;
                    l=low;
                    h=high-1;
                }
            }
        }
        wsum=wsum-arr[low];
        if(wsum<=sum){ 
            if(mx<wsum){ 
                mx=wsum;
                l=low+1;
                h=high-1;
            }
        }
    }
    cout << mx << endl;
    for(int i=l;i<=h;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

//Given an array containing N integers, you need to find the length of the smallest contiguous subarray that contains atleast K distinct elements in it.
//Output "−1" if no such subarray exists.
int Q4(int arr[],int n,int k){
    cout << "QUESTION 4" << endl;
    int low=0,high=k,mn=n;
    map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    for(low=0;low<n-k;low++){
        while(high<n && mp.size()<=k)
        {   
            mp[arr[high]]++;
            high++;
            if(mp.size()==k){
                mn=min(mn,high-low);
            }
            if(mp.size()>k){
                break;
            }
        }
        mp[arr[low]]--;
        if(mp[arr[low]]==0){
            mp.erase(arr[low]);
        }
        if(mp.size()==k){
            mn=min(mn,high-low-1);
        }
    }
    cout << mn << endl;
    return 0;
}
//    map<lli,lli>mp;
//    lli low=0,high=0,mn=n;
//    for(low=0;low<n;low++){
//       while(high<n && mp.size()<k){ 
//          mp[v[high]]++;
//          high++;
//          if(mp.size()==k){
//             mn=min(mn,high-low);
//             break;
//          }
//       }
//       mp[v[low]]--;
//       if(mp[v[low]]==0){
//          mp.erase(v[low]);
//       }
//       if(mp.size()==k){ 
//          mn=min(mn,high-low-1);
//       }
//    }
//    cout << mn << endl;


// Given an array having N integers, you need to find out a subsequence of K integers such that these K integers have the minimum hustle.
// Hustle of a sequence is defined as sum of pair-wise absolute differences divided by the number of pairs. 
// For details on the statement, refer the problem link here

/* I tried this method but ended in time complexity of O((N-K-1)*N) which can be huge if K is small and N is large. 
int Q5(int arr[],int n,int k){
    cout << "QUESTION 5" << endl;
    sort(arr,arr+n);
    int den = k*(k-1)/2;
    int sum=0;
    int ans[n-1];
    int mul[k-1];
    int m=--k;
    for(int i=1;i<=m;i++){
        mul[i-1]=k*(i);
        k--;
    }
    for(int i=0;i+1<n;i++){
        ans[i]= arr[i+1]-arr[i]; 
    }
    int high=m;
    for(int i=0;i<m;i++){
        sum=sum+ ans[i]*mul[i];
    }
    int mn=sum;
    for(int i=0;i<n-m;i++){
        int y=i;
        for(int j=0;j<m;j++){       
            sum= sum + ans[i++]*mul[j];
            mn=min(mn,sum);
        }
        i=y;
    }   
    cout << mn/den << endl;
    return 0;
}
*/

int Q5(int arr[],int n,int k){
    cout << "QUESTION 5" << endl;
    sort(arr,arr+n);
    int cum[n]={0};
    cum[0]=arr[0];
    int sum=0,r=1,l=1;
    for(int i=1;i<n;i++){
        cum[i]=cum[i-1]+arr[i];
    }
    while(r<=k-1){
        sum += arr[r]*(r-l) - (cum[r-1] - cum[l-1]);//Incomplete but this statement is the main logic of understanding how to get sum. Remaining part is easy. 
        r++;
    }
    cout << sum << endl;
    return 0;
}

// Three integers in the array which give sum x;
int *pointer(int arr[],int n,int x){
    sort(arr,arr+n);
    static int result[3]={0};
    int target,i;
    for(i=0;i<10;i++){ 
        int target=x-arr[i];
        int start=0;
        if(i==start)
            start++;
        result[0]=arr[i];
        int end=n -1;
        while(start<end){ 
            int sum=arr[start] + arr[end];
            if(sum==target){ 
                result[1]=arr[start];
                result[2]=arr[end];
                break;
            }
            else if(sum<target){ 
                start++;
                if(i==start)
                    start++;
            }
            else { 
                end--;
                if(i==end)
                    end--;
            }
        }
        if(result[0]+result[1]+result[2]==x)
            break;    
    }   
    return result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli A1,A2,A3,A4,A5;

    {
        int arr[]={1,2,3,4,5,6,7,8,9};
        int n=sizeof(arr)/sizeof(int);
        int sum= 6;
        A1=Q1(arr,n,sum);
    }

    {
        int a[]={1,3,5,7,9};
        int b[]={0,2,4,6,8,11,12};
        int n1= sizeof(a)/sizeof(int);
        int n2= sizeof(b)/sizeof(int);
        A2=*Q2(a,b,n1,n2);
        cout << *Q2(a,b,n1,n2) << endl;  // way of passing array through a function :)
        
    }

    {
        int arr[]={1,2,3,4,5,6,7,8,9};
        int n=sizeof(arr)/sizeof(int);
        int sum= 19;
        A3=Q3(arr,n,sum);
        A3=Q3a(arr,n,sum);
    }

    {
        int arr[]={ 2, 1, 2, 3, 2, 2, 1, 4, 4, 5 };
        int n=sizeof(arr)/sizeof(int);
        int k= 4;
        A4=Q4(arr,n,k);
    }

    {
        int arr[]={2, 5, 11, 18, 30, 43, 62, 83, 121};
        int n=sizeof(arr)/sizeof(int);
        int k=4;
        A5=Q5(arr,n,k);
    }

    {
        int ans,x,i;
        cin >> x;
        int arr[10]={1,-2,3,-4,4,5,-6,7,-7,9};
        int n=10;
        cout << "QUESTION 6" << endl;
        for(int i=0;i<3;i++){ 
            cout << *(pointer(arr,n,x)+i) <<" ";
        }
        cout << endl;
    }
}   
