//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

vll w;

void dfs(lli root,vll &visited, vector<vll>& graph){
	w.pb(root);
	visited[root]=1;
	for(lli node: graph[root]){
		if(!visited[node]){
			dfs(node,visited,graph);
		}
	}
}

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
		vll v(n);
		vector<vll>graph(n);
        for(i=0;i<n;i++){
			cin >> v[i];
			graph[i].pb(v[i]-1);
		}
		vll visited(n,0);
		vll ans;
		for(i=0;i<n;i++){
			if(!visited[i]){
				dfs(i,visited,graph);
			}
			if(w.size()<=1){
				w.clear();
				continue;
			}

			for(j=0;j<w.size();j++){
				w[j]=s[w[j]];
			}
			vll u;
			u=w;
			lli count=0;
			while(true){
				//rotate
				lli temp=w[w.size()-1];
				for(j=w.size()-1;j>=1;j--){
					w[j]=w[j-1];
				}
				w[0]=temp;
				count++;
				if(w==u){
					break;
				}
			}
			ans.pb(count);
			w.clear();
		}
		lli result=1;
		for(i=0;i<ans.size();i++){
			result =  lcm(result,ans[i]);
		}
		cout << result << endl;

	}
}
