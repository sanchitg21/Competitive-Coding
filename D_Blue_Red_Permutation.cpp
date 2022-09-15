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
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
// 		for(i=0;i<n;i++){
// 			cin >> v[i];
// 		}
// 		string s;
// 		cin >>s ;
// 		vll l,r;
// 		for(i=0;i<n;i++){
// 			if(s[i]=='B'){
// 				l.pb(v[i]);
// 			}
// 			else{
// 				r.pb(v[i]);
// 			}
// 		}
// 		sa(l);
// 		sd(r);
// 		lli flag=1;
// 		for(i=0;i<n;i++){
// 			if(i<l.size() && l[i]<i+1){
// 				flag=0;
// 			}
// 			if(i<r.size() && r[i]>n-i){
// 				flag=0;
// 			}
// 		}
// 		if(flag){
// 			cout << "YES" << endl;
// 		}
// 		else{
// 			cout << "NO" << endl;
// 		}
// 	}
// }

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
	cin >> t;
	while(t--){
		cin >> n;
		vll v(n);
		for(i=0;i<n;i++){
			cin >> v[i];
		}
		string s;
		cin >> s;

		vll r,b;
		for(i=0;i<n;i++){
			if(s[i]=='R'){
				r.pb(v[i]);
			}
			else{
				b.pb(v[i]);
			}
		}
		sa(b);
		sd(r);

		lli flag=0;
		for(i=0;i<b.size();i++){
			if(b[i]<i+1){
				flag=1;
			}
		}
		for(i=0;i<r.size();i++){
			if(r[i]>n-i){
				flag=1;
			}
		}
		if(flag){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
