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
const int M=5e5+5;
const int INF = 2e9;
string s,t;
// // i-1 && j-1 ---> character replaced
// // i && j-1 ---> character inserted
// // i-1 && j ---> character removed 
 
// lli dp[5001][5001];
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,i,j,k;
// 	cin >> s >> t;
//     n=s.length();
//     m=t.length();
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             dp[i][j]=1e9;
//         }
//     }
//     for(i=0;i<=n;i++){
//         dp[i][0]=i;
//     }
//     for(j=0;j<=m;j++){
//         dp[0][j]=j;
//     }
//     dp[0][0]=0;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=m;j++){
//             if(s[i-1]==t[j-1]){
//                 dp[i][j]=dp[i-1][j-1];
//             }
//             else{ 
//                 dp[i][j]=1+min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
//             }
//         }
//     }
//     cout << dp[n][m] << endl;
// }

lli dp[5001][5001];
lli solve(lli i,lli j){
    //base cases
    if(i==0 && j==0){
        return dp[i][j]=0;
    }
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    if(i==0){
        return dp[i][j]=j;
    }
    if(j==0){
        return dp[i][j]=i;
    }
    if(s[i-1]==t[j-1]){
        return dp[i][j]=solve(i-1,j-1);
    }
    return dp[i][j]=1+min({solve(i-1,j-1),solve(i,j-1),solve(i-1,j)});
}
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	cin >> s >> t;
    n=s.length();
    m=t.length();
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            dp[i][j]=0;
        }
    }
    cout << solve(n,m) << endl;
}
