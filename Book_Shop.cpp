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
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;
// lli dp[2][M];
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,target;
// 	cin >> n >> target;
//     vll a(n+1);
//     vll b(n+1);
//     for(i=0;i<=1;i++){
//         for(j=0;j<=target;j++){
//             dp[i][j]=0;
//         }
//     }
//     for(i=1;i<=n;i++){
//         cin >> a[i];
//     }
//     for(i=1;i<=n;i++){
//         cin >> b[i];
//     }
//     for(i=1;i<=n;i++){
//         for(j=1;j<=target;j++){
//             dp[1][j]=dp[0][j];
//             if(j-a[i]>=0){
//                 dp[1][j]=max(dp[1][j],dp[0][j-a[i]]+b[i]);
//             }
//         }
//         for(j=0;j<=target;j++){
//             dp[0][j]=dp[1][j];
//             dp[1][j]=0;
//         }
//     }
//     cout << dp[0][target] << endl;
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
const int M=1e5+1;
const int INF = 2e9;

lli dp[1001][M]={0};
lli solve(lli n,lli m,vpl v){
    if(n<0){
        return 0;
    }
    if(dp[n][m]!=0){
        return dp[n][m];
    }
    if(m-v[n].ff<0){
        return dp[n][m]=solve(n-1,m,v);
    }
    return dp[n][m]=max(solve(n-1,m,v),solve(n-1,m-v[n].ff,v)+v[n].ss);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
    vpl v(n);
	for(i=0;i<n;i++){
        cin >> v[i].ff;
    }
    for(i=0;i<n;i++){
        cin >> v[i].ss;
    }
    cout << solve(n-1,m,v) << endl;
}
