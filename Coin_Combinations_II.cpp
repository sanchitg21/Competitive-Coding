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
// const int M=1e6+1;
// const int N=1e2+1;
// lli dp[N][M]={0};
// int main(){ 
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum;
// 	cin >> n >> sum;
// 	vll v(n+1);
//     for(i=1;i<=n;i++){
//         cin >> v[i];
//     }
//     dp[0][0]=1;
//     for(i=1;i<=n;i++){
//         for(j=0;j<=sum;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j-v[i]>=0){
//                 dp[i][j]= (dp[i][j]+dp[i][j-v[i]])%mod;
//             }
//         }
//     }
//     cout << dp[n][sum] << endl;
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

lli dp[101][M]={0};

lli solve(lli n,lli m,vll v){
    if(n==0 && m==0){
        return dp[0][0]=1;
    }
    if(n<0 || m<0){
        return 0;
    }
    if(dp[n][m]!=0){
        return dp[n][m];
    }
    return dp[n][m]=(solve(n,m-v[n],v)+solve(n-1,m,v))%mod;
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
    cout << solve(n-1,m,v) << endl;
}