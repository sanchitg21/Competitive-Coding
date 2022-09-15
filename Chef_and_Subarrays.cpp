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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c,t,m,x,n,k,i,j,sum,mx;
    cin >> t;
    while(t--){ 
        sum=0;
        cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(j=0;j<k;j++){ 
            map<int,int>mp;
            c=0;
            for(i=j;i<n;i=i+k){
                mp[v[i]]++;
                c++;
            }
            mx=1e9;
            for(auto it=mp.begin();it!=mp.end();++it){
                mx=min(mx,c-it->second);
            }
            sum=sum + mx;
            mp.clear();
        }
        cout << sum << endl;
    }
}
