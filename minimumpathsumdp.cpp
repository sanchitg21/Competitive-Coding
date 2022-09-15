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
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

// Recursion
// lli arr[3][4]={
//     {3,2,1,3},{1,9,2,3},{9,1,5,4}
// };
// lli solve(lli n,lli m){
//     if(n==0 && m==0){
//         return arr[0][0];
//     }
//     if(n==0){
//         return arr[0][m] + solve(0,m-1);
//     }
//     if(m==0){
//         return arr[n][0] + solve(n-1,0);
//     }
//     return max(solve(n-1,m)+arr[n][m],solve(n,m-1)+arr[n][m]);
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cout << solve(2,3) << endl;
// }

// Top down
// lli arr[3][4]={
//     {3,2,1,3},{1,9,2,3},{9,1,5,4}
// };
// lli  dp[3][4];
// lli solve(lli n,lli m){
//     if(n==0 && m==0){
//         return dp[n][m]=arr[0][0];
//     }
//     if(dp[n][m]!=0){
//         return dp[n][m];
//     }
//     if(n==0){
//         return dp[n][m]=arr[0][m] + solve(0,m-1);
//     }
//     if(m==0){
//         return dp[n][m]=arr[n][0] + solve(n-1,0);
//     }
//     return dp[n][m]=max(solve(n-1,m)+arr[n][m],solve(n,m-1)+arr[n][m]);
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//   	lli n,m,t,i,j,k;
//     solve(2,3);
//     for(i=0;i<3;i++){
//         for(j=0;j<4;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
// 	cout << dp[2][3] << endl;
// }

// Bottom up
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     lli arr[3][4]={
//     {3,2,1,3},{1,9,2,3},{9,1,5,4}
//     };
//     lli dp[3][4]={0};
//     dp[0][0]=arr[0][0];
//     for(i=1;i<3;i++){
//         dp[i][0]=arr[i][0]+dp[i-1][0];
//     }
//     for(i=1;i<4;i++){
//         dp[0][i]=arr[0][i]+dp[0][i-1];
//     }
//     for(i=1;i<3;i++){
//         for(j=1;j<4;j++){
//             dp[i][j]=max(dp[i][j-1]+arr[i][j],dp[i-1][j]+arr[i][j]);
//         }
//     }
//     cout << dp[2][3] << endl;
// }


//Q2. No. of ways to reach a particular position moving one step down or one step right

//Recursion

// lli solve(lli x,lli y){
//     if(x==0 && y==0){
//         return 0;
//     }
//     if(x==0){
//         return 1;
//     }
//     if(y==0){
//         return 1;
//     }
//     return solve(x-1,y)+solve(x,y-1); 
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     cout << solve(n,m) << endl;
// }

//Bottom top

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     lli dp[n+1][m+1];
//     for(i=0;i<=m;i++){
//         dp[0][i]=1;
//     }
//     for(i=0;i<=n;i++){
//         dp[i][0]=1;
//     }
//     for(i=1;i<=n;i++){
//         for(j=1;j<=m;j++){
//             dp[i][j]= dp[i-1][j] + dp[i][j-1];
//         }
//     }
//     cout << dp[n][m] << endl;
// }

