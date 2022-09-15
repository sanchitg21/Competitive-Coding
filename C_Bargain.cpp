// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=5e5+5;
// const int INF = 2e9;

// long long int minverse(long long int a,long long int n,long long int m){
//     if(n==0){
//         return 1;
//     }
// 	long long int t=minverse(a,n/2,m);
//     if(n%2==0){
//         long long int ans = (t*t)%m;
//         return ans;
//     }
//     else{
//         long long int ans = (((a*t)%m)*t)%m;
//         return ans;
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     string s;
// 	cin >> s;
//     //precalculate
//     m=s.length();

//     vll w(m+1,0);
//     for(i=1;i<=m;i++){
//         w[i]=(i*(i-1)/2  * minverse(10,m-i,mod))%mod;
//     }

//     vll u(m+1,0);
//     for(i=0;i<=m;i++){
//         u[i]= ((i+1)*minverse(10,i,mod))%mod;
//     }
//     for(i=1;i<=m;i++){
//         u[i]=(u[i]+u[i-1])%mod;
//     }

//     vll v(m+1,0);
//     for(i=1;i<m;i++){
//         v[i]=u[m-i-1];
//     }
//     lli ans=0;
//     for(i=1;i<=m;i++){
//         ans= (ans+(w[i]+v[i])*(s[i-1]-48))%mod;
//     }
//     cout << ans << endl;
// }

