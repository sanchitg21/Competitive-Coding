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

// lli solve(lli n, lli m,string &s1,string &s2){
//     if(n<0 || m<0){
//         return 1+max(m,n);
//     }
//     if(s1[n]==s2[m]){
//         return solve(n-1,m-1,s1,s2);
//     }
//     return 1+min({solve(n,m-1,s1,s2),solve(n-1,m-1,s1,s2),solve(n-1,m,s1,s2)});
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	string s1,s2;
//     cin >> s1 >> s2;
//     n=s1.length();
//     m=s2.length();
//     cout << solve(n-1,m-1,s1,s2);
// }


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    string s1,s2;
    cin >> s1 >> s2;
    n=s1.length();
    m=s2.length();

    vector<vll>dp(n+1,vll(m+1,0));
    
    for(i=1;i<=n;i++){
        dp[i][0]=i;
    }
    for(i=1;i<=m;i++){
        dp[0][i]=i;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
        }
    }

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}