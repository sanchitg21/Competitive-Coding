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
#define INF 1e9 + 7;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli input,n,i,j;
    cin >> n;
    lli dp[n+1][3]={0};
    for(i=1;i<=n;i++){
        for(j=0;j<3;j++){
            dp[i][j]=INF;
        }
    }
    for(i=1;i<=n;i++){
        cin >> input;
        dp[i][0]=min({dp[i-1][0],dp[i-1][1],dp[i-1][2]})+1;
        if(input==1 || input==3){
            dp[i][1]= min(dp[i-1][0],dp[i-1][2]);
        }
        if(input==2 || input==3){
            dp[i][2]= min(dp[i-1][0],dp[i-1][1]);
        }
    }
    cout << min({dp[n][0],dp[n][1],dp[n][2]}) << endl;
}