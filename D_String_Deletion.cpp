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
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
		string s;
		cin >> s;
		vll v;
		lli count=1;
		for(i=0;i+1<n;i++){
			if(s[i]==s[i+1]){
				count++;
			}
			else{
				v.pb(count);
				count=1;
			}
		}
		v.pb(count);
		// for(i=0;i<v.size();i++){
		// 	cout << v[i] << " ";
		// }
		// cout << endl;

		lli low=0,high=0;
		lli ans=0;
		n=v.size();
		for(low=0;low<n;){
			if(v[low]>1){
				ans++;
				v[low]=0;
				low++;
				if(low>high){ 
					high++;
				}
			}
			else{
				while(high<n && v[high]==1){
					high++;
				}
				if(high!=n){
					v[high]--;
					v[low]=0;
					low++;
					ans++;
				}
				else{
					break;
				}
			}
		}
		lli total=0;
		for(i=0;i<n;i++){
			if(v[i]==1){
				total++;
			}
		}
		ans=ans+ceil(total/2.0);
		cout << ans << endl;
	}
}