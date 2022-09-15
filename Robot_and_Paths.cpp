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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,p;
	cin >> n >> m >> p;
    n--;
    m--;
    lli dp[n+1][m+1];
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            dp[i][j]=0;
        }
    }
    while(p--){
        cin >> i >> j;
        dp[i-1][j-1]=-1;
    }
    for(i=0;i<=m && dp[0][i]!=-1;i++){
        dp[0][i]=1;
    }
    for(i=0;i<=n && dp[i][0]!=-1;i++){
        dp[i][0]=1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(dp[i][j]==-1){
                continue;
            }
            if(dp[i-1][j]==-1 && dp[i][j-1]==-1){
                dp[i][j]=-1;
                continue;
            }
            if(dp[i-1][j]==-1){
                dp[i][j]= dp[i][j-1];
                continue;
            }
            if(dp[i][j-1]==-1){
                dp[i][j]= dp[i-1][j];
                continue;
            }
            dp[i][j]= dp[i-1][j] + dp[i][j-1];
        }
    }
    
    cout << dp[n][m] << endl;
}