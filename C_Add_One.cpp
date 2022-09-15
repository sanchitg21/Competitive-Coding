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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    long long int t,i,n,j,m,a;
    cin >>t;
    //precalculate
    vll dp(200001,0);
    for(i=0;i<=8;i++){
        dp[i]=2;
    }
    dp[9]=3;
    for(i=10;i<dp.size();i++){
        dp[i]=(dp[i-10]+ dp[i-9])%mod;
    }
    
    while(t--){
        string s;
        cin >> s >> m;
        n=s.length();
        lli ans=0;
        for(i=0;i<n;i++){
            if(9-(s[i]-'0')>=m){
                ans=(ans+1)%mod;
            }
            else{
                a=m-(10-(s[i]-'0'));
                ans=(ans+dp[a])%mod;
            }
        }
        cout << ans << endl;       
    }
}
