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
	lli n,m,t,i,j,k,a,b,c,index;
	cin >> t;
	while(t--){
		cin >> n >> m;
		vll v(n+1,0);
		for(i=0;i<m;i++){
			cin >> a >> b >> c;
			v[b]++;
		}
		for(i=1;i<=n;i++){
			if(v[i]==0){
				index=i;
				break;
			}
		}
		for(i=1;i<=n;i++){
			if(index!=i){ 
				cout << index << " " << i << endl;
			}
		}
	}
}