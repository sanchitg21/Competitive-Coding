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

// string s;
// string t;
// lli solve(lli i,lli j,lli count){
//     if(i==0 || j==0){
//         return count;
//     }
//     if(s[i-1]==t[j-1]){
//         count = solve(i-1,j-1,count+1);
//     }
//     return max({count,solve(i-1,j,0),solve(i,j-1,0)});
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,i,j,k,count=0;
//     cin >> s >> t;
//     n=s.length();
//     m=t.length();
//     cout << solve(n,m,count) << endl;
// }

 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	string s;
    string t;
    cin >> s >> t;
    n=s.length();
    m=t.length();
    vector<vll>dp(n+1,vll(m+1,0));
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){ 
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    lli mx=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout << dp[i][j] << " ";
            mx=max(mx,dp[i][j]);
        }
        cout << endl;
    }
    cout << mx << endl;
    lli flag=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(mx==dp[i][j]){
                flag=1;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    string v;
    while(dp[i][j]!=0){
        v.pb(s[i-1]);
        i--;
        j--;
    }
    reverse(v.begin(),v.end());
    cout << v << endl;
}