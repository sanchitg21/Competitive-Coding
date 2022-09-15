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

vector<vll>dp(4+1,vll(10+1,0));
lli solve(vll v,vll s,lli n,lli sum){
    if(n==0 || sum<=0){
        return 0;
    }
    if(dp[n][sum]!=0){
        return dp[n][sum];
    }
    if(sum>=v[n]){
        return dp[n][sum]=max(solve(v,s,n-1,sum),s[n]+solve(v,s,n-1,sum-v[n]));
    }
    return dp[n][sum]=solve(v,s,n-1,sum);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll v(n+1);
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    vll s(n+1);
    for(i=1;i<=n;i++){
        cin >> s[i];
    }
    lli target;
    cin >> target;
    solve(v,s,n,target);
    for(i=0;i<=n;i++){
        for(j=0;j<=target;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}