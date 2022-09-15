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
		cin >> n >> m;
		vll a(n);
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		vll b(m);
		for(i=0;i<m;i++){
			cin >> b[i];
		}
		lli count=0;
		set<lli>s;
		lli low=0,high=0;
		while(high<m){
			auto it=s.lower_bound(b[high]);
			if(it!=s.end() && *it==b[high]){
				count++;
				s.erase(it);
				high++;
			}
			else if(a[low]==b[high]){
				count+=2*s.size()+1;
				low++;
				high++;
			}
			else{
				s.insert(a[low]);
				low++;
			}
		}
		cout << count << endl;
	}
}