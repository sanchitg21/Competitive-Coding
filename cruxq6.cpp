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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll y(n);
    vll z(n);
    for(i=0;i<n;i++){
        cin >> y[i];
    }
    for(i=0;i<n;i++){
        cin >> z[i];
    }
    sa(z);
    mps mp;
    vll s;
    for(i=0;i<n;i++){
        mp[y[0]^z[i]];
    }
    for(auto it=mp.begin();it!=mp.end();++it){
        s.pb(it->ff);
    }
    for(i=0;i<s.size();i++){
        mps mp;
        for(j=0;j<n;j++){
            mp[(y[j]^s[i])]++;
        }
        vll v;
        for(auto it=mp.begin();it!=mp.end();it++){
            for(j=1;j<=it->ss;j++){
                v.pb(it->ff);
            }
        }
        if(v==z){
            cout << "YES" << endl;
            cout << s[i] << endl;
        }
        mp.clear();
    }
}
