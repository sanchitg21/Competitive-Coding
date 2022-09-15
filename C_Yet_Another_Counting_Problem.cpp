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
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b,q,l,r,lcm;
	cin >> t;
	while(t--){
		cin >> a >> b >> q;
		lcm= a*b/gcd(a,b);
		while(q--){
			cin >> l >> r;
			l--;
			lli left= min(l%lcm+1,max(a,b)) + (l/lcm-1)*max(a,b)+max(a,b)-1;
			lli right= min(r%lcm+1,max(a,b))+ (r/lcm-1)*max(a,b)+max(a,b)-1;
			lli ans= right-left;
			cout << (r-l)-ans << " ";
		}
        cout << endl;
	}
}
