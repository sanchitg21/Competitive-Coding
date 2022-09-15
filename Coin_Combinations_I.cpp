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
const int M=1e6+1;
const int INF = 2e9;

// lli dp[M]={0};

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     vll v(n);
//     for(i=0;i<n;i++){ 
//         cin >> v[i];
// 	}
//     sa(v);
//     dp[0]=1;
//     for(j=1;j<=m;j++){
//         for(i=0;j-v[i]>=0 && i<n;i++){
//             dp[j]=(dp[j] + dp[j-v[i]])%mod;
//         }
//     }
//     cout << dp[m] << endl;
// }

lli dp[M]={0};
lli solve(lli n,vll v){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    lli ans=0;
    for(lli i=0;i<v.size();i++){ 
        ans = (ans + solve(n-v[i],v))%mod;
    }
    return ans;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
    vll v(n);
    for(i=0;i<n;i++){ 
        cin >> v[i];
	}
    sa(v);
    cout << solve(m,v) << endl;
}