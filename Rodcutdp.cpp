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

// Top down
// lli dp[6+1]={0};
// lli solve(vll v,lli n){
//     if(n==0){
//         return 0;
//     }
//     if(dp[n]!=0){
//         return dp[n];
//     }
//     for(lli i=1;i<=n;i++){
//         dp[n]=max(dp[n],v[i]+solve(v,n-i));
//     }
//     return dp[n];
// }   
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v(n+1);
//     for(i=1;i<=n;i++){
//         cin >> v[i];
//     }
//     solve(v,n);
//     cout << dp[n] << endl;
// }

// Bottom up
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v(n+1);
//     for(i=1;i<=n;i++){
//         cin >> v[i];
//     }
//     vll dp(n+1,0);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){ 
//             dp[i]=max(dp[i],v[j]+dp[i-j]); 
//         }
//     }
//     cout << dp[n] << endl;
// }


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll dp(n+1,0);
    vll v(n+1,0);
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    dp[1]=v[1];
    for(i=1;i<=n;i++){
        lli sum=0;
        for(j=1;j<=i;j++){
            sum=max(sum,dp[i-j]+v[j]);
        } 
        dp[i]=sum;
    }
    cout << dp[n] << endl;
}