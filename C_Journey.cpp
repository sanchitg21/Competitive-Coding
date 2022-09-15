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

vll length(M,0);
vector<vll>parent;

void dfs(lli root,lli count,vector<vll>&graph,vll&visited){
    visited[root]=1;
    lli flag=0;
    vll child;
    child.pb(root);
    for(lli node: graph[root]){
        if(!visited[node]){
            flag=1;
            child.pb(node);
            dfs(node,count+1,graph,visited);
        }
    }
    parent.pb(child);
    if(!flag){
        length[root]=count;       
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n;
    vector<vll>graph(n);
    for(i=0;i+1<n;i++){
        cin >> u >> v;
        graph[u-1].pb(v-1);
        graph[v-1].pb(u-1);
    }
    vll visited(n,0);
    dfs(0,0,graph,visited);
    db ans=0;
    reverse(parent.begin(),parent.end());
    vector<db>final(n,0);
    final[0]=1;
    for(i=0;i<n;i++){
        for(j=1;j<parent[i].size();j++){
            final[parent[i][j]] = (db)final[parent[i][0]]/(parent[i].size()-1);
        }
    }
    for(i=0;i<n;i++){
        ans= ans+ final[i]*length[i];
    }
    cout << fixed << setprecision(15) << ans << endl;
}
