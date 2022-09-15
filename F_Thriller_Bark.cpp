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
const int M=2e4+5;
const int N=1e3+1;
const int INF = 2e9;

lli dp[N][M];
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,target;
	cin >> target >> n;
    vll a(n+1),b(n+1);
    for(i=0;i<N;i++){
        for(j=1;j<M;j++){
            dp[i][j]=INF;
        }
    }

    for(i=1;i<=n;i++){
        cin >> a[i] >> b[i];
    }
    for(i=1;i<=n;i++){
        for(j=1;j<M;j++){
            dp[i][j]=dp[i-1][j];
            if(j-a[i]>=0){
                dp[i][j]=min(dp[i][j],dp[i][j-a[i]]+b[i]);
            }
        }
    }
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=40;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    lli mn=INF;
    for(j=target;j<M;j++){
        mn=min(mn,dp[n][j]);
    }
    cout << mn << endl;
}