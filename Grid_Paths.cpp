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
const int INF = 2e9;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    cin >> n;
    string v[n];
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    lli dp[n][n]={0};
    
    //Base Case
    for(i=0;v[i][0]=='.';i++){
        dp[i][0]=1;
    }
    for(i=0;v[0][i]=='.';i++){
        dp[0][i]=1;
    }
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(v[i][j]=='.'){
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    cout << dp[n-1][n-1] << endl;
}
