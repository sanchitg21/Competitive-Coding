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
const int M=5e5+5;
const int INF = 2e9;
lli dp[3001][3001];
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	string s;
    string t;
    cin >> s >> t;
    for(i=0;i<=3000;i++){
        for(j=0;j<=3000;j++){
            dp[i][j]=0;
        }
    }

    for(i=1;i<=s.length();i++){
        for(j=1;j<=t.length();j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    lli len=dp[s.length()][t.length()];
    j=t.length();
    i=s.length();
    string ans;
    while(len--){
        while(dp[i][j]==dp[i-1][j]){
            i--;
        }
        while(dp[i][j]==dp[i][j-1]){
            j--;
        }
        ans.pb(s[i-1]);
        i--;
        j--;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
}
