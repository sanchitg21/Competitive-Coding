// void getAns(vector<int> &ans, vector<vector<int>> &dp, int i, int j, vector<int> p) {
//     if (i + 1 == j) return ;
//     for (int k = i + 1; k < j; k++) {
//         if (dp[i][k] + dp[k][j] + p[j] - p[i] == dp[i][j]) {
//             ans.push_back(p[k]);
//             getAns(ans, dp, i, k, p);
//             getAns(ans, dp, k, j, p);
//             return ;
//         }
//     }
//     return ;
// }
// vector<int> Solution::rodCut(int A, vector<int> &B) {
//     vector<int> p;
//     p.push_back(0);
//     for (int b: B) p.push_back(b);
//     p.push_back(A);
//     sort(p.begin(), p.end());
    
//     int n = p.size();
//     vector<vector<int>> dp(n, vector<int>(n, 0));
//     for (int l = 2; l <= n; l++) {
//         for (int i = 0; i + l - 1 < n; i++) {
//             dp[i][i+l-1] = INT_MAX;
//             for (int k = i + 1; k < i + l - 1; k++)
//                 dp[i][i+l-1] = min(dp[i][i+l-1], dp[i][k] + dp[k][i+l-1] + p[i+l-1] - p[i]);
//         }
                
//     }
//     vector<int> ans;
//     getAns(ans, dp, 0, n - 1, p);
//     return ans;
    
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

// lli solve(vll& v,vll& len,lli n){
//     if(n<=0){
//         return 0;
//     }
//     lli mx=0;
//     for(lli i=1;i<=n;i++){
//         mx=max(mx,v[i]+solve(v,len,n-i));
//     }
//     return mx;
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll len(n+1,0);
    for(i=1;i<=n;i++){
        cin >> len[i];
    }
    vll v(n+1,0);
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    cin >> m;
    vll dp(n,0);
    for(i=1;i<=n;i++){
        dp[i]=v[i];
        for(j=1;j<i;j++){
            dp[i]=max(dp[i],dp[i-j]+v[j]);
        }
    }
    cout << dp[n] << endl;
}
