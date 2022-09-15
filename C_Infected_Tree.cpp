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

int dfs(vll &v, vector<vll> &graph, int root){
    lli count=1;
    for(int node:graph[root]){
        count+= dfs(v,graph,node);
    }
    return v[root] = count;
}

int solve(vll &dp, vector<vll> &graph, vll &num,lli root){
    if(graph[root].size()==2){
        return dp[root] = max(solve(dp,graph,num,graph[root][0]) + num[graph[root][1]] -1 , solve(dp,graph,num,graph[root][1]) + num[graph[root][0]] - 1);
    }
    else if(graph[root].size()==1){
        return dp[root] = num[graph[root][0]]-1;
    }
    return 0;
}

void creategraph(vector<vll> &graph, vector<vll> &edges, vll &visited, lli root){
    visited[root]=1;
    for(lli node : edges[root]){
        if(!visited[node]){
            graph[root].push_back(node);
        }
    }
    for(lli node: graph[root]){
        creategraph(graph,edges,visited,node);
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
        vector<vll>edges(n);
        vector<vll>graph(n);
        lli u,v;
        for(i=0;i+1<n;i++){
            cin >> u >> v;
            edges[u-1].push_back(v-1);
            edges[v-1].push_back(u-1);
        }
        int root = 0;
        vll visited(n,0);
        creategraph(graph,edges,visited,root);

        vll num(n);
        dfs(num,graph,root);
        vll dp(n,0);
        cout << solve(dp,graph,num,root) << endl;
	}   
}
