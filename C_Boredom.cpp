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
const int M=1e5+5;
const int INF = 2e9;

// vll dp(M,0);
// lli solve(lli n,vll s){
//     if(n<=0){
//         return 0;
//     }
//     if(dp[n]!=0){
//         return dp[n];
//     }
//     return dp[n]=max(dp[n],s[n]+max(solve(n-2,s),solve(n-3,s)));   
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,ans,mx=0;
// 	cin >> n;
//     vll input(n);
//     mps mp;
//     for(i=0;i<n;i++){
//         cin >> input[i];
//         mx=max(mx,input[i]);
//         mp[input[i]]++;
//     }
//     for(i=1;i<mx;i++){
//         mp[i];
//     }
//     vll v(1,0);
//     vll s(1,0);
//     for(auto it=mp.begin();it!=mp.end();++it){
//         v.pb(it->first);
//         s.pb(it->first*it->second);
//     }
//     mp.clear();
//     n=s.size()-1;
//     cout << max(solve(n-1,s),solve(n,s)) << endl;
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,ans,mx=0;
	cin >> n;
    vll input(n);
    mps mp;
    for(i=0;i<n;i++){
        cin >> input[i];
        mx=max(mx,input[i]);
        mp[input[i]]++;
    }
    for(i=1;i<mx;i++){
        mp[i];
    }
    vll v(1,0);
    vll s(1,0);
    for(auto it=mp.begin();it!=mp.end();++it){
        v.pb(it->first);
        s.pb(it->first*it->second);
    }
    n=s.size()-1;
    mp.clear();
    vll dp(n,0);
    dp[0]=0;
    dp[1]=s[1];
    if(n>=2){ 
        if(v[1]+1!=v[2]){
            dp[2]=s[2];
        }
        else{
            dp[2]=max(s[1],s[2]);
        }
    }
    for(i=3;i<=n;i++){    
        dp[i]= s[i]+max(dp[i-2],dp[i-3]);
    }
    mx=0;
    for(i=0;i<=n;i++){    
        mx=max(mx,dp[i]);
    }
    cout << mx << endl;
}