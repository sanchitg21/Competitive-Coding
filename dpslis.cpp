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
const int M=1e5+1;
const int INF = 2e9;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	vll v{10, 22, 9, 33, 21, 50, 41, 60};
    n=v.size();
    vll dp(n,0);
    dp[0]=1;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(v[j]<v[i]){
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout << dp[i] << " ";
    }
    cout << endl;
}
