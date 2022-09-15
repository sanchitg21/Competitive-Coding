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
const int M=5e5+5;
const int INF = 2e9;

lli dp[5001][5001];
vll v(5001,0);

lli solve(lli l,lli r,lli sum){
	if(l>r){
		return 0;
	}
	if(dp[l][r]){
		return dp[l][r];
	}
	lli v1 = sum - solve(l+1,r,sum-v[l]);
	lli v2 = sum - solve(l,r-1,sum-v[r]);
	dp[l][r]= max(v1,v2);
	return dp[l][r];
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,sum=0;
	cin >> n;
	for(i=0;i<=5000;i++){
		for(j=0;j<=5000;j++){
			dp[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		cin >> v[i];
		sum=sum+v[i];
	}
	cout << solve(0,n-1,sum) << endl;
}
