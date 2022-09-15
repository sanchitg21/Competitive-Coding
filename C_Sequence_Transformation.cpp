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
    lli a,b,t,m,x,n,i,j,mn;
    cin >> t;
    while(t--){
        mn=1e9;
        cin >> n;
        vll v(n);
        vector<long long int>::iterator ip;
        map<lli,lli>mp;
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        ip=unique(v.begin(), v.begin() + n);
        v.resize(distance(v.begin(), ip));
        //
        for(i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->first == v[0] && it->first== v[n-1]){
                it->second--;
            }
            else if(it->first == v[0] && it->first!= v[n-1]){
                it->second= it->second;
            }
            else if(it->first == v[n-1] && it->first!= v[0]){
                it->second= it->second;
            }
            else{
                it->second++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            mn=min(mn,it->second);
        }
        cout << mn << endl;
    }
}
