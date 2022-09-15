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
	lli n,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        lli low=0,high=n-1;
        mps mp;
        for(i=0;i<n/2;i++){
            mp[v[i]+v[n-i-1]]++;
        }
        vpl sum;
        for(auto it=mp.begin();it!=mp.end();++it){
            sum.pb({it->second,it->first});
        }
        
        sort(sum.rbegin(),sum.rend());
        for(i=0;i<sum.size();i++){
            cout << sum[i].first << " " << sum[i].second << endl;
        }

	}
}
