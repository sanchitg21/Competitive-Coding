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
// const int mod=998244353;
// const int M=1e5+1;
// const int INF = INT_MAX;

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,q,x,y;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> m >> k >> q;
//         vpl v(q);
//         for(i=0;i<q;i++){
//             cin >> x >> y;
//             v[i]={x,y};
//         }
//         set<lli>row;
//         set<lli>col;
//         lli count=0;
//         for(i=q-1;i>=0;i--){
//             if(row.find(v[i].ff)==row.end() || col.find(v[i].ss)==col.end()){
//                 count++;
//             }
//             row.insert(v[i].ff);
//             col.insert(v[i].ss);
//             if(row.size()==n || col.size()==m){
//                 break;
//             }
//         }
//         lli ans=1;
//         for(i=1;i<=count;i++){
//             ans=(ans*k)%mod;
//         }
//         cout << ans << endl;
// 	}
// }

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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=998244353;
const int M=1e5+1;
const int INF = INT_MAX;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,q,u,w;
	cin >> t;
	while(t--){
		cin >> n >> m >> k >> q;
        vpl v;
        for(i=0;i<q;i++){
            cin >> u >> w;
            v.pb({u,w});
        }
        lli count=0;
        set<lli>rows;
        set<lli>cols;
        lli ans=1;
        for(i=q-1;i>=0;i--){
            if(cols.find(v[i].ss)==cols.end() || rows.find(v[i].ff)==rows.end()){
                count++;
            }
            rows.insert(v[i].ff);
            cols.insert(v[i].ss);
            if(rows.size()==n || cols.size()==m){
                break;
            }
        }
        for(i=1;i<=count;i++){
            ans=(ans*k)%mod;
        }
        cout << ans << endl;
	}
}
