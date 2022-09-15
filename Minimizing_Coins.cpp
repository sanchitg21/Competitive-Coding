// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e6+1;
// const int INF = 2e9;

// lli dp[101][M]={0};
// lli solve(lli n, lli m, vll v){
//     if(n==0 && m==0){
//         return 0;
//     }
//     if(n==0){
//         return dp[n][m]=INF;
//     }
//     if(dp[n][m]!=0){
//         return dp[n][m];
//     }
//     if(m-v[n-1]<0){ 
//         return dp[n][m]=solve(n-1,m,v);
//     }
//     return dp[n][m]=min(1+solve(n,m-v[n-1],v),solve(n-1,m,v));
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     vll v(n);
// 	for(i=0;i<n;i++){
//         cin >> v[i];
//     } 
//     lli ans=solve(n,m,v);
//     if(ans==INF){
//         cout << -1 << endl;
//     }
//     else{
//         cout << ans << endl;
//     }
// }

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

// lli dp[101][M]={0};
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     vll v(n);
// 	for(i=0;i<n;i++){
//         cin >> v[i];
//     } 
//     for(i=1;i<=m;i++){
//         dp[0][i]=INF;
//     }
//     for(i=1;i<=n;i++){
//         for(j=0;j<=m;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j-v[i-1]>=0){
//                 dp[i][j]= min(1+dp[i][j-v[i-1]],dp[i][j]);
//             }
//         }
//     }
//     lli ans=dp[n][m];
//     if(ans==INF){
//         cout << -1 << endl;
//     }
//     else{
//         cout << ans << endl;
//     }
// }


// This is better to be used as it occupies less space
lli dp[M]={0};
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
    for(i=1;i<=m;i++){
        dp[i]=INF;
    }
    for(i=1;i<=n;i++){
        for(j=0;j<=m;j++){
            if(j-v[i-1]>=0){
                dp[j]= min(1+dp[j-v[i-1]],dp[j]);
            }
        }
    }
    lli ans=dp[m];
    if(ans==INF){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}