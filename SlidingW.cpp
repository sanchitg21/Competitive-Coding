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

//Find the longest substring of a string containing k distinct characters(in which a particular character can occur any number of times).
int Q1(string s,int n,int k){
    cout << "QUESTION 1" << endl;
    int low,high=0;
    map<int,string>v;
    map<char,int> mp;
    map<int,string>::iterator it;
    for(low=0;low<n;low++){
        while(high<n){
            mp[s[high]]++;
            if(mp.size()==k){
                v[high-low+1]= s.substr(low,high-low+1);
            }
            if(mp.size()>k){
                mp[s[high]]--;
                if(mp[s[high]]==0){
                    mp.erase(s[high]);
                }
                break;
            }    
            high++;   
        }
        if(high==n && mp.size()==k){
            v[high-low+1]= s.substr(low,high-low+1);
            break;
        }
        mp[s[low]]--;
        if(mp[s[low]]==0){
            mp.erase(s[low]);
        }
    }
    for(it=v.begin();it!=v.end();++it){ 
        cout << it->first << " "<< it->second << endl;
    }
    return 0;
}

//Find all substrings of a string that are a permutation of another string
int Q2(string x,string y){
    cout << "QUESTION 2" << endl;    
    int low,high;
    int n=x.length();
    int k=y.length();
    map<char,int>v;
    map<char,int>mp;
    map<char,int>::iterator it;
    for(int i=0;i<y.length();i++){
        mp[y[i]]++;
        v[y[i]]=0;
    }
    high=k;
    for(int i=0;i<k;i++){
        mp[x[i]]--;
    }
    if(mp==v){
        cout << 0 << " " << x.substr(low+1,k)<< endl;
    }
    for(low=0;low<n-k;low++){
        mp[x[high]]--;
        mp[x[low]]++;
        if(mp==v){
            cout << low+1 << " " << x.substr(low+1,k) << endl;
        }
        high++;
    }
    return 0;
}

// Find the longest substring of a string containing one-time occurred characters
int Q3(string s, int n){
    cout << "QUESTION 3" << endl;
    int low,high=0;
    map<int,string>v;
    map<char,int> mp;
    map<int,string>::iterator it;
    for(low=0;low<n;low++){
        while(high<n){ 
            mp[s[high]]++;
            if(mp[s[high]]>1){
                mp[s[high]]--;
                v[high-low]= s.substr(low,high-low);
                break;
            }
            high++;   
        }
        if(high==n){
            v[high-low]= s.substr(low,high-low);
            break;
        }
        mp[s[low]]--;
    }
    for(it=v.begin();it!=v.end();++it){ 
        cout << it->first << " "<< it->second << endl;
    }
    return 0;
}

//Find the index of 0 to be replaced with 1 to get maximum length sequence of continuous ones (Using Sliding Window)
int Q4(int arr[],int n){
    cout << "QUESTION 4" << endl;
    int k=1;
    vll v;
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            v.pb(i);  
        }
    }
    if(k>=v.size()){
        cout << n << endl;
        return 0;
    }
    lli mx=v[k];
    int low,high=k+1;
    for(low=0;low<v.size()-k-1;low++){
        if(mx<(v[high]-1)-(v[low]+1)+1){ 
            mx= (v[high]-1)-(v[low]+1)+1;
            index= low+1;
        }
        high++;
        if(low==v.size()-k-2){
            if(mx<(n-1)-(v[++low]+1)+1){
                mx=(n-1)-(v[low]+1)+1;
                index= low+1;
            }
        }
    }
    cout << "Maximum length is " << mx <<" --- "<< v[index] << " index to be replaced!"<< endl;
    return 0;
}
//Find the maximum sequence of continuous 1’s formed by replacing at-most `k` zeroes by ones
int Q5(int arr[],int n,int k){
    cout << "QUESTION 5" << endl;
    vll v;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            v.pb(i);  
        }
    }
    if(k>=v.size()){
        cout << n << endl;
        return 0;
    }
    lli mx=v[k];
    int low,high=k+1;
    for(low=0;low<v.size()-k-1;low++){
        mx=max(mx,(v[high]-1)-(v[low]+1)+1);
        high++;
        if(low==v.size()-k-2){
            mx=max(mx,(n-1)-(v[++low]+1)+1);
        }
    }
    cout << mx << endl;
    return 0;
}
//Find minimum sum subarray of size k
int Q6(int arr[],int n,int k){
    cout << "QUESTION 6" << endl;
    int wsum=0;
    for(int i=0;i<k;i++){
        wsum=wsum+arr[i];
    }
    int mn=wsum;
    int high=k;
    int i1,i2;
    for(int low=0;low<n-k;low++){
        wsum=wsum+ arr[high];
        wsum=wsum-arr[low];
        if(mn>wsum){
            mn=wsum;
            i1=low+1;
            i2=high;
        }
        high++;
    }
    cout << "Sum is " << mn << endl;
    for(int i=i1;i<=i2;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//Find a subarray having the given sum in an integer array
int Q7(int arr[],int n,int sum){
    cout << "QUESTION 7" << endl;
    int low,high=0;
    int wsum=0;
    for(low=0;low<n;low++){
        while(wsum<sum && high<n){ 
            wsum=wsum+arr[high];
            high++;
        }
        if(wsum==sum){
            cout << low << " "  << high-1 << endl;
        }
        wsum=wsum-arr[low];
    }
    return 0;
}

//Find the smallest subarray length whose sum of elements is strictly greater than `k`
int Q8(int arr[],int n,int sum){
    cout << "QUESTION 8" << endl;
    int low,high=0;
    int wsum=0;
    vector<vll> ans;
    for(low=0;low<n;low++){
        while(high<n && wsum<=sum){
            wsum=wsum+arr[high];
            high++;
        }
        if(wsum>sum){
            ans.pb({low,high-1,high-1-low});
        }
        wsum=wsum-arr[low];
    }
    lli mn=n;
    for(int i=0;i<ans.size();i++){
        mn=min(mn,ans[i][2]);
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i][2]==mn){
            for(int j=ans[i][0];j<=ans[i][1];j++){
                cout << arr[j] << " ";
            }
            cout << endl;
            break;
        }
    }
    return 0;
}

