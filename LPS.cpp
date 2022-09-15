// // Longest palindromic subsequence
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

// //Recursion
// // lli solve(lli i,lli j,string s){
// //     if(i==j){
// //         return 1;
// //     }
// //     if(i+1==j && s[i]==s[j]){
// //         return 2;
// //     }
// //     if(s[i]==s[j]){
// //         return 2+solve(i+1,j-1,s);
// //     }
// //     return max(solve(i+1,j,s),solve(i,j-1,s));
// // }
// // int main(){
// // ios_base::sync_with_stdio(0);
// // cin.tie(0);
// // cout.tie(0);
// // 	lli n,m,t,i,j,k;
// // 	cin >> n;
// // 	string s;
// //     cin >> s;
// //     cout << solve(0,n-1,s) <<  endl;
// // }

// //Bottom up
// int main(){
//     lli i,j,t,n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vector<vll>dp(n,vll(n,0));
//     for(i=0;i<n;i++){
//         dp[i][i]=1;
//     }
//     for(i=0;i+1<n;i++){
//         if(s[i]==s[i+1]){
//             dp[i][i+1]=2;
//         }
//         else{
//             dp[i][i+1]=0;
//         }
//     }
    
//     for(lli len=n-1;len>=1;len--){
//         i=0;
//         for(j=n-len;j<n;j++){
//             if(dp[i][j]!=0){
//                 i++;
//                 continue;
//             }
//             if(s[i]==s[j]){
//                 dp[i][j]= 2+dp[i+1][j-1];
//             } 
//             else{ 
//                 dp[i][j]= max(dp[i+1][j],dp[i][j-1]);
//             }
//             i++;
//         }
//     }
//     cout << dp[0][n-1] << endl;
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

// lli solve(lli low, lli high,string s){
//     if(low==high){
//         return 1;
//     }
//     if(low>high){
//         return 0;
//     }
//     if(s[low]==s[high]){
//         return 2+solve(low+1,high-1,s);
//     }
//     return max(solve(low+1,high,s),solve(low,high-1,s));
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     string s;
//     cin >> s;
//     cout << solve(0,n-1,s) << endl;
// }


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    string s;
    cin >> s;
    vector<vll>dp(n+1,vll(n+1,0));
    for(i=1;i<=n;i++){
        dp[i][i]=1;
    }
    for(lli len=n-1;len>=1;len--){
        lli j=n-len+1;
        for(i=1;j<=n;i++){
            if(s[i-1]==s[j-1]){
                dp[i][j]=2+dp[i+1][j-1];
            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
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
}