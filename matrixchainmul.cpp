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

//Recursion

// lli solve(lli i,lli j,vll &v){
//     lli cost=INF;
//     if(i==j){
//         return 0;
//     }
//     for(lli k=i;k<j;k++){
//         cost= min(cost,solve(i,k,v)+solve(k+1,j,v)+v[i-1]*v[k]*v[j]);
//     }
//     return cost;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<=n;i++){
//         cin >> v[i];
//     }
//     cout << solve(1,n,v) << endl;
// }


//Bottom Up
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll p(n+1);
    for(i=0;i<=n;i++){
        cin >> p[i];   
    }
    vector<vll> dp(n+1,vll(n+1,INF));
    for(i=0;i<=n;i++){
        dp[0][i]=0;
        dp[i][0]=0;
        dp[i][i]=0;
    }
    vector<vll> v(n+1,vll(n+1));
    for(lli len=1;len<=n-1;len++){
        for(i=1;i<=n-len;i++){
            j=i+len;
            lli index;
            for(k=i;k<j;k++){
                if(dp[i][j]>dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]){
                    dp[i][j] = dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j];
                    index=k;
                }
            }
            v[i][j]=index;
        }    
    }

    cout << dp[1][n] << endl; 

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    // To get order, make a tree using v vector and apply IONRDER TRAVERSAL
}

