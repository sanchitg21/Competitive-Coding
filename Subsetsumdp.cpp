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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

//Recursion
// lli solve(vll arr,lli n,lli target){
//     if(target==0){
//         return true;
//     }
//     if(n==0 && target!=0){
//         return false;
//     }
//     return max(solve(arr,n-1,target-arr[n-1]),solve(arr,n-1,target));    
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,target;
// 	cin >> n;
//     vll arr(n);
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cin >> target;
//     cout << solve(arr,n,target) << endl;
// }

// Top down
// vector<vll>dp(5+1,vll(14+1,0));

// lli solve(vll arr,lli n,lli target){
//     if(target==0){
//         return dp[n][target]=true;
//     }
//     if(target<0){
//         return false;
//     }
//     if(n==0 && target!=0){
//         return false;
//     }
//     if(dp[n][target]!=0){
//         return dp[n][target];
//     }
//     return dp[n][target]=max(solve(arr,n-1,target-arr[n-1]),solve(arr,n-1,target));    
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,target;
// 	cin >> n;
//     vll arr(n);
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cin >> target;
//     solve(arr,n,target);
//     for(i=0;i<=n;i++){
//         for(j=0;j<=target;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << dp[n][target] << endl;
// }

//Bottom up
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,target;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> target;

//     int dp[n+1][target+1];
//     for(i=0;i<n;i++){
//         for(j=0;j<target;j++){
//             dp[i][j]=0;
//         }
//     }
//     dp[0][0]=1;
//     for(i=1;i<=n;i++){
//         dp[i][0]=1;
//         for(j=1;j<=target;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j>=v[i-1]){
//                 dp[i][j]=max(dp[i][j],dp[i-1][j-v[i-1]]);
//             }
//         }
//     }
//     for(i=1;i<=n;i++){
//         for(j=1;j<=target;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     vll ans;
//     for(i=1;i<=target;i++){
//         if(dp[n-1][i]){ 
//             ans.pb(i);
//         }
//     }
//     for(i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }


// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,target;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     cin >> target;
//     vector<vll>dp(n+1,vll(target+1,0));
//     dp[0][0]=1;
//     for(i=1;i<=n;i++){
//         for(j=0;j<=target;j++){
//             dp[i][j]=dp[i-1][j];
//             if(j-v[i-1]>=0){
//                 dp[i][j]=max(dp[i][j],dp[i-1][j-v[i-1]]);
//             }
//         }
//     }
//     for(i=1;i<=n;i++){
//         for(j=1;j<=target;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     i=n;
//     j=target;
//     while(j>0){
//         while(dp[i][j]){
//             i--;
//         }
//         cout << v[i] << endl;
//         j=j-v[i];
//     }
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,target;
	cin >> n;
    vector<lli>v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    cin >> target;
    
    bitset<101>ans(1);
    
    for(i=0;i<n;i++){
        ans = ans|(ans<<v[i]);    
    }
    cout << ans[target] << endl;
    
}