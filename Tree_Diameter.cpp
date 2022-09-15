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
const int M=2e5+5;
const int INF = 2e9;

vll ans(M,0);

lli bfs(lli root,vector<vll>&graph){
    vll visited(graph.size());
    queue<pair<lli,lli>>q;
    q.push({root,0});
    visited[root]=1;
    while(!q.empty()){
        root = q.front().ff;
        lli height = q.front().ss;
        ans[root]=max(ans[root],height);
        for(lli node: graph[root]){
            if(!visited[node]){
                visited[node]=1;
                q.push({node,height+1});
            }
        }
        if(q.size()==1){
            break;
        }
        q.pop();
    }
    
    return root;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n;
    vector<vll> graph(n);
    for(i=0;i+1<n;i++){
        cin >> u >> v;
        u--;
        v--;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    lli end1= bfs(0,graph);
    lli end2 = bfs(end1,graph);
    bfs(end2,graph);
    cout << ans[end1] << endl;
}