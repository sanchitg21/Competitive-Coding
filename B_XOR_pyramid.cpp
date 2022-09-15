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
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e3;
const int INF = 2e9;
lli dp[M][M]={0};

int main() {
  int n;
  cin >> n;
  vll a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    dp[0][i] = a[i];
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= n - i; j++) {
      dp[i][j] = dp[i - 1][j + 1] ^ dp[i - 1][j];
    }
  }
//   for(int i=0;i<n;i++){
//       for(int j=0;j<n;j++){
//           cout << dp[i][j] << " ";
//       }
//       cout << endl;
//   }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      dp[i][j] = max({dp[i][j], dp[i - 1][j], dp[i - 1][j + 1]});
    }
  }
//   for(int i=0;i<n;i++){
//       for(int j=0;j<n-i;j++){
//           cout << dp[i][j] << " ";
//       }
//       cout << endl;
//   }
  int q;
  cin >> q;
 
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    cout << dp[r-l][l-1] << '\n';
  }
}