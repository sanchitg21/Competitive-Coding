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

//DFS
// lli flag=0;
// vpl ans;
// vll connected;

// void dfs(lli root,lli parent,vll& visited, vector<vll>& graph){
//     visited[root]=1;
//     for(lli node=0;node<graph[root].size();node++){
//         if(graph[root][node]==1 && !visited[node]){
//             dfs(node,root,visited,graph);
//         }
//         else if(graph[root][node]==1 && node!= parent){
//             flag=1;
//             graph[node][root]=0;
//             graph[root][node]=0; // this line is not required though
//             ans.pb({root,node});
//         }
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,u,v;
// 	cin >> n;
//     vector<vll>graph(n);
//     for(i=0;i<n;i++){
//         graph[i].resize(n,0);
//     }
//     for(i=0;i+1<n;i++){
//         cin >> u >> v;
//         graph[u-1][v-1]=1;
//         graph[v-1][u-1]=1;
//     }
//     vll visited(n,0);
//     for(i=0;i<n;i++){
//         if(!visited[i]){
//             dfs(i,i,visited,graph);
//             connected.pb(i);
//         }
//     }
//     cout << ans.size() << endl;
//     for(i=0;i<ans.size();i++){
//         cout << ans[i].ff+1 << " " << ans[i].ss+1 << " " << connected[0]+1 <<" " << connected[i+1]+1 << endl;
//     }
// }

// DSU
lli cycles=0;

lli find_root(lli root,vll &id){
    while(id[root]>=0){
        if(id[id[root]]>=0){
            id[root]=id[id[root]];
        }
        root=id[root];
    }
    return root;
}

vpl cycle;
void w_union(vll &arr,lli u,lli v){
    if(find_root(u,arr)==find_root(v,arr)){
        cycles++;
        cycle.pb({u,v});
        return;
    }
    if(abs(arr[find_root(u,arr)]) >= abs(arr[find_root(v,arr)])){
        arr[find_root(u,arr)] += arr[find_root(v,arr)];
        arr[find_root(v,arr)]=find_root(u,arr);
    }
    else{
        arr[find_root(v,arr)] += arr[find_root(u,arr)];
        arr[find_root(u,arr)]= find_root(v,arr);
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n;
    vll arr(n,-1);
    for(i=0;i+1<n;i++){
        cin >> u >> v;
        w_union(arr,u-1,v-1);
    }
    
    vll connected;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            connected.pb(i);
        }
    }
    cout << cycle.size() << endl;
    for(i=0;i<cycle.size();i++){
        cout << cycle[i].ff+1 << " " << cycle[i].ss+1 << " " << connected[0]+1 << " " << connected[i+1]+1 << endl;
    }
    cout << endl;
}
