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
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=5e5+5;
// const int INF = 2e9;

// Top down
// vector<vll>dp(4+1,vll(10+1,0));
// lli solve(vll v,vll s,lli n,lli sum){
//     if(n==0 || sum<=0){
//         return 0;
//     }
//     if(dp[n][sum]!=0){
//         return dp[n][sum];
//     }
//     if(sum>=v[n]){
//         return dp[n][sum]=max(solve(v,s,n-1,sum),s[n]+solve(v,s,n-1,sum-v[n]));
//     }
//     return dp[n][sum]=solve(v,s,n-1,sum);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v(n+1);
//     for(i=1;i<=n;i++){
//         cin >> v[i];
//     }
//     vll s(n+1);
//     for(i=1;i<=n;i++){
//         cin >> s[i];
//     }
//     lli target;
//     cin >> target;
//     solve(v,s,n,target);
//     for(i=0;i<=n;i++){
//         for(j=0;j<=target;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//Bottom up
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v(n+1);
//     for(i=1;i<=n;i++){
//         cin >> v[i];
//     }
//     vll s(n+1);
//     for(i=1;i<=n;i++){
//         cin >> s[i];
//     }
//     lli target;
//     cin >> target;
//     vector<vll>dp(n+1,vll(target+1,0));

//     for(i=1;i<=n;i++){
//         for(j=1;j<=target;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j>=v[i]){
//                 dp[i][j]=max(dp[i][j],dp[i-1][j-v[i]]+s[i]);
//             }
//         }
//     }
//     for(i=1;i<=n;i++){
//         for(j=1;j<=target;j++){  
//             cout << dp[i][j] << " ";
//         }  
//         cout << endl;
//     }
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

lli solve(vll& v,vll &w,lli capacity,lli n){
    if(n==0){
        return 0;
    }    
    if(capacity-w[n-1]>=0){
        return max(solve(v,w,capacity-w[n-1],n-1)+v[n-1],solve(v,w,capacity,n-1));    
    }
    return solve(v,w,capacity,n-1);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,capacity;
    cin >> n;
    vll w(n);
    for(i=0;i<n;i++){
        cin >> w[i];
    }
	vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    cin >> capacity;
    cout << solve(v,w,capacity,n) << endl;
}

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,capacity;
//     cin >> n;
//     vll w(n);
//     for(i=0;i<n;i++){
//         cin >> w[i];
//     }
// 	vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> capacity;

//     vector<vll>dp(n+1,vll(capacity+1,0));
//     for(i=1;i<=n;i++){
//         for(j=0;j<=capacity;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j-w[i-1]>=0){
//                 dp[i][j]=max(dp[i][j],dp[i-1][j-w[i-1]]+v[i-1]);
//             }
//         }
//     }
//     for(i=1;i<=n;i++){
//         for(j=1;j<=capacity;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
