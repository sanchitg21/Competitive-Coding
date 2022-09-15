#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,t,k,need=0,ans=0,y=0;
    cin >> n >> k;
    vll v(n);
    vll s;
    for(i=0;i<n;i++){
        cin >> v[i];
        ans=ans+v[i];
    }
    sa(v);
    for(i=0;i<n;i++){
        if(v[i]>y){
            y++;
        }
        need++;
    }
    need=need+v[n-1]-y;
    cout << ans-need << endl;
    return 0;
}
