//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,sum;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        vll s;
        for(auto it=mp.begin();it!=mp.end();++it){
            s.pb(it->second);
        }
        sa(s);
        n=s.size();
        sum=0;
        for(i=0;i<n;i++){
            sum=sum+s[i];
        }
        vll x;
        lli low=0,high=sum,mn=sum;
        for(i=0;i+1<n;i++){
            if(s[i]==s[i+1]){ 
                high-=s[i];
            }
            else{
                high-=s[i];
                x.pb(high-s[i]*(s.end()-upper_bound(s.begin(),s.end(),s[i])));
            }
        }   
        x.pb(0);
        vll y;
        y.pb(0);
        for(i=0;i+1<n;i++){
            if(s[i]==s[i+1]){ 
                low+=s[i];
            }
            else{
                low+=s[i];
                y.pb(low);
            }
        }
        y.pb(low);
        for(i=0;i<x.size();i++){
            mn=min(mn,y[i]+x[i]);
        }
        cout << mn << endl;
    }
}