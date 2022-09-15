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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,h,sum;
	cin >> t;
	while(t--){
		cin >> n >> h;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sd(v);
        sum=v[0]+v[1];
        if(h%sum==0){
            cout << 2*(h/sum) << endl;
        }
        else if(h%sum <= v[0]){
            cout << 2*(h/sum)+1 << endl;
        }
        else{
            cout << 2*(h/sum)+2 << endl;
        }
	}
}
