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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
		// a*(b+1)=n;
		vpl v;
		for(i=2;i*i<=n;i++){
			if(n%i==0){
				v.pb({i,n/i});
			}
		}
		lli mn=1e9,a,b;
		if(v.size()==0){
			cout << 1 << " " << n-1 << endl;
			continue;
		}
		for(i=0;i<v.size();i++){
			if(mn>max(v[i].ff,v[i].ff*(v[i].ss-1))){
				a=v[i].ff;
				b=v[i].ff*(v[i].ss-1);
				mn=max(v[i].ff,v[i].ff*(v[i].ss-1));
			}
		}	
		for(i=0;i<v.size();i++){
			if(mn>max(v[i].ss,v[i].ss*(v[i].ff-1))){
				a=v[i].ss;
				b=v[i].ss*(v[i].ff-1);
				mn=max(v[i].ss,v[i].ss*(v[i].ff-1));
			}
		}	
		cout << a << " " << b << endl;
	}
}
