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

// Recursion

// lli solve(lli low,lli high,vll arr){
//     if(low==high){
//         return arr[low]*arr.size();
//     }
//     return max(arr[low]*(arr.size()-(high-low))+solve(low+1,high,arr),arr[high]* (arr.size()-(high-low))+solve(low,high-1,arr));
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll arr(n);
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << solve(0,n-1,arr) << endl;   
// }

//Top down
// const lli N=5;
// vector<vll> dp(N,vector<lli>(N));
// lli solve(lli low,lli high,vll arr){
//     if(low==high){
//         return dp[low][high]=arr[low]*(arr.size());
//     }
//     if(dp[low][high]!=0){
//         return dp[low][high];
//     }
//     return dp[low][high]=max(arr[low]*(arr.size()-(high-low))+solve(low+1,high,arr),arr[high]*(arr.size()-(high-low))+solve(low,high-1,arr));
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll arr(n);
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     solve(0,n-1,arr);
//     cout << dp[0][n-1] << endl;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,len;
// 	cin >> n;
//     vll arr(n);
//     for(i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     vector<vll> dp(n,vll(n));
    
//     for(i=0;i<n;i++){
//         dp[i][i]=arr[i]*n;
//     }
//     for(len=n-1;len>=1;len--){
//         i=0;
//         for(j=n-len;j<n;j++){
//             dp[i][j]= max(dp[i][j-1]+(n-(j-i))*arr[j],dp[i+1][j]+(n-(j-i))*arr[i]);
//             i++;
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    vector<vll>dp(n+1,vll(n+1,0));
    for(i=1;i<=n;i++){
        dp[i][i]=n*v[i-1];
    }
    for(lli len=n-1;len>=1;len--){
        i=1;
        for(lli j=n-len+1;j<=n;j++){
            dp[i][j]=max(dp[i+1][j] +v[i-1]*(n-(j-i)), dp[i][j-1] + v[j-1]*(n-(j-i)));
            i++;
        }  
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}