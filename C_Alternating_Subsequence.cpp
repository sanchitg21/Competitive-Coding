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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,t,sum;
    cin >> t;
    while(t--){ 
        cin >> n;
        sum=0;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        lli l,mx=v[0];
        for(l=0;l+1<n;l++){
            mx=max(mx,v[l]);
            if(v[l+1]>0 && v[l]<0){
                sum=sum+mx;
                mx=max(mx,v[l]);
                continue;
            }
            if(v[l+1]<0 && v[l]>0){
                sum=sum+mx;
                mx=min(mx,v[l+1]);
                continue;
            }
        }
        mx=max(mx,v[l]);
        sum=sum+mx;
        cout << sum << endl;
    }
}