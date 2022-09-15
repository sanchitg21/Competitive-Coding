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
    lli t,n,i,mn,mx,index1,index2,ans;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        mn=100;
        mx=0;
        for(i=0;i<n;i++){
            if(mn>v[i]){
                mn=v[i];
                index1=i;
            }
        }
        for(i=0;i<n;i++){
            if(mx<v[i]){
                mx=v[i];
                index2=i;
            }
        }
        ans=100;
        if(index1>index2){
            swap(index1,index2);
        }
        ans=min(ans,index1+1+n-index2);
        ans=min(ans,index2+1);
        ans=min(ans,n-index1);
        cout << ans << endl;
    }
}