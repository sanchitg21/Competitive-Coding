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
    lli n,i;
    int m=0;
    cin >> n;
    vll v(n);
    vector<string> name(n); // pair vectors
    map<string,int>mp;
    for(i=0;i<n;i++){
        cin >> name[i];
        cin >> v[i];
        mp[name[i]]+=v[i];
    }
    for(auto it=mp.begin();it!=mp.end();++it){
        m=max(m,it->second);
    }
    map<string,int>ms;
    for(i=0;i<n;i++){
        ms[name[i]]+=v[i];
        if(ms[name[i]]>=m && mp[name[i]]==m){
            cout << name[i] << endl;
            return 0;
        }
    }   
}