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

// // Recursion
// lli solve(lli i,lli j,string &s1,string &s2){
//     if(i==s1.length() || j==s2.length()){
//         return 0;
//     }
//     if(s1[i]==s2[j]){
//         return 1+solve(i+1,j+1,s1,s2);
//     }
//     return max(solve(i,j+1,s1,s2),solve(i+1,j,s1,s2));
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     string s1,s2;
//     cin >> s1 >> s2;
//     cout << solve(0,0,s1,s2) << endl;
// }

//Bottom-up

int main(){
ios_base:: sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli n,m,t,i,j,k;
    string s1,s2;
    cin >> s1 >> s2;
    n=s1.length();
    m=s2.length();
    vector<vll>dp(n+1,vll(m+1,0));
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[n][m] << endl;

    if(!dp[n][m]){
        return 0;
    }
    vector<char> ans;
    i=n;
    j=m;
    while(dp[i][j]){
        while(dp[i][j]==dp[i][j-1]){
            j--;
        }
        while(dp[i][j]==dp[i-1][j]){
            i--;
        }
        ans.pb(s1[i-1]);
        i--;
        j--;
    }
    reverse(ans.begin(),ans.end());
    for(i=0;i<ans.size();i++){
        cout << ans[i];
    }
    cout << endl;
}