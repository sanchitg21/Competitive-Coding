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
vector<double> v(3000);
double dp[3000][3000];
double solve(lli n,lli ch,lli ct){
    if(dp[ch][ct]!=-1){
        return dp[ch][ct];
    }
    if(n==0 && ch>ct){
        return 1;
    }
    if(n==0 && ch<=ct){
        return 0;
    }
    return dp[ch][ct]= solve(n-1,ch+1,ct)*(v[n]) + solve(n-1,ch,ct+1)*(1-v[n]);  
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli n,m,t,i,j,k;
    for(i=0;i<3000;i++){
        for(j=0;j<3000;j++){
            dp[i][j]=-1;
        }
    }
	cin >> n;
    for(i=1;i<=n;i++){
        cin >> v[i]; 
    }
    solve(n,0,0);
    cout << fixed << setprecision(10) << dp[0][0] << endl;
}
