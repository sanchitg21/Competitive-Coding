// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;

// template<typename T>
// class Graph{
//     public:
//     unordered_map<T,vector<pair<T,int>>> m;
    
//     void addEdge(T u, T v,int dist){
//         m[u].pb({v,dist});
//         m[v].pb({u,dist});
//     }

//     void display(){
//         for(auto i: m){
//             cout << i.ff << endl;
//             for(auto j: (i.ss)){
//                 cout << j.ff << " " << j.ss << endl;
//             }
//             cout << endl;
//         }
//     }

//     void dijsktra(T src){
//         map<T,int>dist;
//         for(auto j:m){
//             dist[j.ff]= INF;
//         }
//         set<pair<int,T>>s;
//         dist[src]=0;
//         s.insert({0,src});
//         while(!s.empty()){
//             auto it= *(s.begin());
//             int node = it.ss;
//             int nodedist = it.ff;
//             s.erase(s.begin());
//             for(auto child: m[node]){
//                 if(nodedist + child.ss < dist[child.ff]){                   
//                     //Delete old pair from the set (if it exists)
//                     auto it=s.find({dist[child.ff],child.ff});
//                     if(it!=s.end()){
//                         s.erase(it);
//                     }
//                     dist[child.ff] = nodedist + child.ss;

//                     //insert the new one
//                     s.insert({dist[child.ff],child.ff});
//                 }
//             }
//             for(auto d:dist){
//                 cout << d.ff << " " << d.ss << endl;
//             }

//         }
//     }
// };

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//    	Graph<int> g;
//     g.addEdge(1,2,1);
//     g.addEdge(1,3,4);
//     g.addEdge(2,3,1);
//     g.addEdge(3,4,2);
//     g.addEdge(1,4,7);
//     g.dijsktra(1);
// }


// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;

// map<int,int>dist;
// vector<vll>path; //maybe we have to replace with a set.Keep a watch

// void dijsktra(lli src,map<lli,vpl>& m){
//     for(auto j:m){
//         dist[j.ff]= INF;
//     }
//     set<pair<int,int>>s;
//     dist[src]=0;
//     s.insert({0,src});
//     path[0].pb(0);
//     while(!s.empty()){
//         auto it= *(s.begin());
//         int node = it.ss;
//         int nodedist = it.ff;
//         s.erase(s.begin());
//         for(auto child: m[node]){
//             if(nodedist + child.ss < dist[child.ff]){    
//                 path[child.ff]=path[node];
//                 path[child.ff].pb(child.ff);       
//                 //Delete old pair from the set (if it exists)
//                 auto it=s.find({dist[child.ff],child.ff});
//                 if(it!=s.end()){
//                     s.erase(it);
//                 }
//                 dist[child.ff] = nodedist + child.ss;

//                 //insert the new one
//                 s.insert({dist[child.ff],child.ff});
//             }
//         }
//     }
// };

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         lli arr[n][n];
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 cin >> arr[i][j];
//             }
//         }
//         path.resize(n);
//         map<lli,vpl>graph;
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 if(arr[i][j]){
//                     graph[i].pb({j,arr[i][j]});
//                 }
//             }
//         }
//         lli src,target;
//         cin >> src >> target;
//         dijsktra(src,graph);

//         lli ans;
//         for(auto d:dist){
//             if(d.ff==target){
//                 ans=d.ss;
//             }
//         }
//         cout << ans << endl;
//         for(i=0;i<path[target].size();i++){
//             cout << path[target][i] << " ";
//         }
//         cout << endl;
//     }
// }

//CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;

// vector<vll> ans;

// void dijsktra(lli root,vector<vpl>&graph){
//     lli n=graph.size();
//     vll dist(n);
//     ans.resize(n);
//     ans[root].pb(0);
//     for(lli i=0;i<n;i++){
//         dist[i]=INF;
//     }
//     priority_queue<pair<lli,lli>,vpl,greater<pair<lli,lli>>>s;
//     s.push({0,root});
//     while(!s.empty()){
//         auto it=s.top();
//         lli nodedist = it.ff;
//         lli node = it.ss;
//         s.pop();
//         for(lli i=0;i<graph[node].size();i++){
//             if(nodedist + graph[node][i].ff < dist[graph[node][i].ss]){
//                 ans[graph[node][i].ss]=ans[node];
//                 ans[graph[node][i].ss].pb(graph[node][i].ss);
//                 dist[graph[node][i].ss] = nodedist + graph[node][i].ff;
//                 s.push({dist[graph[node][i].ss],graph[node][i].ss});
//             }
//         }
//     }
//     lli mx=0;
//     for(auto d: dist){
//         mx=max(mx,d);
//     }
//     cout << mx << endl;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
//     while(t--){
//         cin >> n;
//         lli arr[n][n];
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 cin >> arr[i][j];
//             }
//         }
//         lli src,target;
//         cin >> src >> target;
//         vector<vpl>graph(n);
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 if(arr[i][j]){
//                     graph[i].pb({arr[i][j],j});
//                 }
//             }
//         }

//         dijsktra(src,graph);
//         for(i=0;i<ans[target].size();i++){
//             cout << ans[target][i] << " ";
//         }
//         cout << endl;
//     }
// }




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
const int INF = INT_MAX;

lli dijsktra(lli src,lli target,vector<vpl>& graph){
    lli n=graph.size();
    vll dist(n,INF);
    dist[src]=0;
    for(int j=1;j<=n-1;j++){
        for(int i=0;i<n;i++){
            int root = i;
            for(auto node: graph[root]){
                if(node.first + dist[root] < dist[node.second]){
                    dist[node.second] =  node.first + dist[root];
                }
            }
        }
    }
    
    return dist[target];
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v,wt;
    lli src,target;
    cin >> src >> target;
    cin >> n >> m;
    vector<vpl>graph(n);
    for(i=0;i<m;i++){
        cin >> u >> v >> wt;
        graph[u-1].pb({wt,v-1});
        graph[v-1].pb({wt,u-1});
    }
    cout << dijsktra(src,target,graph) << endl;
}
