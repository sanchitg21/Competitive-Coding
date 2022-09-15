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

class Graph{
    public:
    int V;
    mps count;
    vector<vll> graph;  // adjacent list
    vll visited;
    Graph(int v){
        V=v;
        graph.resize(V);
        visited.resize(V,0);
    }
    void addEdge(int u, int v){
        graph[u].pb(v);
        graph[v].pb(u);
    }
    void display(){
        for(lli i=0;i<V;i++){
            for(lli j=0;j<graph[i].size();j++){
                cout << graph[i][j] << " ";
            }
            cout << endl;
        }
    }
    void dfs(int root){
        visited[root]=1;
        count[root]=1;
        for(lli node: graph[root]){
            if(!visited[node]){
                count[node]=1;
                dfs(node);
            }
        }
    }

};


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
    vector<vll> v(m);
    for(i=0;i<m;i++){
        cin >> k;
        v[i].resize(k);
        for(j=0;j<k;j++){
            cin >> v[i][j];
            v[i][j]--;
        }
    }
    Graph g(n);
    for(i=0;i<m;i++){
        for(j=0;j+1<v[i].size();j++){
            g.addEdge(v[i][j],v[i][j+1]);
        }
    }
    // g.display();
    vll ans(g.V,0);
    for(i=0;i<g.V;i++){
        if(!g.visited[i]){
            g.dfs(i);
        }
        for(auto it=g.count.begin();it!=g.count.end();++it){
            ans[it->ff]=g.count.size();
        }
        g.count.clear();
    }
    for(i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}
