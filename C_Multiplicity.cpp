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
const int M=1e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
	vll v(n);
	for(i=0;i<n;i++){ 
		cin >> v[i];
	}	
	lli dp[2][M];
	for(i=0;i<n;i++){
		dp[0][i]=0;
	}
	dp[0][0]=1;
	for(i=1;i<n;i++){
		dp[1][0]=i+1;
		for(j=1;j*j<=v[i];j++){
			if(v[i]%(j+1)==0){
				dp[1][j]=(dp[0][j-1]+dp[0][j])%mod;
				dp[1][v[i]/(j+1)]=(dp[0][j-1]+dp[0][j])%mod;
			}
			else{
				dp[1][j]=dp[0][j];
			}
		}
		for(j=0;j*j<=v[i];j++){
			dp[0][j]=dp[1][j];
			dp[0][v[i]/(j+1)]=dp[1][v[i]/(j+1)];
			dp[1][j]=0;
			dp[0][v[i]/(j+1)]=0;
		}
	}
	lli ans=0;
	for(i=0;i<n;i++){
		ans=(ans+dp[0][i])%mod;
	}
	cout << ans << endl;
}
