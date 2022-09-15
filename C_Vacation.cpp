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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    lli v[n+1][4]={0};
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            cin >> v[i][j];
        }
    }
    lli dp[n+1][4];
    for(i=0;i<=n;i++){
        for(j=0;j<=3;j++){ 
            dp[i][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            for(k=1;k<=3;k++){
                if(j!=k){ 
                    dp[i][k]=max(dp[i][k],dp[i-1][j]+v[i][k]);
                }
            }
        }
    }
    cout << max({dp[n][1],dp[n][2],dp[n][3]}) << endl;
}
