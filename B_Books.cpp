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
    lli i,n,t;
    cin >> n >> t;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    lli l,h=0,mx=0,sum=0,high,low,ans=0;
    for(l=0;l<n;l++){
        while(h<n && sum<t){
            sum=sum+v[h];
            h++;
            if(sum>t){
                break;
            }
            if(sum<=t && h-l>ans){
                high=h; 
                low=l;
                ans=max(ans,high-low);
            } 
        }
        sum=sum-v[l];
        if(sum<=t && h-l-1>ans){ 
            high=h; 
            low=l;
            ans=max(ans,high-low-1);
        } 
    }
    cout << ans << endl;    
}