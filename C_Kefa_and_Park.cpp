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

// lli flag1=0;
// void dfs(lli root,vector<vll>&graph,vll &visited,vll &cat,lli count,lli m,lli flag){
//     visited[root]=1;
//     lli flag2=0;
//     for(lli node: graph[root]){
//         if(!visited[node]){
//             flag2=1;
//             if(cat[node]==1 && count>=m){
//                 dfs(node,graph,visited,cat,count+1,m,1);
//             }
//             else if(cat[node]==1 && count<m){
//                 dfs(node,graph,visited,cat,count+1,m,0);
//             }
//             else if(cat[node]==0 && count>m){
//                 dfs(node,graph,visited,cat,count,m,1);
//             }
//             else if(cat[node]==0 && count<=m){
//                 dfs(node,graph,visited,cat,0,m,0);
//             }
//         }
//     } 
//     if(flag2==0 && flag==0){
//         flag1++;
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli n,m,t,i,j,k,u,v;
//     cin >> n >> m;
//     vll cats(n);
//     for(i=0;i<n;i++){
//         cin >> cats[i];
//     }

//     //addEdge
//     vector<vll>graph(n);
//     for(i=1;i<n;i++){
//         cin >> u >> v;
//         graph[u-1].pb(v-1);
//         graph[v-1].pb(u-1);
//     }
    
//     vll visited(n,0);
//     dfs(0,graph,visited,cats,cats[0],m,0);
//     cout << flag1 << endl;
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
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

lli ans=0; 
lli bound;

void dfs(lli root,vll& visited,vector<vll>& graph,lli count,vll& v){
	visited[root]=1;
	lli flag=0;
	if(count+v[root]>bound){
		return;
	}
	for(lli node: graph[root]){
		if(!visited[node]){
			flag=1;
			if(v[root]==1){
				dfs(node,visited,graph,count+1,v);
			}
			else{
				dfs(node,visited,graph,0,v);
			}
		}
	}
	if(flag==0){
		ans++;
	}
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,w;	
	cin >> n >> m;
	vll v(n);
	for(i=0;i<n;i++){
		cin >> v[i];
	}
	vector<vll>graph(n);
	for(i=0;i+1<n;i++){
		cin >> u >> w;
		graph[u-1].pb(w-1);
		graph[w-1].pb(u-1);
	}
	vll visited(n,0);
	bound=m;
	dfs(0,visited,graph,0,v);
	cout << ans << endl;
}