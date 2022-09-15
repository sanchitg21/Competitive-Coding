//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

// // METHOD-1. CALCULATING INVERSE
// lli solve(lli a, lli n){
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n%2==0){
// 		return (solve(a,n/2)*solve(a,n/2))%mod;
// 	}	
// 	return (((a*solve(a,n/2))%mod)*solve(a,n/2))%mod;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	vll fact(1001,1);
// 	for(i=1;i<=1000;i++){
// 		fact[i]=(i*fact[i-1])%mod;
// 	}
// 	while(t--){
// 		cin >> n >> k;
// 		vll v(n);
// 		for(i=0;i<n;i++){
// 			cin >> v[i];
// 		}
// 		sd(v);
// 		mps mp;
// 		mps freq;
// 		for(i=0;i<n;i++){
// 			if(i<k){
// 				mp[v[i]]++;
// 			}
// 			freq[v[i]]++;
// 		}
// 		lli ans=1;
// 		for(auto it=freq.begin();it!=freq.end();it++){
// 			ans=(ans*fact[it->ss])%mod;
// 			ans=(ans*solve(fact[mp[it->ff]],mod-2))%mod;
// 			ans=(ans*solve(fact[it->ss-mp[it->ff]],mod-2))%mod;
// 		}
// 		cout << ans << endl;
// 	}
// }


//METHOD 2- USING DP
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	vll fact(1001,1);
	for(i=1;i<=1000;i++){
		fact[i]=(i*fact[i-1])%mod;
	}
	vector<vll>dp(1001,vll(1001,1));
	
	for(i=1;i<=1000;i++){
		for(j=1;j<i;j++){
			dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
		}
	}
	while(t--){
		cin >> n >> k;
		vll v(n);
		for(i=0;i<n;i++){
			cin >> v[i];
		}
		sd(v);
		mps mp;
		mps freq;
		for(i=0;i<n;i++){
			if(i<k){
				mp[v[i]]++;
			}
			freq[v[i]]++;
		}
		lli ans=1;
		for(auto it=freq.begin();it!=freq.end();it++){
			ans=(ans*dp[it->ss][mp[it->ff]])%mod;
		}
		cout << ans << endl;
	}
}