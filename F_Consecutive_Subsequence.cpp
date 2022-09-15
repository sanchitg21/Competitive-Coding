//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,num;
	cin >> n;
    vll v(n);
    mps mp;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<n;i++){
        mp[v[i]]=mp[v[i]-1]+1;
    }
    lli mx=0;
    for(auto it=mp.begin();it!=mp.end();++it){
        if(mx<it->second){
            mx=it->second;
            num=it->first;
        }
    }
    cout << mx << endl;
    lli step=num;
    vll ans;
    for(i=n-1;i>=0;i--){
        if(v[i]==step){
            ans.pb(i+1);
            step--;
        }
    }
    sa(ans);
    for(i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}