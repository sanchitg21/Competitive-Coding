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
    lli V;
    vector<vll>edge;
    vll visited;
    Graph(lli v){
        V=v;
        edge.resize(V);
        visited.resize(V,0);
    }
    void addEdge(lli u,lli v){
        edge[u].pb(v);
        edge[v].pb(u);
    }
    // void display(){
    //     for(lli i=0;i<V;i++){
    //         cout << i << " ";
    //         for(lli j=0;j<edge[i].size();j++){
    //             cout << edge[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    void dfs(lli root){
        visited[root]=1;
        for(lli node: edge[root]){
            if(!visited[node]){
                dfs(node);
            }
        }
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n >> m;
    Graph g(n);
    for(i=0;i<m;i++){
        cin >> u >> v;
        g.addEdge(u-1,v-1);
    }
    int component=0;
    vll ans;
    for(i=0;i<n;i++){
        if(g.visited[i]==0){
            ans.pb(i+1);
            g.dfs(i);
            component++;
        }
    }
    cout << component-1 << endl;
    for(i=0;i+1<ans.size();i++){
        cout << ans[i] << " " << ans[i+1] << endl;
    }
}
