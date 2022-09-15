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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,l,k,flag;
    int sum,sum1=0,sum2=0;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sa(v);
    map<int,int> mp;
    for(i=0;i<n;i++){
        mp[v[i]]+=v[i];
    }
    if(mp.size()==1){
        cout << mp[0] << endl;
        return 0;
    }
    else{
        sum= mp[0];
    }
    for(auto it=mp.begin();it!=mp.end();++it){
        auto is=it;
        is++;
        for(auto ip=it;is!=mp.end();++ip){
            if(ip->first + 1 == is->first){
                
                is++;
                continue;
            }
            sum=sum+ is->second;
            it=ip;
            break;
        }
    }
}