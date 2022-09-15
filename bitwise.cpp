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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,ans,a;
//     cin >> a;
//     cin >> n;
//     ans=1;                  //compute a^n
//     while(n>0){
//         if(n%2==1){
//             ans=ans*a;
//         }    
//         a=a*a;
//         n=n/2;
//     }
//     cout << ans << endl;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,ans,a;
//     cin >> n;
//     i=0;
//     string s;
//     while((1<<i)<n){
//         if((1<<i)&n){
//             s.insert(s.begin(),'1');
//         }
//         else{
//             s.insert(s.begin(),'0');
//         }
//         i++;
//     }
//     cout << s << endl;
// }

//Q. PRINT ALL THE SUBSEQUENCES OF AN ARRAY
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,i,l,r,x;
// 	cin >> n >> l >> r >> x;
//     vll arr(n);
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     lli total = (1<<n);
//     for (int i = 1; i < total; i++){
//         vll v;
//         lli sum=0;
//         for (int j = 0; j < n; j++){
//             if (i & (1<<j)){ 
//                 cout << arr[j] << endl;
//             }
//         }
//     }
// }
