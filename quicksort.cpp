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
#define ff first7
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


void quicksort(lli low,lli high,vll& v){
    if(low>=high){
        return;
    }
    lli pivot=low;
    lli a = low;
    lli b= high;
    low++;
    while(low<=high){
        while(low<=high && !(v[pivot]<v[low])){
            low++;
        }
        while(low<=high && !(v[pivot]>v[high])){
            high--;
        }
        if(low<=high){
            swap(v[low],v[high]);    
        }
    }
    swap(v[high],v[pivot]);
    quicksort(a,high-1,v);
    quicksort(high+1,b,v);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    quicksort(0,n-1,v);
    for(i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
