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
const int INF = 2e9;


lli solve(lli n,lli k){
    if(n==1){
        return k;
    }
    if(k==0 || k==1){
        return k;
    }
    lli ans=INF,res;

    for (lli x = 1; x <= k; x++) {
        res = 1+max(
            solve(n - 1, x - 1),
            solve(n, k - x));
        if (res < ans)
            ans = res;
    }
 
    return ans;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    cin >> n >> k;
    cout << solve(n,k);
}