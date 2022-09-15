//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
    lli t,n,i,j,sum,MIN,index,MAX,val;
    cin >> t;
    while(t--){
        MAX=0;
        MIN=1e9;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sa(v);
        vll index;
        for(i=0;i+1<n;i++){
            MIN=min(MIN,v[i+1]-v[i]);
        }
        for(i=0;i+1<n;i++){
            if(MIN==v[i+1]-v[i]){ 
                index.pb(i);
            }
        }    
        for(i=0;i<index.size();i++){
            if(MAX<v.size()-index[i]){
                MAX=v.size()-index[i];
                val=index[i];   
            }
        }
        cout << v[val] << " ";
        for(i=val+2;i<v.size();i++){
            cout << v[i] << " ";
        }
        for(i=0;i<val;i++){
            cout << v[i] << " ";
        }
        cout << v[val+1] << endl;
    }
}
