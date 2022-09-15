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
    vector<vpl> graph;
    vll dist;
    Graph(lli v){
        V=v;
        graph.resize(V);
        dist.resize(V,INF);
    }
    void addEdge(lli u, lli v, lli wt){
        graph[u].pb({v,wt});
        graph[v].pb({u,wt});
    }
    void zeroonebfs(lli src){
        dist[src]=0;
        //BFS
        deque<lli>q;
        q.pb(src);
        while(!q.empty()){
            lli v=q.front();
            q.pop_front();
            for(lli i=0;i<graph[v].size();i++){
                // checking for the optimal distance
                if(dist[graph[v][i].ff] > dist[v] + graph[v][i].ss){
                    dist[graph[v][i].ff] = dist[v] + graph[v][i].ss;

                    //Put 0 weight edges in front and 1 weight edges at the back to access them in increasing order
                    if(graph[v][i].ss == 0){
                        q.push_front(graph[v][i].ff);
                    }
                    else{
                        q.push_back(graph[v][i].ff);
                    }
                }
            }
        }
        
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,v,i,j,k;
	cin >> v;
    Graph g(9);
    g.addEdge(0, 1, 0);
    g.addEdge(0, 7, 1);
    g.addEdge(1, 7, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 0);
    g.addEdge(2, 5, 0);
    g.addEdge(2, 8, 1);
    g.addEdge(3, 4, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 5, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(6, 7, 1);
    g.addEdge(7, 8, 1);
    lli src=0;
    g.zeroonebfs(src);    

    for(i=0;i<g.dist.size();i++){
        cout << g.dist[i] << " ";
    }
    cout << endl;
}

//General algorithm
// vector<int> d(n, INF);
// d[s] = 0;
// deque<int> q;
// q.push_front(s);
// while (!q.empty()) {
//     int v = q.front();
//     q.pop_front();
//     for (auto edge : adj[v]) {
//         int u = edge.first;
//         int w = edge.second;
//         if (d[v] + w < d[u]) {
//             d[u] = d[v] + w;
//             if (w == 1)
//                 q.push_back(u);
//             else
//                 q.push_front(u);
//         }
//     }
// }