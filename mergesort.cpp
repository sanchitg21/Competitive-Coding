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

vll merge(vll& a,vll& b){
    lli n=a.size();
    lli m=b.size();
    vll v(n+m);
    lli i=0,j=0,step=0;
    while(i<n && j<m){
        if(a[i]>=b[j]){
            v[step++]=b[j++];
        }
        else{
            v[step++]=a[i++];
        }
    }
    while(i<n){
        v[step++]=a[i++];
    }
    while(j<m){
        v[step++]=b[j++];
    }
    return v;
}

vll mergesort(vll& v){
    if(v.size()<=1){
        return v;
    }
    lli n=v.size();
    vll a(n-n/2);
    vll b(n/2);
    lli step=0,i;
    for(i=0;i<a.size();i++){
        a[i]=v[step++];
    }
    for(i=0;i<b.size();i++){
        b[i]=v[step++];
    }
    a=mergesort(a);
    b=mergesort(b);
    v=merge(a,b);
    return v;
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
    vll ans= mergesort(v);   
    for(i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}


