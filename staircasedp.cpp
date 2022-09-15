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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int INF = 2e9;

//Q1. Reach a position in atmost k jumps

//Recursion
// lli solve(lli n,lli m){
//     if(m==0 && n!=0){
//         return 0;
//     }
//     if(n==0 && m==0){
//         return 1;
//     }
//     if(n==1 && m==1){
//         return 1;
//     }
//     return solve(n-1,m-1) + solve(n-2,m-1); 
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli n,m,t,i,j,k;
//     n=10;
//     m=6;
//     if(m>n){
//         m=n;
//     }
//     cout << solve(n,m) << endl;
// }

// //Top down
// const lli N=10,M=6;
// lli dp[N][M]={};
// lli solve(lli n,lli m){
//     if(m==0 && n!=0){
//         return 0;
//     }
//     if(dp[n][m]!=0){
//         return dp[n][m];
//     }
//     if ((n==0 && m==0) || (n==1 && m==1)){
//         return dp[n][m]=1;
//     }
//     return dp[n][m]=solve(n-1,m-1) + solve(n-2,m-1);     
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli n,m,t,i,j,k;
//     n=50;
//     m=37;
//     if(m>n){
//         m=n;
//     }
//     cout << solve(n,m) << endl;
// }

// Bottom up
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	n=50;
//     k=37;
//     vector<vll> dp(n+1,vector<lli>(k+1,0));
//     dp[0][0]=1;
//     dp[1][1]=1;
//     for(i=2;i<=n;i++){
//         for(j=1;j<=k;j++){ 
//             dp[i][j]=dp[i-1][j-1]+dp[i-2][j-1];    
//         }
//     }
//     cout << dp[50][37] << endl;
// }


//Q2. Simple Question --> Total no. of ways to reach a position.

// Recursion
// lli solve(lli n){
//     if(n<2){
//         return 1;
//     }
//     return solve(n-1) + solve(n-2);
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli n,m,t,i,j,k;
//     n=9;
//     cout << solve(n) << endl;
// }

// Top down 
// const lli N=100;
// lli dp[N+1]={0};
// lli solve(lli n){
//     if(n<2){
//         return dp[n]=1;
//     }
//     else if(dp[n]!=0){
//         return dp[n];
//     }
//     return dp[n]= solve(n-1) + solve(n-2);
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli n,m,t,i,j,k;
//     solve(100);
//     cout << dp[100] << endl;
// }
