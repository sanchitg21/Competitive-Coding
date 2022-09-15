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

//Recursion
// vector<vll>ans;
// vll s;
// void solve(lli n,vll& v){
//     if(n==0){
//         ans.pb(s);
//         return;
//     }
//     s.pb(v[n-1]);
//     solve(n-1,v);
//     s.erase(s.begin()+s.size()-1,s.end());
//     solve(n-1,v);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }  
//     solve(n,v);
    
//     for(i=0;i<ans.size();i++){
//         reverse(ans[i].begin(),ans[i].end());
//         for(j=0;j<ans[i].size();j++){
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//Iteration

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
    vector<vll>ans;
    for(i=1;i<(1<<n);i++){
        for(j=0;j<n;j++){
            if(i&(1<<j)){
                cout << v[j] << " ";
            }
        }
        cout << endl;
    }
}
