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

//M1 DSU

lli find_root(lli i,vll& arr){
    while(arr[i]>=0){
        i=arr[i];
    }
    return i;
}

void w_union(vll& arr,lli u,lli v){
    if(find_root(u,arr) == find_root(v,arr)){
        return;
    }
    if(abs(arr[find_root(u,arr)]) >= abs(arr[find_root(v,arr)])){
        arr[find_root(u,arr)] += arr[find_root(v,arr)];
        arr[find_root(v,arr)]=find_root(u,arr);
    }
    else{
        arr[find_root(v,arr)] += arr[find_root(u,arr)];
        arr[find_root(u,arr)]=find_root(v,arr);
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,count=0,v;
	cin >> n >> m;
    vector<vll> lang(m+1);
    for(i=0;i<n;i++){
        cin >> k;
        if(k==0){
            lang[0].pb(i);
            count++;
        }
        for(j=0;j<k;j++){
            cin >> u;
            lang[u].pb(i);
        }
    }
    
    vll arr(n,-1);
    lli component=0;

    for(i=1;i<=m;i++){
        for(j=0;j+1<lang[i].size();j++){
            u=lang[i][j];
            v=lang[i][j+1];
            w_union(arr,u,v);
        }
    }

    for(i=0;i<n;i++){
        if(arr[i]<0){
            component++;
        }
    }
    if(component==count){
        cout << count << endl;
    }
    else{
        cout << component-1 << endl;
    }
}

//M2 DFS
// void dfs(lli root,vector<vll>& graph, vll& visited){
//     visited[root]=1;
//     for(lli node: graph[root]){
//         if(!visited[node]){
//             dfs(node,graph,visited);
//         }
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,u,count=0;
// 	cin >> n >> m;
//     vector<vll> lang(m+1);
//     mps mp;
//     for(i=0;i<n;i++){
//         cin >> k;
//         if(k==0){
//             lang[0].pb(i);
//             mp[i]=1;
//             count++;
//         }
//         for(j=0;j<k;j++){
//             cin >> u;
//             lang[u].pb(i);
//         }
//     }
//     //addEdge
//     vector<vll>graph(n);
//     for(i=1;i<=m;i++){
//         for(j=0;j+1<lang[i].size();j++){
//             graph[lang[i][j]].pb(lang[i][j+1]);
//             graph[lang[i][j+1]].pb(lang[i][j]);
//         }
//     }

//     vll visited(n,0);
//     lli component=0;
//     for(i=0;i<n;i++){
//         if(visited[i]==0 && mp[i]==0){
//             dfs(i,graph,visited);
//             component++;
//         }
//     }
//     if(component==0){
//         cout << count << endl;
//     }
//     else{
//         cout << component+count-1 << endl;
//     }
// }

