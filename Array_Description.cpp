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
const int M=1e5+5;
const int INF = 2e9;

// lli dp[M][101]={0};
// void initialize(lli n,lli m){
//     for(lli i=0;i<n;i++){
//         for(lli j=0;j<=m;j++){
//             dp[i][j]=0;
//         }
//     }
// }

// lli solve(lli n,lli m,vll v){
//     if(n<0){
//         return 1;
//     }
//     if(m==0){
//         return 0;
//     }
//     if(n+1==v.size()){
//         if(v[n]){
//             return 1+solve(n-1,m,v);
//         }
//         lli a=0;
//         for(lli i=1;i<=m;i++){
//             a= (a+solve(n-1,m-i,v));
//         }
//         return a;
//     }
//     if(v[n]){
//         return solve(n-1,m,v)+solve(n-1,m,v)+solve(n-1,m,v);
//     }
//     lli b=0;
//     for(lli k:{v[n]-1,v[n],v[n]+1}){
//         b= (b+solve(n,k,v))%mod;
//     }
//     return b;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j;
// 	cin >> n >> m;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     // initialize(n,m);
//     cout << solve(n-1,m,v) << endl;
    
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j;
// 	cin >> n >> m;
//     cin >> t;
//     lli dp[n][m+1];
//     for(i=0;i<n;i++){
//         for(j=0;j<=m;j++){
//             dp[i][j]=0;
//         }
//     }
//     if(t==0){
//         for(i=1;i<=m;i++){
//             dp[0][i]=1;
//         }
//     }
//     else{
//         dp[0][t]=1;
//     }
//     for(i=1;i<n;i++){
//         cin >> t;
//         if(t==0){
//             for(j=1;j<=m;j++){
//                 for(lli k : {j-1,j,j+1}){
//                     if(k>=1 && k<=m){ 
//                         (dp[i][j] += dp[i-1][k]) %=mod;
//                     }
//                 }
//             }
//         }
//         else{
//             for(lli k : {t-1,t,t+1}){
//                 if(k>=1 && k<=m){ 
//                     (dp[i][t] += dp[i-1][k]) %=mod;
//                 }
//             }
//         }
//     }
//     lli ans=0;
//     for(i=1;i<=m;i++){
//         ans=(ans+dp[n-1][i])%mod;
//     }
//     cout << ans << endl;
//     // for(i=0;i<n;i++){
//     //     for(j=0;j<=m;j++){
//     //         cout << dp[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
// }
