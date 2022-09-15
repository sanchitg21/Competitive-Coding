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
const int M=5e5+5;
const int INF = 2e9;


// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,q,l,r;
// 	cin >> n >> q;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     for(i=0;i<q;i++){
//         vll total(M);
//         lli ans=0;
//         cin >> l >> r;
//         for(j=l;j<=r;j++){
//             total[v[j]]++;
//             if(total[v[j]]==3){
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
// }

// lli ans=0;
// vll v(M,0);
// vll total(M,0);

// void add(lli position){
//     total[v[position]]++;
//     if(total[v[position]]==3){
//         ans++;
//     }
// }

// void remove(lli position){
//     total[v[position]]--;
//     if(total[v[position]]==2){
//         ans--;
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,i,j,q,l,r,L=0,R=10;
// 	cin >> n >> q;
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     for(i=0;i<=10;i++){
//         add(i);
//     }
//     for(i=0;i<q;i++){
//         cin >> l >> r;
//         l--;
//         r--;
        
//         while(l>L){
//             remove(L);
//             L++;
//         }
        
//         while(r<R){
//             remove(R);
//             R--;
//         }       

//         while(L>l){
//             add(L);
//             L--;
//         }

//         while(R<r){
//             add(R);
//             R++;
//         }
//         cout << ans << endl;
//     }
// }