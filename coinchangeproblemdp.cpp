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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

// Q1. No. of ways to make the sum using given infinite amount of finite coins
// Recursion
// lli solve(lli n,lli sum,vll v){
//     if(n<0){
//         return 0;
//     }
//     if(sum==0){
//         return 1;
//     }
//     if(sum<0){
//         return solve(n-1,sum,v);
//     }
//     return solve(n-1,sum,v) + solve(n,sum-v[n],v);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum;
// 	cin >> n;
// 	vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> sum;
//     cout << solve(n-1,sum,v) << endl;
// }

// Top down

// lli dp[4][15+1];
// lli solve(lli n,lli sum,vll v){
//     if(n<0){
//         return 0;
//     }
//     if(sum==0){
//         return dp[n][sum]=1;
//     }
//     if(sum<0){
//         return dp[n][sum]=solve(n-1,sum,v);
//     }
//     if(dp[n][sum]!=0){
//         return dp[n][sum];
//     }
//     return dp[n][sum]=solve(n-1,sum,v) + solve(n,sum-v[n],v);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum;
// 	cin >> n;
// 	vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> sum;
//     solve(n-1,sum,v);
//     for(i=0;i<n;i++){
//         for(j=0;j<=sum;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << dp[n-1][sum] << endl;
// }

// Bottom up
// int main(){ 
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum;
// 	cin >> n;
// 	vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> sum;
//     vector<vll>dp(n+1,vll(sum+1));
//     for(i=1;i<=n;i++){
//         dp[i][0]=1;
//         for(j=1;j<=sum;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j-v[i-1]>=0){
//                 dp[i][j]= dp[i][j]+dp[i][j-v[i-1]];
//             }
//         }
//     }
//     for(i=0;i<=n;i++){
//         for(j=0;j<=sum;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }   
// }


//Q2. Minimum no. of coins needed to make the given sum.

// Recursion

// lli dp[4][10+1];
// void initialize(int n,vll v){
//     for(int i=0;i<=n;i++){
//         if(i%v[0]==0){ 
//             dp[0][i]=i/v[0];
//         }
//         else{
//             dp[0][i]=200;
//         }
//     }
// }
// lli solve(lli n,lli sum, vll v){
//     if(sum==0){
//         return 0;
//     }
//     if(dp[n][sum]!=0){
//         return dp[n][sum];
//     }
//     if(sum>=v[n]){ 
//         return dp[n][sum]=min(1+solve(n,sum-v[n],v),solve(n-1,sum,v));    
//     }
//     return dp[n][sum]=solve(n-1,sum,v);
// }

// int main(){ 
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum;
//     cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> sum;
//     initialize(sum,v);
//     cout << solve(n-1,sum,v) << endl;   
//     for(i=0;i<n;i++){
//         for(j=0;j<=sum;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// Bottom up
// int main(){ 
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum;
// 	cin >> n;
// 	vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> sum;
//     vector<vll>dp(n+1,vll(sum+1,sum+1));
//     for(i=1;i<=n;i++){
//         dp[i][0]=0;
//         for(j=1;j<=sum;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j-v[i-1]>=0){
//                 dp[i][j]= min(dp[i][j],dp[i][j-v[i-1]]+1);
//             }
//         }
//     }
//     for(i=0;i<=n;i++){
//         for(j=0;j<=sum;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }   
//     cout << dp[n][sum] << endl;
// }
