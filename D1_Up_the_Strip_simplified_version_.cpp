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
const int M=2e5+5;
const int INF = 2e9;

// lli dp[M]={0};
// lli solve(lli n,lli m){
//     lli ans=0;
//     if(n==1){
//         return dp[n]=1;
//     }
//     if(n<1){
//         return 0;
//     }
//     if(dp[n]!=0){
//         return dp[n];
//     }
//     for(lli i=1;i<n;i++){
//         ans= (ans+solve(n-i,m))%m;
//         ans= (ans+solve(n/(i+1),m))%m;
//     }
//     return dp[n]=ans;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     solve(n,m);
//     cout << dp[n] << endl;
// }

lli dp[M]={0};
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
    lli ans=0;
    dp[2]=2;
    dp[1]=1;
    for(i=3;i<=n;i++){
        for(j=1;j<i;j++){ 
            dp[i]=(dp[i]+dp[i-j])%m;
            dp[i]=(dp[i]+dp[i/(j+1)])%m;
        }
    }
    cout << dp[n] << endl;
}
