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

lli solve(lli a,lli b){
    if(b==0){
        return 1;
    }
    lli temp=solve(a,b/2);
    if(b%2==1){
        return (a*((temp*temp)%mod))%mod;
    }
    else{
        return (temp*temp)%mod;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
        cout << solve(a,b) << endl;
	}
}
