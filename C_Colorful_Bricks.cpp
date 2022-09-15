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
const int mod=998244353;
const int M=5e5+5;
const int INF = 2e9;

//Method-1 

//calculating inverse --> a^(-1)= a^(m-2)modm
// lli minverse(lli a,lli n){
//     if(n==0){
//         return 1;
//     }
// 	lli t=minverse(a,n/2);
//     if(n%2==0){
//         return (t*t)%mod;
//     }
//     else{
//         return (((a*t)%mod)*t)%mod;
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m >> k;
//     vll fact(2000,1);
//     for(i=1;i<2000;i++){
//         fact[i]=(fact[i-1]*i)%mod;
//     }
//     if(k==0){
//         cout << m << endl;
//     }
//     else{
//         lli ans=m;
//         for(i=1;i<=k;i++){
//             ans=(ans*(m-1))%mod;
//         }
//         ans= (ans*fact[n-1])%mod;
//         ans=(ans*minverse(fact[k],mod-2))%mod;
//         ans=(ans*minverse(fact[n-1-k],mod-2))%mod;
//         cout << ans << endl;
//     }
// }

//Method-2 (USing DP) 