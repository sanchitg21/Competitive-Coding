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
using namespace std;

// KNAPSACK
//a). TABULAR METHOD
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli n,t,i,j,k;
//     lli target=10;
//     lli a[4]={2,3,4,5}; //weight
//     lli b[4]={1,2,5,6}; // value
//     lli dp[4+1][target+1];
//     for(i=0;i<=4;i++){
//         for(j=0;j<=target;j++){
//             dp[i][j]=0;
//         }
//     }
//     for(i=1;i<=4;i++){
//         for(j=1;j<=target;j++){
//             dp[i][j]= dp[i-1][j];
//             if(j-a[i-1]>=0){
//                 dp[i][j]=max(dp[i][j], dp[i-1][j-a[i-1]]+b[i-1]);
//             }
//         }
//     }
//     cout << dp[4][target] << endl;
//     lli net=dp[4][target];
    
//     for(j=target;j>=1;j--){
//         if(net==0){
//             break;
//         }
//         for(i=1;i<=4;i++){
//             if(dp[i][j]==net){ 
//                 cout << a[i-1] << endl;
//                 net=net-b[i-1];
//                 break;
//             }
//         }
//     }
// }
//b) SETS method. Time complexity is 0(2^N)

 // recursion
 

