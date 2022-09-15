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
const int W=1e5+5;
const int INF = 2e9;
lli dp[100][W];
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
  	lli n,m,t,i,j,k,w;
	cin >> n >> w;
    vll v(n);
    vll s(n);
    for(i=0;i<n;i++){
        cin >> v[i] >> s[i];
    }
    for(i=0;i<10;i++){
        for(j=0;j<W;j++){
            dp[i][j]=INF;
        }
    }
    dp[0][0]=0;
    dp[0][s[0]]=v[0];
    for(i=1;i<n;i++){
        for(j=0;j<100001;j++){
            dp[i][j]=dp[i-1][j];
            if(j-s[i]>=0){
                dp[i][j]=min(dp[i][j],dp[i-1][j-s[i]]+v[i]);
            }
        }
    }
    for(j=100000;j>=0;j--){
        if(dp[n-1][j]<=w){
            cout << j << endl;
            break;
        }
    }
}
