//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

//Iterative 0(2^N *N)
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> t;
//     t--;
//     vector<vll>val(n,vll(n));
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cin >> val[i][j];
//         }
//     }
//     vll v;
//     for(i=0;i<n;i++){
//         if(i!=t){
//             v.pb(i);
//         }
//     }
//     lli ans=INF;
//     do{
//         lli x=val[t][v[0]];
//         for(i=1;i<v.size();i++){
//             x=x+val[v[i-1]][v[i]];
//         }   
//         x+=val[v[v.size()-1]][t];
//         ans=min(ans,x);
//     }
//     while(next_permutation(v.begin(),v.end()));
//     cout << ans << endl;
// }

// Recursion/Backtracking
lli x=0;
lli y=0;
lli t;
void solve(vpl& v,lli n,vector<vll>& val){
    lli flag=0;
    for(lli i=0;i<v.size();i++){
        if(v[i].ss==0){
            flag=1;
            v[i].ss=1;
            y+= val[v[n].ff][v[i].ff];
            solve(v,i,val);
            v[i].ss=0;
            y-=val[v[n].ff][v[i].ff];
        }
    }
    if(flag==0){
        x=y;
        x+=val[v[n].ff][t];
        return;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	cin >> n >> t;
    t--;
    vector<vll>val(n,vll(n));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> val[i][j];
        }
    }
    vpl v;
    for(i=0;i<n;i++){
        if(i!=t){
            v.pb({i,0});
        }
    }
    lli ans=INF;
    for(i=0;i<v.size();i++){
        v[i].ss=1;
        solve(v,i,val);
        x=x+val[t][v[i].ff];
        v[i].ss=0;
        cout << x << endl;
        ans=min(ans,x);
        x=0;
    }
    cout << ans << endl;
}