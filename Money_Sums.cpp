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
const int M=1e4+1;
const int INF = 2e9;

mps mp;
lli dp[101][M]={0};

// lli solve(lli n,lli target,vll v){
//     if(n<0){
//         mp[target];
//         return 1;
//     }
//     if(target<0){
//         return 0;
//     }
//     if(dp[n][target]){
//         return dp[n][target];
//     }
//     return dp[n][target]=(solve(n-1,target-v[n],v)+solve(n-1,target,v))%mod;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum=0;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//         sum=sum+v[i];
//     }
//     solve(n,sum,v);
//     cout << mp.size()-1 << endl;
//     for(auto it=mp.begin();it!=mp.end();++it){
//         if(it->ff){ 
//             cout << it->ff << " ";
//         }
//     }
//     cout << endl;
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,sum=0;
	cin >> n;
    vll v(n+1,0);
    for(i=1;i<=n;i++){
        cin >> v[i];
        sum=sum+v[i];
    }
    lli dp[101][M]={0};
    dp[0][0]=1;
    for(i=1;i<=n;i++){
        dp[i][0]=1;
        for(j=1;j<=sum;j++){
            dp[i][j]= dp[i-1][j];
            if(j-v[i]>=0){
                dp[i][j]= (dp[i-1][j-v[i]] + dp[i][j])%mod;
            }
        }
    }
    lli count=0;
    for(j=1;j<=sum;j++){
        if(dp[n][j]){ 
            count++;
        }
    }
    cout << count << endl;
    for(j=1;j<=sum;j++){
        if(dp[n][j]){ 
            cout << j << " ";
        }
    }
    cout << endl;
}