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

//Recursive
// vll presum;
// vector<vll>dp;

// lli solve(lli a,lli b,vll &v){
//     if(a==b){
//         return 0;
//     }
//     if(dp[a][b]!=-1){
//         return dp[a][b];
//     }
//     lli c=INF;
//     for(lli i=a;i<b;i++){
//         c=min(c,solve(a,i,v)+solve(i+1,b,v)+((presum[i]-presum[a-1])%100)*((presum[b]-presum[i])%100));
//     }
//     dp[a][b]=c;
//     return c;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	t=1;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         dp.resize(n+1,vll(n+1,-1));
//         presum.resize(n+1,0);
//         for(i=1;i<=n;i++){
//             presum[i]=presum[i-1]+v[i-1];
//         }
//         cout << solve(1,n,v) << endl;
// 	}
// }


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	t=1;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vll presum(n+1,0);
        for(i=1;i<=n;i++){
            presum[i]=presum[i-1]+v[i-1];
        }
        vector<vll>dp(n+1,vll(n+1,INF));
        for(i=0;i<=n;i++){
            dp[i][0]=0;
            dp[0][i]=0;
            dp[i][i]=0;
        }
        for(lli len=n-1;len>=1;len--){
            j=n-len+1;
            for(i=1;i<=n && j<=n;i++){
                for(k=i;k<j;k++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+((presum[k]-presum[i-1])%100)*((presum[j]-presum[k])%100));
                }
                j++;
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        cout << dp[1][n] << endl;
	}
}