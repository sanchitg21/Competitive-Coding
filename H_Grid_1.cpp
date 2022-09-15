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
const int M=1e3+1;
const int INF = 2e9;
vector<string>v(M);
lli dp[M][M];
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(j=0;j<m;j++){ 
        if(v[0][j]=='#'){ 
            break;
        }
        dp[0][j]=1;
    }
    for(j;j<m;j++){
        dp[0][j]=0;
    }
    for(i=0;i<n;i++){ 
        if(v[i][0]=='#'){ 
            break;
        }
        dp[i][0]=1;
    }
    for(i;i<n;i++){ 
        dp[i][0]=0;
    }
    for(i=1;i<n;i++){  
        for(j=1;j<m;j++){
            if(v[i][j]=='#'){
                dp[i][j]=0;
            }
            else{ 
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            }
        }
    }  
    cout << dp[n-1][m-1] << endl;
}