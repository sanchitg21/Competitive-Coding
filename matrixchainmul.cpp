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
const int INF = INT_MAX;


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    vector<vll>dp(n,vll(n,0));
    for(lli len=n-2;len>=1;len--){
        j=n-len;
        for(i=1;i<=len;i++){
            lli cost=INF;
            for(k=i;k<j;k++){
                cost= min(cost,dp[i][k]+dp[k+1][j]+v[i-1]*v[k]*v[j]);
            }
            dp[i][j]= cost;
            j++;
        }
    }
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
