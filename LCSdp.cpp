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

//2). Longest Common Subsequence
// a). Using recursion --> It is not a good approach since many things are calculated again and again leading to high time complexity. 0(2^N)
// string a="bd";
// string b="abcd";

// lli LCS(lli i, lli j){
    
//     if(a[i]=='\0' || b[j]=='\0'){
//         return 0;
//     }
//     else if(a[i]==b[j]){
//         return 1+LCS(i+1,j+1);
//     }
//     else{
//         return max(LCS(i+1,j),LCS(i,j+1));
//     }
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     cout << (lli)LCS(0,0) << endl;
// }

//b) Recursion+Memoization ---> store data to be used later to prevent recalculation of same thing/ Uses top down approach. 

// c) DP --> bottom up approach
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    string a="stone";
    string b="longest";
    lli dp[a.length()][b.length()];
    for(lli i=0;i<a.length();i++){
        for(lli j=0;j<b.length();j++){
            dp[i][j]=0;
        }
    }
    for(lli i=1;i<a.length();i++){
        for(lli j=1;j<b.length();j++){
            if(a[i]==b[j]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout << dp[a.length()-1][b.length()-1] << endl;
    
}