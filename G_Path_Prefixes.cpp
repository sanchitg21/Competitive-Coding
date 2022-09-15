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

vector<lli>ans;
vector<lli>v;
map<pair<lli,lli>,pair<lli,lli>>mp;

void dfs(vector<lli> &visited, vector<vector<lli>> &graph, lli root,lli p,lli q){
    visited[root]=1;
    v.push_back(q);
    lli index = upper_bound(v.begin(),v.end(),p) - v.begin();
    ans[root] = index;
    for(lli node : graph[root]){
        if(!visited[node]){          
            lli a = p + mp[{root,node}].first;
            lli b = q + mp[{root,node}].second;
            dfs(visited,graph,node,a,b);
        }
    }

    v.erase(prev(v.end()));
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b,c;
	cin >> t;
	while(t--){
		cin >> n;
        vector<vector<lli>>graph(n);
        for(lli i=1;i+1<=n;i++){
            cin >> a >> b >> c;
            graph[a-1].push_back(i);
            mp[{a-1,i}] = {b,c};
        }
        vector<lli>visited(n,0);
        ans.resize(n);
        dfs(visited,graph,0,0,0);
        for(lli i=1;i<n;i++){
            cout << ans[i]-1 << " ";
        }
        cout << endl;
        ans.clear();
        mp.clear();
	}
}
