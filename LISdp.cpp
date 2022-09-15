// LONGEST INCREASING SUBSEQUENCE

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
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

// Best Method --> O(NLogN)
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v;
//     for(i=0;i<n;i++){
//         cin >> k;
//         auto it=lower_bound(v.begin(),v.end(),k);
//         if(it==v.end()){
//             v.pb(k);
//         }
//         else{
//             *it=k;
//         }
//     }
//     cout << v.size() << endl;
// }

// Recursion
// lli solve(vll& v,lli n){
//     lli count=0;
//     for(lli j=0;j<n;j++){
//         if(v[j]<v[n]){
//             count=max(count,solve(v,j));
//         }
//     }
//     return 1+count;
// }

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
//     lli ans=0;
//     for(i=0;i<n;i++){
//         ans=max(ans,solve(v,i));
//     }
//     cout << ans << endl;
// }


// Bottom up
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
//                 dp[i]=max(dp[i],1+dp[j]);
//             }
//         }
//     }
//     lli ans=0;
//     for(i=0;i<n;i++){
//         cout << dp[i] << " ";
//         ans=max(ans,dp[i]);
//     }
//     cout << endl;
//     cout << ans << endl;
// }

//LCS (Excellent Way)
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
//     vll s=v;
//     sa(s);
//     //Apply LCS
//     vector<vll> dp(n+1,vll(n+1,0));
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(v[i-1]==s[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//     }
//     cout << dp[n][n] << endl;
    
//     i=n;
//     j=n;
//     lli ans= dp[n][n];
//     while(ans){
//         while(dp[i][j]==ans){
//             j--;
//         }
//         j++;
//         while(dp[i][j]==ans){
//             i--;
//         }
//         i++;
//         cout << v[i-1] << endl;
//         ans--;
//         i--;
//         j--;
//     }
// }


// Building bridges (OP Question)
// Given 2 arrays.(end points of bridges). Find max no. of overlapping && non-overlapping bridges.
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vpl v(n);
    for(i=0;i<n;i++){
        cin >> v[i].ff;
    }
    for(i=0;i<n;i++){
        cin >> v[i].ss;
    }
    for(i=0;i<n;i++){
        if(v[i].ff >= v[i].ss){
            swap(v[i].ff,v[i].ss);
        }
    }
    lli mx=0;
    for(i=0;i<n;i++){
        mx=max(mx,v[i].ss);
        v[i].ss=mx;
    }
    sa(v);
    vll dp(n,0);
    dp[0]=1;
    vll dp1(n,0);
    dp1[0]=1;

    for(i=1;i<n;i++){
        for(j=0;j<i;j++){

            //Non-Overlapping
            if((v[j].ss < v[i].ff) || (v[i].ff >= v[j].ff && v[j].ss >= v[i].ss)){
                dp[i]= max(dp[i],1+ dp[j]);
            }
            
            //Overlapping
            if((v[j].ss >= v[i].ff) && !((v[i].ff >= v[j].ff && v[j].ss >= v[i].ss))){        
                dp1[i]= max(dp1[i],1+ dp1[j]);
            }   

        }
        if(dp[i]==0){
            dp[i]=1;
        }
        if(dp1[i]==0){
            dp1[i]=1;
        }
    }
    lli ans=0;
    for(i=0;i<n;i++){
        ans=max(ans,dp[i]);
    }
    cout << "Non-overlapping: " << ans << endl;

    ans=0;
    for(i=0;i<n;i++){
        ans=max(ans,dp1[i]);
    }
    cout << "Overlapping: " << ans << endl;
}