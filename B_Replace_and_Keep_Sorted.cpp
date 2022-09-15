//CODE BY Sanchit Gupta
#define pb push_back
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
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,q,k,i,j,l,r,m,prev,ans;
	cin >> n >> q >> k;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    vll arr(n);
    prev=0;
    for(i=0;i+1<n;i++){
        arr[i]=(v[i+1]-1)-(prev+1) ;
        prev=v[i];
    }
    arr[n-1]=(k - prev-1);
    for(i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    arr.insert(arr.begin(),0);
    while(q--){
        cin >> l >> r;
        ans= arr[r]-arr[l-1];
        if(r!=n){ 
            ans+= k-v[r]+1;
        }
        if(l>=2){ 
            ans+= (v[l-2]);
        }
        cout << ans << endl;
    }
}
