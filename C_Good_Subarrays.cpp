//CODE BY Sanchit Gupta
#define pb push_back
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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        string s;
        cin >> s;
        
        vll v(n);
        for(i=0;i<n;i++){
            v[i]=s[i]-'0';
        }
        for(i=1;i<n;i++){
            v[i]=v[i]+v[i-1];
        }
        v.insert(v.begin(),0);
        mps mp;
        for(i=0;i<=n;i++){
            v[i]=v[i]-i;
            mp[v[i]]++;
        }
        lli ans=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            ans=ans+ (it->second)*(it->second-1)/2;
        }
        cout << ans << endl;
	}
}
