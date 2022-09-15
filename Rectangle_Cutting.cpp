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

lli dp[501][501];

void initialize(){
    for(lli i=0;i<=500;i++){
        for(lli j=0;j<=500;j++){
            dp[i][j]=INF;
        }
    }
    for(lli i=0;i<=500;i++){
        dp[i][i]=0;
    }
}

lli solve(lli i,lli j){
    if(i==j){
        return dp[i][j]=0;
    }
    if(dp[i][j]!=INF){
        return dp[i][j];
    }
    for(lli k=1;k<j;k++){
        dp[i][j]= min(dp[i][j],solve(i,j-k) + solve(i,k) + 1);
    }
    for(lli k=1;k<i;k++){
        dp[i][j]= min(dp[i][j],solve(i-k,j) + solve(k,j) + 1);
    }
    return dp[i][j];
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
    initialize();
    cout << solve(n,m) << endl;
}
