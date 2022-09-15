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
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=998244353;
// const int M=2e5+5;
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
// 	lli n,m,t,i,j,k,ans,count;
//     //precalculate
//     vll fact(M,1);
//     for(i=1;i<M;i++){
//         fact[i]=(fact[i-1]*i)%mod;
//     }
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         count=0;
//         ans=0;
//         vll v(n);
//         mps mp;
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             mp[v[i]]++;
//         }
//         sa(v);
//         if(v[n-1]-v[n-2]>=2){
//             cout << 0 << endl;
//             continue;
//         }
//         if(v[n-1]-v[n-2]!=0){ 
//             ans=ans+(fact[n-1]);
//         }
//         else{
//             cout << fact[n] << endl;
//             continue;
//         }
//         for(i=0;i+1<n;i++){
//             if(v[n-1]-v[i]>=2){
//                 count++;
//             }
//         }
//         lli total=count;
//         while(count){
//             lli a=(fact[total])%mod;
//             a=(a*minverse(fact[count],mod-2,mod))%mod;
//             a=(a*minverse(fact[total-count],mod-2,mod))%mod;
//             ans=(ans+((fact[count]*fact[n-1-count])%mod)*a)%mod;
//             count--;
//         }
//         cout << ((fact[n]-ans*mp[v[n-1]])+mod)%mod << endl;
// 	}
// }