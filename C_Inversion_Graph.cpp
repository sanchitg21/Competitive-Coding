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
    
//M1
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for(int i = 0; i < n; i++){
//             cin >> arr[i];
//         }
//         set<int> s;
//         for(int i = 0; i < n; i++){
//             if(s.upper_bound(arr[i]) == s.end())
//                 s.insert(arr[i]);
//             else{
//                 auto it = s.upper_bound(arr[i]);
//                 vector<int> extra;                
//                 while(it != s.end()){
//                     extra.pb(*it);
//                     it++;
//                 }
//                 for(int i = 0; i < (extra).size() - 1; i++){
//                     s.erase(extra[i]);
//                 }
//             }
//         }
//         cout << s.size() << endl;
//     }
// }

//M2
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             v[i]--;
//         }
//         lli ans=0;
//         lli mx=-1;
//         for(i=0;i<n;i++){
//             mx=max(mx,v[i]);
//             if(mx==i){
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
// }

//M3 DSU
// lli find_root(lli root,vll &id){
//     while(id[root]>=0){
//         if(id[id[root]]>=0){
//             id[root]=id[id[root]];
//         }
//         root=id[root];
//     }
//     return root;
// }

// void w_union(vll &arr, lli u, lli v){
//     if(find_root(u,arr)==find_root(v,arr)){
//         return;
//     }
//     if(abs(arr[find_root(u,arr)]) > abs(arr[find_root(v,arr)])){
//         arr[find_root(u,arr)] += arr[find_root(v,arr)];
//         arr[find_root(v,arr)]= find_root(u,arr);
//     }
//     else{
//         arr[find_root(v,arr)] += arr[find_root(u,arr)];
//         arr[find_root(u,arr)]= find_root(v,arr);
//     }
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli n,m,t,i,j,k;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             v[i]--;
//         }        
//         vll arr(n,-1);
//         set<lli>s;
//         for(i=0;i<n;i++){
//             if(s.lower_bound(v[i]) == s.end()){
//                 s.insert(v[i]);
//             }
//             else{
//                 auto it=s.lower_bound(v[i]);
//                 lli mx;
//                 while(it!=s.end()){
//                     mx=*it;
//                     w_union(arr,mx,v[i]);
//                     it=s.erase(it);
                    
//                 }
//                 s.insert(mx);
//             }
//         }
//         lli count=0;
//         for(i=0;i<n;i++){
//             if(arr[i]<0){
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
// }


// M4 DFS

// void dfs(lli root,vll &visited, vector<vll>&graph){
//     visited[root]=1;
//     for(lli node: graph[root]){
//         if(!visited[node]){
//             dfs(node,visited,graph);
//         }
//     }
// }
    
// void make_edge(vector<vll>&graph, lli u, lli v){
//     graph[u].pb(v);
//     graph[v].pb(u);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             v[i]--;
//         }
//         //graph
//         vector<vll>graph(n);
//         set<lli>s;
//         for(i=0;i<n;i++){
//             if(s.lower_bound(v[i])==s.end()){
//                 s.insert(v[i]);
//                 continue;
//             }
//             else{
//                 auto it=s.lower_bound(v[i]);
//                 lli mx;
//                 while(it!=s.end()){
//                     mx=*it;
//                     make_edge(graph,v[i],*it);
//                     it=s.erase(it);
//                 }
//                 s.insert(mx);
//             }
//         }
//         vll visited(n,0);
//         lli count=0;
//         for(i=0;i<n;i++){
//             if(!visited[i]){
//                 dfs(i,visited,graph);
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
// }

//M5-STACK

void dfs(lli root,vll &visited, vector<vll>&graph){
    visited[root]=1;
    for(lli node: graph[root]){
        if(!visited[node]){
            dfs(node,visited,graph);
        }
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
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            v[i]--;
        }
        stack<lli>q;
        vector<vll>graph(n);
        for(i=0;i<n;i++){
            lli mx=0;
            lli index=i;
            while(!q.empty() && v[q.top()]>v[i]){
                graph[v[q.top()]].pb(v[i]);
                graph[v[i]].pb(v[q.top()]);
                if(mx<v[q.top()]){
                    mx=v[q.top()];
                    index=q.top();
                }
                q.pop();
            }
            q.push(index);
        }
        vll visited(n,0);
        lli count=0;
        for(i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,visited,graph);
                count++;
            }
        }
        cout << count << endl;
    }
}
