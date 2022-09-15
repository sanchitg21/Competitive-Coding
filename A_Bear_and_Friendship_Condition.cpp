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

// lli num=0;
// lli edges=0;

// void dfs(lli root,vll &visited,vector<vll>&graph,mps &mp){
//     visited[root]=1;
//     num++;
//     edges+=mp[root];
//     for(lli node: graph[root]){
//         if(!visited[node]){
//             dfs(node,visited,graph,mp);
//         }
//     }    
// }   

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,u,v;
// 	cin >> n >> m;
//     vector<vll>graph(n);
//     mps mp;
//     for(i=0;i<m;i++){
//         cin >> u >> v;
//         mp[u-1]++;
//         mp[v-1]++;
//         graph[u-1].pb(v-1);
//         graph[v-1].pb(u-1);
//     }
//     vll visited(n,0);
//     lli flag=0;
//     for(i=0;i<n;i++){
//         if(!visited[i]){
//             dfs(i,visited,graph,mp);
//             if(num*(num-1) != edges){
//                 flag=1;
//             }
//             num=0;
//             edges=0;
//         }
//     }
//     if(flag){
//         cout << "NO" << endl;
//     }
//     else{
//         cout << "YES" << endl;
//     }   
// }

// lli find_root(lli i,vll& arr){
//     while(arr[i]>=0){
//         if(arr[arr[i]]>=0){
//             arr[i]=arr[arr[i]];
//         }
//         i=arr[i];
//     }
//     return i;
// }

// void w_union(vll& arr,lli u,lli v){
//     if(find_root(u,arr) == find_root(v,arr)){
//         return;
//     }
//     if(abs(arr[find_root(u,arr)]) >= abs(arr[find_root(v,arr)])){
//         arr[find_root(u,arr)] += arr[find_root(v,arr)];
//         arr[find_root(v,arr)]=find_root(u,arr);
//     }
//     else{
//         arr[find_root(v,arr)] += arr[find_root(u,arr)];
//         arr[find_root(u,arr)]=find_root(v,arr);
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,u,v;
// 	cin >> n >> m;
//     vll arr(n,-1);
// 	for(i=0;i<m;i++){
//         cin >> u >> v;
//         w_union(arr,u-1,v-1);
//     }
//     lli a=0;
//     for(i=0;i<n;i++){
//         if(arr[i]<0){
//             a=a+abs(arr[i])*(abs(arr[i])-1)/2;
//         }
//     }   

//     if(a==m){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
// }


lli dfs(lli root,vll &visited,vector<vll>&graph){
    visited[root]=1;
    for(lli node: graph[root]){
        if(!visited[node]){
            return 1+dfs(node,visited,graph);
        }
    }    
    return 1;
}   

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n >> m;
    vector<vll>graph(n);
    for(i=0;i<m;i++){
        cin >> u >> v;
        graph[u-1].pb(v-1);
        graph[v-1].pb(u-1);
    }
    vll visited(n,0);
    lli flag=0;
    lli count=0;
    for(i=0;i<n;i++){
        if(!visited[i]){
            lli num=dfs(i,visited,graph);
            count+=num*(num-1)/2;
        }
    }
    if(count==m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }   
}