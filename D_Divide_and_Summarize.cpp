// // //CODE BY Sanchit Gupta :)
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

// lli mid;

// struct cmp{
// 	bool operator()(const pair<lli,lli>&a, const pair<lli,lli>&b){
// 		if(a.ff<=mid && b.ff>mid){
// 			return a.ff<b.ff;
// 		}
// 		return a.ss < b.ss;
// 	}
// };

// mps mp;

// lli solve(lli low,lli high,set<pair<lli,lli>,cmp>& v,vll& prefixsum,vll& input){
// 	if(high-low<=0){
// 		if(low==high){
// 			mp[input[low]]=1;
// 		}
// 		return 0;
// 	}
// 	lli mx=input[high];
// 	lli mn=input[low];
// 	mid= (mx+mn)/2;
// 	// sort(v.begin()+low,v.begin()+high+1,cmp);
// 	lli sum=prefixsum[high+1]-prefixsum[low];
// 	mp[sum]=1;
// 	lli index=upper_bound(input.begin()+low,input.begin()+high+1,mid)-input.begin();
// 	if(mid==input[high]){
// 		return 0;
// 	}
// 	return solve(low,index-1,v,prefixsum,input) + solve(index,high,v,prefixsum,input);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,q;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> m;
// 		vll input(n);
// 		vll a(n);
// 		set<pair<lli,lli>,cmp> v;
// 		for(i=0;i<n;i++){
// 			cin >> k;
// 			v.insert({k,i});
// 			input[i]=k;
// 			a[i]=k;
// 		}
// 		lli low=0;
// 		lli high=n-1;
// 		sa(a);
// 		a.insert(a.begin(),0);
// 		sa(input);
// 		for(i=1;i<=n;i++){
// 			a[i]=a[i]+a[i-1];
// 		}
// 		solve(low,high,v,a,input);
// 		for(i=0;i<m;i++){
// 			cin >> q;
// 			if(!mp[q]){
// 				cout << "No" << endl;
// 			}
// 			else{
// 				cout << "Yes" << endl;
// 			}
// 		}
// 		mp.clear();
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
const int INF = INT_MAX;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>

// Recursive
set<lli>s;

void solve(lli l,lli r,vll &v,vll &presum){
	if(v[l]==v[r]){
		s.insert(presum[r]-presum[l-1]);
		return;
	}
	s.insert(presum[r]-presum[l-1]);
	lli mid= (v[l]+v[r])/2;
	lli index = upper_bound(v.begin(),v.end(),mid)-v.begin();
	if(l<index){
		solve(l,index-1,v,presum);
	}
	if(r>=index){
		solve(index,r,v,presum);
	}
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,q,sum;
	cin >> t;
	while(t--){
		cin >> n >> q;
		vll v(n+1,0);
		for(i=1;i<=n;i++){
			cin >> v[i];
		}
		sa(v);
		vll presum(n+1,0);
		for(i=1;i<=n;i++){
			presum[i]=presum[i-1]+v[i];
		}
		
		lli l=1,r=n;
		solve(l,r,v,presum);
		while(q--){
			cin >> sum;
			if(s.find(sum)!=s.end()){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}
		}
		s.clear();
	}
}

//Iterative
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,q,sum;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> q;
// 		vll v(n+1,0);
// 		for(i=1;i<=n;i++){
// 			cin >> v[i];
// 		}
// 		sa(v);
// 		vll presum(n+1,0);
// 		for(i=1;i<=n;i++){
// 			presum[i]=presum[i-1]+v[i];
// 		}
		
// 		set<pair<lli,lli>>s;
// 		s.insert({1,n});
// 		set<lli>ans;
// 		while(!s.empty()){
// 			lli l=(*(s.begin())).ff;
// 			lli r=(*(s.begin())).ss;
// 			if(v[l]==v[r]){
// 				ans.insert(presum[r]-presum[l-1]);
// 				s.erase(s.begin());
// 				continue;
// 			}
// 			ans.insert(presum[r]-presum[l-1]);
// 			lli mid= (v[l]+v[r])/2;
// 			lli index = upper_bound(v.begin(),v.end(),mid)-v.begin();
// 			s.erase(s.begin());
// 			if(l<index){
// 				s.insert({l,index-1});
// 			}
// 			if(r>=index){
// 				s.insert({index,r});
// 			}
// 		}
// 		while(q--){
// 			cin >> sum;
// 			if(ans.find(sum)!=ans.end()){
// 				cout << "Yes" << endl;
// 			}
// 			else{
// 				cout << "No" << endl;
// 			}
// 		}
// 		s.clear();
// 	}
// }
