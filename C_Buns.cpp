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
    lli n,t,i,m,j,k,c,d,target,x,y,z,w;
    cin >> target;
    cin >> m;
    cin >> c >> d;
    vll a;
    vll b;
    for(i=0;i<m;i++){
        cin >> x >> y >> z >> w;
        for(j=0;j<x/y;j++){
            a.pb(z);
            b.pb(w);
        }
    }
    n=a.size();
    lli dp[n+1][target+1];
    for(i=0;i<=n;i++){
        for(j=0;j<=target;j++){
            dp[i][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=target;j++){
            dp[i][j]= dp[i-1][j];
            if(j-a[i-1]>=0){
                dp[i][j]=max(dp[i][j], dp[i-1][j-a[i-1]]+b[i-1]);
            }
        }
    }
    lli mx=0;
    for(j=1;j<=target;j++){
        mx=max(mx,dp[n][j]);
        if(j>=c){ 
            mx=max(mx,d+dp[n][j-c]);
        }
        dp[n][j]=mx;
    }
    cout << mx << endl;
}
