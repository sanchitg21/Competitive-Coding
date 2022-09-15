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
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> k;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
// 		lli flag=0,mn=v[0]+1,mx=v[0]+k;
// 		for(i=1;i+1<n;i++){
// 			if((v[i]+1>mx) || (v[i]+2*k-1<mn)){
// 				flag=1;
// 				break;
// 			}
// 			mx=min(v[i]+2*k-1,mx+k-1);
// 			mn=max(mn-k+1,v[i]+1);
// 		}
// 		if(flag==1){
// 			cout << "NO" << endl;
// 			continue;
// 		}
// 		if((v[n-1]+1>mx) || (v[n-1]+k<mn)){
// 			cout << "NO" << endl;
// 		}
// 		else{
// 			cout << "YES" << endl;
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
		cin >> n >> k;
		vll v(n);
		for(i=0;i<n;i++){
			cin >> v[i];
		}
		lli flag=0;
		pair<lli,lli>prev={v[0],v[0]+k};
		// cout << prev.ff << " " << prev.ss << endl;
		pair<lli,lli>curr;
		for(i=1;i+1<n;i++){
			curr={min(max(prev.ff-k+1,v[i]),v[i]+k-1),min(prev.ss+k-1,v[i]+2*k-1)};
			// cout << curr.ff << " " << curr.ss << endl;
			if(curr.ff>=prev.ss || curr.ss<=prev.ff){
				flag=1;
			}
			prev=curr;
		}
		curr={v[0],v[n-1]+k};
		if(curr.ff>=prev.ss || curr.ss<=prev.ff){
			flag=1;
		}
		if(flag){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}
