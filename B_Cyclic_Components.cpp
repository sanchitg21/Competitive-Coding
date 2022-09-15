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

bool flag=true;
void dfs(lli root, vll& visited, vector<vll>& graph){
    visited[root]=1;
    // cout << root << " ";
    if(graph[root].size()!=2){
        flag=false;
    }
    for(lli node : graph[root]){
        if(!visited[node]){
            dfs(node,visited,graph);
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n >> m;
    vector<vll>graph(n);
    for(int i=0;i<m;i++){
        cin >> u >> v;
        graph[u-1].pb(v-1);
        graph[v-1].pb(u-1);
    }
    vll visited(n,0);
    lli ans=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,visited,graph);
            // cout << endl;
            ans += flag;
            flag=true;
        }
    }
    cout << ans << endl;
}
