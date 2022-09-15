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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vpl v(n);
		for(i=0;i<n;i++){
			cin >> v[i].ff >> v[i].ss;
		}
		lli sum=v[0].ff;
		for(i=1;i<n;i++){
			sum=sum+max((lli)0,v[i].ff-v[i-1].ss);
		}
		lli mn=sum;
		for(i=1;i<n;i++){
			sum=sum+(v[i].ff-v[i-1].ff)+max((lli)0,(v[i-1].ff-v[(n+(i-2))%n].ss))-max((lli)0,v[i].ff-v[i-1].ss) ;
			mn=min(sum,mn);
		}
		cout << mn << endl;
	}
}
