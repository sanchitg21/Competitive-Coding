// // //CODE BY Sanchit Gupta
// // #define pb push_back
// // #define db double
// // #define lli long long int
// // #define sa(v) sort(v.begin(),v.end())
// // #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// // #define vpl vector<pair<lli,lli>>
// // #define vll vector<lli>
// // #define mps map<lli,lli>
// // #define mpst map<string,lli>
// // #define mpc map<char,lli>
// // #define ff first
// // #define ss second
// // #include<iostream>
// // #include<cmath>
// // #include<bits/stdc++.h>
// // #pragma GCC optimize("Ofast")
// // #include<algorithm>
// // using namespace std;
// // #define gcd(a,b) __gcd(a,b)
// // #define lcm(a,b) a*b/__gcd(a,b)
// // #define endl '\n'
// // const int mod=1e9+7;
// // const int M=1e5+1;
// // const int INF = 2e9;

// // lli nodes,edges;

// // lli prim(lli root, vll& visited, vector<vpl>& graph){
// //     priority_queue<pair<lli,lli>,vpl,greater<pair<lli,lli>>>q;
// //     lli mincost=0;
// //     q.push({0,root});
// //     while(!q.empty()){
// //         lli node= q.top().ss;
// //         lli cost= q.top().ff;
// //         q.pop();
// //         if(visited[node]==true){
// //             continue;
// //         }
// //         mincost += cost;
// //         visited[node]=true; 

// //         for(lli i=0;i<graph[node].size();i++){
// //             lli y=graph[node][i].ss;
// //             if(!visited[y]){
// //                 q.push(graph[node][i]);
// //             }
// //         }
// //     }
// //     return mincost;
// // }

// // int main(){
// // ios_base::sync_with_stdio(0);
// // cin.tie(0);
// // cout.tie(0);
// // 	lli n,m,t,i,j,k,u,v,weight,mincost;
// // 	cin >> nodes >> edges;
// //     vector<vpl> graph(nodes);
// //     for(int i=0;i<nodes;i++){
// //         cin >> u >> v >> weight;
// //         graph[u].pb({weight,v});
// //         graph[v].pb({weight,u});    
// //     }    
// //     vll visited(nodes,0);
// //     mincost= prim(1,visited,graph);
// //     cout << mincost << endl;
// // }


// CODE BY Sanchit Gupta
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


// lli prims(vector<vpl>& graph,vll& visited,lli root){
//     priority_queue<pair<lli,lli>,vpl,greater<pair<lli,lli>>>pq;
//     lli mincost=0;
//     pq.push({0,0});
//     while(!pq.empty()){
//         lli cost = pq.top().first;
//         lli node = pq.top().second;
//         pq.pop();
//         if(visited[node]==true){
//             continue;
//         }
//         visited[node]=1;
//         mincost += cost;

//         for(lli i=0;i<graph[node].size();i++){
//             if(!visited[graph[node][i].second]){
//                 pq.push(graph[node][i]);
//             }
//         }
//     }
//     return mincost;
// }

lli prims(vector<vpl> &graph, vector<lli> &visited,lli src){
    priority_queue<pair<lli,lli>,vpl,greater<pair<lli,lli>>>pq;
    lli ans = 0;
    pq.push({0,src});
    while(!pq.empty()){
        lli cost = pq.top().first;
        lli root = pq.top().second;
        pq.pop();
        if(visited[root]){
            continue;
        }
        visited[root]=1;
        ans += cost;
        
        for(auto node:graph[root]){
            if(!visited[node.second]){
                pq.push(node);
            }
        }
    }
    return ans;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,wt,u,v;
    cin >> n >> m;
    vector<vpl>graph(n);
    for(i=0;i<m;i++){
        cin >> u >> v >> wt;
        graph[u-1].pb({wt,v-1});
        graph[v-1].pb({wt,u-1});
    }
    vll visited(n,0);
    lli ans=prims(graph,visited,0);
    cout << ans << endl;
}

