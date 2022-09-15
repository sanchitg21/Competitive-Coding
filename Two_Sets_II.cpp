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
const int M=1.3e5;
const int INF = 2e9;

vll v(501,0);
lli dp[501][M];

// lli solve(lli n,lli sum){
//     if(n==0 && sum==0){
//         return 1;
//     }
//     if(n==0 && sum!=0){
//         return 0;
//     }
//     if(dp[n][sum]){
//         return dp[n][sum];
//     }
//     return dp[n][sum]=solve(n-1,sum-v[n-1])+solve(n-1,sum);
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,sum=0;
	cin >> n;
    for(i=0;i<=500;i++){
        for(j=0;j<M;j++){
            dp[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        v[i]=i+1;
        sum=sum+v[i];
    }
    if(sum%2){
        cout << 0 << endl;
        return 0;
    }
    sum=sum/2;
    dp[0][0]=1;
    for(i=1;i<n;i++){
        dp[i][0]=1;
        for(j=1;j<=sum;j++){
            dp[i][j]=dp[i-1][j];
            if(j-v[i-1]>=0){
                dp[i][j]= (dp[i][j] + dp[i-1][j-v[i-1]]) %mod; 
            }       
        }
    }
    cout << dp[n-1][sum] << endl;
}