// Find the count of distinct elements in every subarray of size `k`

// IN O(N^2), IT CAN BE DONE BY USING SETS, USING VECTOR PAIR, USING MAP PAIR,USING COMPARISON. DOING ONE FOR PRACTICE :)
/*
1). 
int Q9(int arr[],int n,int k){
    map<int,int> mp;
    map<int,int>::iterator it;
    int low,high=0;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    int count=0;
    for(it=mp.begin();it!=mp.end();it++){
        if((it->second)){
            cout << it->second << endl;
            count++;
        }
    }
    high=k;
    cout << "The count is: " << count << endl;
    for(low=0;low<n-k;low++){
        mp[arr[high]]++;
        mp[arr[low]]--;
        count=0;
        high++;
        for(it=mp.begin();it!=mp.end();it++){
            if((it->second)){
                count++;
            }
        }
        cout << "The count is: " << count << endl;
    }
    return 0;
}

2).

int Q9(int arr[],int n,int k){
    set<int>s;
    int i;
    for(i=0;i<=n-k;i++){
        for(int j=i;j<k+i;j++){
            s.insert(arr[j]);
        }
        cout << s.size() << endl;
        s.clear();
    }
    return 0;
}
*/
int Q9(int arr[],int n,int k){
    cout << "QUESTION 9" << endl;
    map<int,int> mp;
    map<int,int>::iterator it;
    int low,high;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    high=k;
    cout << "The count is: " << mp.size() << endl;  // Excellent way of displaying answer.
    for(low=0;low<n-k;low++){
        mp[arr[high]]++;
        mp[arr[low]]--;
        high++;
        cout << "The count is: " << mp.size() << endl;
    }
    return 0;
}

//Print all subarrays of an array having distinct elements
int Q10(int arr[],int n,int k){
    cout << "QUESTION 10" << endl;
    map<int,int> mp;
    map<int,int>::iterator it;
    int low,high;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    high=k;
    for(it=mp.begin();it!=mp.end();it++){ 
        cout << it->first << " ";
    }
    cout << endl;
    for(low=0;low<n-k;low++){
        mp[arr[high]]++;
        mp[arr[low]]--;
        high++;
        for(it=mp.begin();it!=mp.end();it++){ 
            cout << it->first << " ";
        }
        cout << endl;
    }
    return 0;
}

//Count distinct absolute values in a sorted array
// 1. Can also be done using sets in time O(N)
int Q11(int arr[],int n){
    cout << "QUESTION 11" << endl;
    map<int,int> mp;
    map<int,int>::iterator it;
    int low;
    for(low=0;low<n;low++){
        mp[abs(arr[low])]++;
    }
    cout << mp.size() << endl;
    return 0;
}
//Find duplicates within a range `k` in an array
int Q12(int arr[],int n,int k){
    cout << "QUESTION 12" << endl;
    map<int,int> mp;
    map<int,int>::iterator it;
    int low;
    int high=k;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<k;i++){
        if(mp[arr[i]]>1){
            cout << "Duplicates exist" << endl;
            break;
        }
    }
    for(low=0;low<n-k;low++){
        mp[arr[high]]++;
        mp[arr[low]]--;
        if(mp[arr[high]]>1){
            cout << "Duplicates exist: " << arr[high] << endl;
        }   
        high++;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12;
    
    {
    string s = "abcbdbdbbdcdabd";
    int k = 3;
    int n=s.length();
    A1= Q1(s,n,k);
    }

    {
    string x = "XYYZXZYZXXYZ";
    string y = "XYZ";
    A2=Q2(x,y);
    }

    { 
    string s= "abbcdafeegh";
    int n=s.length();
    A3= Q3(s,n);
    }

    {
    int arr[] = { 0, 0, 1, 0, 1, 1, 1, 0,0,1, 1,1,1,0,1,1,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    A4= Q4(arr,n);
    }

    {
    int arr[] = { 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0 };
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    A5= Q5(arr, n, k);
    }

    { 
    int arr[]={ 10, 4, 2, 5, 6, 3, 8, 1 };
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    A6=Q6(arr,n,k);
    }

    { 
    int arr[]={ 2, 6, 0, 9, 7, 3, 1, 4, 1, 10 };
    int n=sizeof(arr)/sizeof(int);
    int sum=15;
    A7=Q7(arr,n,sum);
    }

    {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n=sizeof(arr)/sizeof(int);
    int sum=21;
    A8=Q8(arr,n,sum);
    }

    {
    int arr[] = { 2, 1, 2, 3, 2, 1, 4, 5 };
    int n=sizeof(arr)/sizeof(int);
    int k = 5;
    A9=Q9(arr,n,k);
    }
    
    {
    int arr[] = { 2, 1, 2, 3, 2, 1, 4, 5 };
    int n=sizeof(arr)/sizeof(int);
    int k = 5;
    A10=Q10(arr,n,k);    
    }

    { 
    int arr[] = { -1, -1, 0, 1, -2, 1 };
    int n=sizeof(arr)/sizeof(int);
    A11=Q11(arr,n);    
    }

    { 
    int arr[]= { 5, 6, 8, 2, 4, 6, 9 };
    int n=sizeof(arr)/sizeof(int); 
    int k=5;  
    A12=Q12(arr,n,k); 
    }
}   