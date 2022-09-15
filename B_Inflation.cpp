//CODE BY CONFUZED CODER
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
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,t,m,x,n,i,k,mx,sum;
    cin >> t;
    while(t--){
        sum=0;
        mx=0;
        cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            sum=sum+v[i];
        }
        sum=sum-v[n-1];
        for(i=n-1;i>=1;i--){
            m=ceil(((v[i]*100.0)/k));
            mx=max(mx,m-sum);
            sum=sum-v[i-1];
        }
        cout << mx << endl;
    }
}
