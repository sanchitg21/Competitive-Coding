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
const int M=5e5+5;
const int INF = 1e9;

int main(){ 
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,sum,x,y;
	cin >> n >> x >> y;
	vpl v(n+1,{0,0});
    vll p(n+1);
    for(i=1;i<=n;i++){
        cin >> v[i].ff >> v[i].ss >> p[i];
    }
    lli dp[n+1][401][401];
    for(i=0;i<=n;i++){
        for(j=0;j<=400;j++){
            for(k=0;k<=400;k++){
                dp[i][j][k]=INF;
            }
        }
    }
    dp[0][0][0]=0;
    for(i=1;i<=n;i++){
        for(j=0;j<=400;j++){
            for(k=0;k<=400;k++){
                dp[i][j][k]=dp[i-1][j][k];
                if(j>=v[i].ff && k>=v[i].ss){
                    dp[i][j][k]= min(dp[i][j][k],dp[i-1][j-v[i].ff][k-v[i].ss]+p[i]);
                }
            }
        }
    }
    lli mn=INF;
    j=x;
    k=y;
    while(j<=400 && k<=400){
        mn=min(mn,dp[n][j][k]);
        j=j+x;
        k=k+y;
    }  
    if(mn==INF){
        cout << -1 << endl;
    }
    else{
        cout << mn << endl; 
    }
}
