// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=5e5+5;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,count=0,a=0;
// 	cin >> n;
//     vll v(n);
//     vll ans;
//     for(i=0;i<n;i++){
//         cin >> v[i];
//         if(v[i]<0){
//             a++;
//             ans.pb(count);
//             ans.pb(-1);
//             count=0;
//         }
//         else{ 
//             count++;
//         }
//     }
//     ans.pb(count);
//     lli total=0,y=2;
//     while(1+y/2<=a){ 
//         for(i=1;i+1+y<ans.size();i++){
//             total=total+(ans[i-1]+1)*(ans[i+y+1]+1);
//         }
//         y=y+4;
//     }
//     for(i=0;i<ans.size();i=i+2){
//         total= total + ans[i];
//         total= total + ans[i]*(ans[i]-1)/2;
//     }
//     cout << n*(n+1)/2 -total << " " << total << endl;
// }

#include "bits/stdc++.h"
using namespace std;
#define int long long
#define forn(i,n) for(int i = 0; i < n; i++)
#define pb push_back
#define sz(x) ((int)(x).size())
#define dbg(x) cerr << #x << "->" << x << "\n";
int gcd(int a, int b) {if (b == 0) return a; return gcd(b, a % b);}
int mod = (int)1e9 + 7;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	forn(i, n) cin >> a[i];
	int	pos = 0, neg = 0;
	int ansp = 0, ansn = 0;
	forn(i, n) {
		if (a[i] > 0) {
			pos++;
			ansp += pos;
			ansn += neg;
		}
		else {
			pos++;
			ansp += neg;
			ansn += pos;
			swap(neg, pos);
		}
	}
	cout << ansn << " " << ansp;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t = 1;
	// cin >> t;
	forn(i, t)
	solve();
	return 0;
}