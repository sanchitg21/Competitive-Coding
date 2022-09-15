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

//Top down method
// vector<vll>dp(101,vll(101,0));
// lli solve(string t,string s,lli n,lli m){
//     if(n<0 && m<0){
//         return 0;
//     }
//     if(dp[n+1][m+1]!=0){
//         return dp[n+1][m+1];
//     }
//     if(m<0){
//         return dp[n+1][m+1]=n+1;
//     }
//     if(n<0){
//         return dp[n+1][m+1]=m+1;
//     }
//     if(s[m]==t[n]){
//         return dp[n+1][m+1]=solve(t,s,n-1,m-1);
//     }
//     return dp[n+1][m+1]=1+min(solve(t,s,n-1,m-1),min(solve(t,s,n,m-1),solve(t,s,n-1,m)));
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,i,j,k;
//     string s,t;
// 	cin >> t;
//     cin >> s;
//     n=t.length();
//     m=s.length();
//     cout << solve(t,s,n-1,m-1) << endl;
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
    string s,t;
	cin >> t;
    cin >> s;
    n=t.length();
    m=s.length();
    vector<vll>dp(n+1,vll(m+1,0));
    dp[0][0]=0;
    for(i=0;i<=n;i++){
        dp[i][0]=i;
    }
    for(i=0;i<=m;i++){
        dp[0][i]=i;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            dp[i][j]=100;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(t[i]==s[j]){
                dp[i][j]= dp[i-1][j-1];
            }
            else{ 
                dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
            }
        }
    }
    cout << dp[n][m] << endl;
}
