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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,t,m,x,n,k,i,j,ans=0,sum=0;
    cin >> k;
    vll v(k);
    for(i=0;i<k;i++){
        cin >> v[i];
    }
    sa(v);
    for(i=0;i<k;i++){
        sum+= v[i];
    }
    for(i=0;i+1<k;i++){
        if(ans>=sum/2){
            break;
        }
        ans=ans+v[i];
    }
    if(ans>sum/2){
        ans=sum/2;
    }
    cout << ans << endl;
}
