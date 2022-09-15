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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

//Wine
// vector<vll>dp;

// lli solve(vll &v,lli low,lli high){
//     if(low>high){
//         return 0;
//     }
//     if(dp[low][high]){
//         return dp[low][high];
//     }
//     if(low==high){
//         return dp[low][high] = v[low]*(v.size());
//     }
//     return dp[low][high] = max(v[low]*(v.size()-(high-low))+solve(v,low+1,high),v[high]*(v.size()-(high-low))+solve(v,low,high-1));
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }

//     vector<vll> dp(n,vll(n,0));
//     for(i=0;i<n;i++){
//         dp[i][i]= v[i]*n;
//     }

//     for(lli len=n-1;len>=1;len--){
//         j=n-len;
//         for(i=0;i<len;i++){
//             dp[i][j]=max(dp[i][j-1]+v[j]*(n-(j-i)),dp[i+1][j]+v[i]*(n-(j-i)));
//             j++;
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
// }




// LIS
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     vll dp(n,1);
//     for(i=1;i<n;i++){
//         for(j=0;j<i;j++){
//             if(v[i]>v[j]){
//                 dp[i]=max(dp[i],dp[j]+1);
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         cout << dp[i] << " ";
//     }
//     cout << endl;

//     lli mx=0;
//     for(i=0;i<n;i++){
//         mx=max(mx,dp[i]);
//     }

//     vll ans(mx,0);
//     lli temp=INF;
//     for(i=n-1;i>=0;i--){
//         if(dp[i]==mx && v[i]<temp){
//             ans[mx-1]=v[i];
//             temp=v[i];
//             mx--;
//         }
//     }
//     for(i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }






//LCS

// lli solve(lli n,lli m,string& s,string& t){
//     if(m==0 || n==0){
//         return 0;
//     }
//     if(s[n-1]==t[m-1]){
//         return 1+solve(n-1,m-1,s,t);
//     }
//     return max(solve(n-1,m,s,t),solve(n,m-1,s,t));
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,i,j,k;
//     string s;
//     string t;
//     cin >> s >> t;
//     n=s.length();
//     m=t.length();
//     cout << solve(n,m,s,t) << endl;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,i,j,k;
//     string s;
//     string t;
//     cin >> s >> t;
//     n=s.length();
//     m=t.length();


//     vector<vll>dp(n+1,vll(m+1,0));
//     for(i=1;i<=n;i++){
//         for(j=1;j<=m;j++){
//             if(s[i-1]==t[j-1]){
//                 dp[i][j]=dp[i-1][j-1]+1;
//             }
//             else{
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     for(i=1;i<=n;i++){
//         for(j=1;j<=m;j++){
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     lli mx=dp[n][m];
//     i=n;
//     j=m;
//     while(mx){
//         while(dp[i][j-1]==mx){
//             j--;
//         }
//         while(dp[i-1][j]==mx){
//             i--;
//         }
//         cout << s[i-1];
//         mx--;
//         i--;
//         j--;
//     }
// }

vector<vll>dp;
lli solve(lli n,lli m,string& s, string& t){
    if(n==0){
        return dp[n][m]=m;
    }
    else if(m==0){
        return dp[n][m]=n;
    }
    if(s[n]==t[m]){
        return dp[n][m]=1+solve(n-1,m-1,s,t);
    }
    return dp[n][m]=1+min(solve(n,m-1,s,t),solve(n-1,m,s,t));
}

//SCS
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
    string s;
    string t;
    cin >> s >> t;
    n=s.length();
    m=t.length();
    dp.resize(n+1,vll(m+1,0));
    cout << solve(n,m,s,t) << endl;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    
}
