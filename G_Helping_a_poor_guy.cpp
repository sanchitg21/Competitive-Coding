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
const lli INF = 1e18;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,x,y;
	cin >> n >> x >> y;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    vll presum(n+1,0);
    for(i=1;i<=n;i++){
        presum[i]=presum[i-1]+v[i-1];
    }

    vll dp(n+1,0);
    for(i=1;i<=n;i++){
        if(i>=x){
            dp[i]= (presum[i]-presum[i-x]-y) + max(dp[i-x],(lli)0);
        }
        for(j=i;j>max((lli)0,i-x);j--){
            dp[i]=max(dp[i],presum[i]-presum[j-1]-y);
        }
    }
    lli ans=0;
    for(i=0;i<=n;i++){
        // cout << dp[i] << " ";
        ans=max(ans,dp[i]);
    }
    cout << endl;
    cout << ans << endl;
}
