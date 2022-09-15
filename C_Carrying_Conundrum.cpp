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


// lli solve(lli n,lli step,vll v){
    
//     lli x,y,z;
//     if(n<0){
//         return 1;
//     }
//     if(n==0 && v[n]==0){
//         return 0;
//     }
//     if(step==0){
//         z=v[n];
//     }
//     else{
//         z=v[n]-1;
//     }
//     if(z==-1){
//         x=0;
//         y=10;
//     }
//     else{
//         x=z+1;
//         y=9-(z-9)+1;
//     }
//     return x*solve(n-2,0,v)+y*solve(n-2,1,v);
// }   

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
//         cin >> n;
//         m=n;
//         vll v;
//         while(m){
//             v.pb(m%10);
//             m=m/10;
//         }
//         reverse(v.begin(),v.end());
//         cout << solve(v.size()-1,0,v)+solve(v.size()-2,0,v)-2 << endl;
// 	}
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
        cin >> n;
        m=n;
        vll v;
        while(m){
            v.pb(m%10);
            m=m/10;
        }
        reverse(v.begin(),v.end());
        lli a=0,b=0;
        for(i=0;i<v.size();i=i+2){
            a= a*10+v[i];
        }
        for(i=1;i<v.size();i=i+2){
            b= b*10+v[i];
        }
        cout << (a+1)*(b+1)-2 << endl;
	}
}