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
// const int M=1e5+1;
// const int INF = INT_MAX;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         vll s(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             s[i]=v[i];
//         }
//         vll ans;
//         for(i=1;i+1<n;i++){
//             if(v[i]>v[i-1] && v[i]>v[i+1]){
//                 ans.pb(i);
//             }
//         }
//         lli flag=0;
//         for(i=0;i+1<ans.size();i++){
//             if(flag==0){
//                 v[ans[i]+1]=max(v[ans[i]],v[ans[i]+2]);
//                 if(ans[i+1]-ans[i]==2){
//                     flag=1;
//                 }
//             }
//             else if(flag==1){
//                 flag=0;
//             }
//         }
//         for(i=1;i+1<n;i++){
//             if(v[i]>v[i-1] && v[i]>v[i+1]){
//                 v[i+1]=v[i];
//                 break;
//             }
//         }
//         lli count=0;
//         for(i=0;i<n;i++){
//             if(v[i]!=s[i]){
//                 count++;
//             }
//         }
//         cout << count << endl;
//         for(i=0;i<n;i++){
//             cout << v[i] << " ";
//         }
//         cout << endl;
// 	}
// }

#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define forn(i,n) for(int i=0;i<(n);i++)
 
void solve() {
    int n; cin >> n;
    vector<int>a(n);
    forn(i, n) cin >> a[i];
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] and a[i] > a[i + 1]) {
            a[i + 1] = (i + 2 < n ? max(a[i + 2], a[i]) : a[i]);
            ans++;
        }
    }
    cout << ans << '\n';
    for (int i : a) cout << i << ' ';
    cout << '\n';
}
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int T; cin >> T;
    while (T--) solve();
}