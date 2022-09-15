// // recursive method

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

// template<typename T> class graph{
//     map<T,vector<T>> l;
    
//     public:
//         void addEdge(T x, T y){
//             l[x].push_back(y);
//             l[y].push_back(x);
//         }
//         void dfs_helper(T src,map<T,bool> &visited){
//             cout << src << " ";
//             visited[src]=true;
//             for(T nbr: l[src]){
//                 if(!visited[nbr]){
//                     dfs_helper(nbr,visited);
//                 }
//             }
//         }   
//         void dfs(T root){
//             map<T,bool>visited;
//             // Mark all the nodes as not visited in the beginning
//             for(auto node: visited){
//                 visited[node.first]=false;
//             }   
//             dfs_helper(root,visited);
//         }
// };

// int main(){
//     graph<lli> g;
//     g.addEdge(4,1);
//     g.addEdge(1,2);
//     g.addEdge(4,3);
//     g.addEdge(2,3);
//     g.addEdge(3,10);
//     g.addEdge(3,9);
//     g.addEdge(2,5);
//     g.addEdge(2,8);
//     g.addEdge(2,7);
//     g.addEdge(5,6);
//     g.addEdge(5,8);
//     g.addEdge(5,7);
//     g.addEdge(7,8);
//     g.addEdge(0,1);
//     g.dfs(0);
// }

//Iterative method. IN BFS, JUST REPLACE QUEUE WITH STACK

// class Graph{
// public:
//     lli V;
//     vector<vll>edge;
//     vll visited;
//     vll ans;

//     Graph(lli v){   // v-->vertices
//         V = v;
//         edge.resize(V);
//         visited.resize(V);
//         ans.resize(V);
//     }
//     void addEdge(lli u, lli v){
//         edge[u].pb(v);
//         edge[v].pb(u);
//     }   

//     void display(){
//         for(lli i=0;i<V;i++){
//             for(lli j=0;j<edge[i].size();j++){
//                 cout << edge[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     void bfs(lli node){
//         for(lli i=0;i<visited.size();i++){
//             visited[i]=0;
//         }
//         stack<lli>q;
//         q.push(node);
        
//         while(!q.empty()){
//             lli i=q.top();
//             q.pop();
//             if(!visited[node]){
//                 visited[node]=1;
//             }
//             for(lli j:edge[i]){
//                 if(!visited[j]){
//                     visited[j]=1;
//                     q.push(j);
//                     ans[j]=ans[i]+1;
//                 }
//             }
//             cout << i << " ";
//         } 
//         cout << endl;
//     }

//     void bfsdisplay(){
//         for(lli i=0;i<V;i++){
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     Graph g(11);
//     cout << "Adjacency List" << endl;
//     g.addEdge(4,1);
//     g.addEdge(1,2);
//     g.addEdge(4,3);
//     g.addEdge(2,3);
//     g.addEdge(3,10);
//     g.addEdge(3,9);
//     g.addEdge(2,5);
//     g.addEdge(2,8);
//     g.addEdge(2,7);
//     g.addEdge(5,6);
//     g.addEdge(5,8);
//     g.addEdge(5,7);
//     g.addEdge(7,8);
//     g.addEdge(0,1);
//     g.display();
//     cout << endl;

//     g.bfs(0);
//     g.bfsdisplay();
// }


class Graph{
    public:
    lli v;
    vector<vll>graph;
    vll visited;
    vll ans;
    lli cycle=0;
    mps mp;
    lli total=0;

    Graph(lli V){
        v=V;
        graph.resize(v);
        visited.resize(v);
        ans.resize(v,0);
    }

    void addEdge(lli u,lli v){
        graph[u].pb(v);
        graph[v].pb(u);
    }

    void dfs(lli root){
        visited[root]=1;
        cout << root << " ";
        for(lli node: graph[root]){
            if(!visited[node]){
                dfs(node);
            }
        }
    }

    // //recursion
    // void dfs(lli root){
    //     visited[root]=1;
    //     cout << root << " ";
    //     for(lli node: edge[root]){
    //         if(!visited[node]){
    //             ans[node]=ans[root]+1;
    //             dfs(node);
    //         }
    //     }
    // }

    // void dfsspanningtree(){
    //     for(lli i=0;i<V;i++){
    //         cout << ans[i] << " ";
    //     }
    //     cout << endl;
    // }
    // void initialize(){
    //     for(lli i=0;i<V;i++){
    //         visited[i]=0;
    //     }
    // }
    // void dfscheckcycle(lli root, lli parent){
    //     mp[parent]=root;
    //     visited[root]=1;
    //     lli flag=0;
    //     for(lli node: edge[root]){
    //         if(!visited[node]){
    //             dfscheckcycle(node,root);
    //         }
    //         else if(parent != node){
    //             cycle=1;
    //             total++;
    //             cout << root << " " << node << endl;
    //             return;
    //         }
    //     }
    // }
    
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;

    Graph g((lli)10);
    cout << "Adjacency List" << endl;

    // g.addEdge(4,1);
    // g.addEdge(1,2);
    // g.addEdge(4,3);
    // g.addEdge(2,3);
    // g.addEdge(3,10);
    // g.addEdge(3,9);
    // g.addEdge(2,5);
    // g.addEdge(2,8);
    // g.addEdge(2,7);
    // g.addEdge(5,6);
    // g.addEdge(5,8);
    // g.addEdge(5,7);
    // g.addEdge(7,8);
    // g.addEdge(0,1);
    g.addEdge(5,9);
    g.addEdge(8,5);
    g.addEdge(7,6);
    g.addEdge(7,9);
    g.addEdge(3,9);
    g.addEdge(2,1);
    g.addEdge(7,2);
    g.addEdge(3,6);
    g.addEdge(7,1);
    
    lli component =0;
    for(i=0;i<g.v;i++){
        if(g.visited[i]==0){
            component++;
            g.dfs(i);
            cout << endl;
        }
    }

    cout << "There is/are " << component << " component/s" << endl;

    // g.dfsspanningtree();
    // cout << endl;
    
    // g.initialize();
    // g.dfscheckcycle(0,0);
    // if(g.cycle){
    //     cout << "Yes, there are " << g.total << " cycle/s!" << endl;
    // }
    // else{
    //     cout << "No Cycle!" << endl;
    // }
}