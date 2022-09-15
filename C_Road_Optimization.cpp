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
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,l;
// 	cin >>  n >> l >> k;
//     vll d(n),a(n);
//     for(i=0;i<n;i++){
//         cin >> d[i];
//     }
//     for(i=0;i<n;i++){
//         cin >> a[i];
//     }
//     d.pb(l);

//     vector<vll> dp(n+1,vll(k+1,INF));
//     for(i=1;i<=k;i++){
//         dp[1][i]=(d[1]-d[0])*a[0];
//     }
//     for(i=1;i<=n;i++){
//         dp[i][0]=(d[i]-d[i-1])*a[i-1];
//     }
//     for(i=2;i<=n;i++){
//         for(j=1;j<=k;j++){
//             dp[i][j]=min(dp[i][j-1],((dp[i-1][j-1]/(d[i-1]-d[i-2])))*(d[i]-d[i-1]));    
//         }
//     }
//     // for(i=0;i<=n;i++){
//     //     for(j=0;j<=k;j++){
//     //         cout << dp[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     lli ans=0;
//     lli step=0;
//     vector<pair<lli,pair<lli,lli>>>v;
//     for(i=1;i<=n;i++){
//         if(dp[i][k]!=dp[i][0]){
//             v.pb({step,{dp[i][0]-dp[i][k],dp[i][k]}});
//             step++;
//         }
//         else{
//             step=0;
//             ans=ans+dp[i][k];
//         }
//     }
//     sa(v);
//     for(i=0;i<v.size();i++){
//         if(k>0){
//             ans=ans+v[i].ss.ss;
//             k--;
//         }
//         else{
//             ans=ans+v[i].ss.ss+v[i].ss.ff;
//         }
//     }
//     cout << ans << endl;
// }

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, l, k, i, j, v = 0, p, c;

    cin >> n >> l >> p;

    vector<long long> a(n), d(n);
    vector<vector<long long>> dp(n+1, vector<long long>(n, 1000000005));

    for (i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    d.push_back(l);

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    dp[0][0] = 0;
    dp[1][0] = 0;

    for (i = 0; i <= n; i++)
    {
        dp[i][0] = v;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= i-1; j++)
        {
            dp[i][j] = dp[i-1][j] + a[i-1]*(d[i]-d[i-1]);
            for (k = 1; k <= j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i-k-1][j-k] + a[i-k-1]*(d[i]-d[i-k-1]));
            }
        }
    }

    c = dp[n][0];

    for (i = 1; i <= p; i++)
    {
        c = min(c, dp[n][i]);
    }

    cout << c;
} 