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

// int DP(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else if (n==2){
//         return 2;
//     }
//     else{
//         return DP(n-1) + DP(n-3) + DP(n-4);
//     }
// }
// int main(){ 
//     int n;
//     cin >> n;
//     cout << DP(n) << endl;
// }


// 1). Kadane's Algorithm
//CODE BY Sanchit Gupta
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,index;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     vll presum(n);
//     presum[0]=v[0];
//     lli mx=v[0];
//     index=0;
//     for(i=1;i<n;i++){
//         presum[i]=v[i]+presum[i-1];
//         if(mx<=presum[i]){
//             mx=presum[i];
//             index=i;
//         }
//     }
//     lli ans=mx;
//     // for(i=1;i<=index;i++){
//     //     ans=max(ans,mx-presum[i-1]);
//     // }
//     lli start;
//     for(i=0;i<index;i++){
//         if(ans<mx-presum[i]){
//             ans=mx-presum[i];
//             start=i;
//         }
//     }
//     cout << ans << endl;
//     for(i=start+1;i<=index;i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// Recursion


//2)Given target value N and an array of allowed numbers. Count ways to write them as sum of them. Order matters!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,index,sum;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    cin >> sum;
    vll dp(sum+1);
    dp[0]=1;
    for(i=1;i<=sum;i++){
        for(j=0;j<n && i>=v[j];j++){
            dp[i]+=dp[i-v[j]];
        }
    }
    cout << dp[sum] << endl;
}