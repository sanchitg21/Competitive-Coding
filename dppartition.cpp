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
const int INF = 2e9;

lli solve(lli n,vll &v,vll&dp,lli sum){
    if(n==0){
        return dp[sum]=1;
    }
    return solve(n-1,v,dp,sum+v[n-1])+solve(n-1,v,dp,sum);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	vll v{ 5,15,25,30};
    n=v.size();
    lli sum=0;
    for(i=0;i<n;i++){
        sum=sum+v[i];
    }
    vector<vll>dp(n+1,vll(100,0));
    dp[0][0]=1;
    for(i=1;i<=n;i++){
        for(j=0;j<dp[i].size();j++){
            dp[i][j]=dp[i-1][j];
            if(j>=v[i-1]){
                dp[i][j]=dp[i][j-v[i-1]];
                
            }
        }
    }

    lli mx=0;
    for(i=0;i<sum;i++){
        if(dp[n][i]*i<=sum/2){
            mx=max(mx,dp[n][i]*i);
        }
    }
    cout << sum-2*mx << endl;
}
