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
const int M=1e5+5;
const int INF = 2e9;
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int i, cnt = 0, ans = 0;
    string s;
    cin >> s;
    for(i = 0; i < (int) s.length(); i++) {
        if (islower(s[i])) cnt++;
        else if (cnt) cnt--, ans++;
    }
    cout << ans;
}

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,count=0;
// 	string s;
//     cin >> s;
//     n=s.length();
//     for(i=0;i<n;i++){
//         if(isupper(s[i])){
//             count++;
//         }
//     }
//     lli dp[n+1];
//     dp[0]=count;
//     for(i=1;i<=n;i++){
//         dp[i]=(isupper(s[i-1]))?(dp[i-1]-1):(dp[i-1]+1);
//     }
//     lli mn=1e9;
//     for(i=0;i<=n;i++){
//         mn=min(mn,dp[i]);
//     }
//     cout << mn << endl;
// }