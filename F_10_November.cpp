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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m >> k;
    m=m-n;
    lli ans=1;
    lli a= min(n-k,k-1);
    lli b= (a+1)/2;
    ans+=b;
    b=b*b;
    lli c= n-(2*a+1);
    ans+=(c-1);
    c=c*(c+1)/2 - c;
    b=b+c;
    m=m-b;
    if(m>0){
        cout << ceil((db)m/n)+ans << endl;
    }
    else{
        cout << 0 << endl;
    }
}