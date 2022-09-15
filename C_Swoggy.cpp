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
    lli a,b,t,m,x,n,k,i,j,ans,sum,mn,index;
    cin >> n >> k;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    ans=0;
    sum=0;
    while(v.size()>k){ 
        mn=1e9;
        for(i=0;i<k;i++){
            if(mn>=v[i]){
                mn=v[i];
                index=i;
            }
        }
        sum=sum+v[index];
        ans=sum+ans;
        v.erase(v.begin()+index,v.begin()+index+1);
    }
    sa(v);
    for(i=0;i<v.size();i++){
        sum=sum+v[i];
        v[i]=sum;
    }
    for(i=0;i<v.size();i++){
        ans=ans+v[i];    
    }
    cout << ans << endl;
}
