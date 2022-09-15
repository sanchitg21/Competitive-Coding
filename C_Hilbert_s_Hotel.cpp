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
	lli n,t,i,j,k,flag;
	cin >> t;
	while(t--){
		flag=0;
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
		if(n==1){
			cout << "YES" << endl;
			continue;
		}
		vll ans;
        // for(i=1;i<n;i++){
		// 	ans.pb(((v[i]-v[i-1]+1)%n+n)%n);
		// }

		for(i=0;i<n;i++){
			ans.pb(((i+v[i])%n+n)%n);
		}
		mps mp;
		for(i=0;i<ans.size();i++){
			mp[ans[i]]++;
		}
		for(auto it=mp.begin();it!=mp.end();++it){
			if(it->second >1){
				flag=1;
				break;
			}
		}
		if(flag){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
