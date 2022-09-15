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


lli solve(int i, int j,vector<vll>& v,vector<vll> &dp){
    if(i==0){
        return 0;
    }
    if(dp[i-1][j]){
        return dp[i-1][j];
    }
    return dp[i-1][j] = max(solve(i-1,1-j,v,dp)+v[i-1][j],solve(i-1,j,v,dp));
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vector<vll> v(n,vector<lli>(2,0));
    for(int i=0;i<n;i++){
        cin >> v[i][0];
    }
    for(int i=0;i<n;i++){
        cin >> v[i][1];
    }
    vector<vll>dp(n,vector<lli>(2,0));
    lli a = solve(n,0,v,dp);
    dp.clear();
    dp.resize(n,vector<lli>(2,0));
    lli b = solve(n,1,v,dp);
    cout << max(a,b) << endl;
}
