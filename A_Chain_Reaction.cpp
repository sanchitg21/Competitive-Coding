// #include <iostream>
// using namespace std;
// const int maxn = 1e6 + 5;
 
// int n, b[maxn], dp[maxn];
 
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cin >> n;
//     for (int i = 0, a; i < n; i++) {
//         cin >> a;
//         cin >> b[a];
//     }
//     if (b[0] > 0) {
//         dp[0] = 1;
//     }
//     int mx = 0;
//     for (int i = 1; i < maxn; i++) {
//         if (b[i] == 0) {
//             dp[i] = dp[i - 1];
//         } else {
//             if (b[i] >= i) {
//                 dp[i] = 1;
//             } else {
//                 dp[i] = dp[i - b[i] - 1] + 1;
//             }
//         }
//         if (dp[i] > mx) {
//             mx = dp[i];
//         }
//     }
//     for(int i=1;i<10;i++){
//         cout << dp[i] << " ";
//     }
//     cout << n - mx << '\n';
//     return 0;
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
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
#define M 1e6+1
const int mod=1e9+7;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,mx=0;
	cin >> n;
    vll v(M,0);
    for(i=0;i<n;i++){
        cin >> m;
        cin >> v[m];
        mx=max(mx,m);
    }
    lli dp[mx+1]={0};
    if(v[0]==0){
        dp[0]=0;
    }
    else{
        dp[0]=1;
    }
    for(i=1;i<=mx;i++){
        if(v[i]==0){
            dp[i]=dp[i-1];
        }
        else{
            if(i-1-v[i]<0){
                dp[i]=1;
                continue;
            }
            dp[i]=dp[i-1-v[i]]+1;
        }
    }
    lli ans=0;
    for(i=0;i<=mx;i++){
        ans=max(ans,dp[i]);
    }
    cout << n-ans << endl;
}
