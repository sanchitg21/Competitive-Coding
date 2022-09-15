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
// const int M=2e5+5;
// const int INF = 2e9;
  
// void bfs(lli root,vector<vll>&graph,lli k){
//     vll visited(graph.size(),0);
//     queue<lli>q;
//     mps mp;
//     q.push(root);
//     visited[root]=1;
//     while(!q.empty()){
//         root = q.front();
//         for(lli node: graph[root]){
//             if(!visited[node]){
//                 visited[node]=1;
//                 q.push(node);
//                 mp[node+1]=root+1;
//             }
//         }
//         q.pop();
//     }
//     lli e,b;
//     for(lli i=0;i<k;i++){
//         cin >> e >> b;
//         while(b){
//             e=mp[e];
//             if(e==0){
//                 break;
//             }
//             b--;
//         }
//         if(!e){
//             cout << -1 << endl;
//         }
//         else{
//             cout << e << endl;
//         }
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,input;
// 	cin >> n >> k;
//     vector<vll>graph(n);
//     for(i=1;i<n;i++){
//         cin >> input;
//         graph[input-1].pb(i);
//         graph[i].pb(input-1);
//     }
//     bfs(0,graph,k);
// }
 

 #include<bits/stdc++.h>
using namespace std;
#define SZ 200005
 
int n, m, x,q,u,v,k; 
 
int L[SZ]; 
vector<int> adj[SZ]; 
int jump[21][SZ];
 
void dfs(int u, int p, int l) 
{
    jump[0][u] = p;
    L[u] = l;
	
	for (int v: adj[u]) 
		if(v != p) 
		dfs(v, u, l+1);
}
 
void preprocess_LCA()
{	
	dfs(1, -1, 0);
		
	for (int i = 1; 1<<i <= n ; i++) 
	for (int j = 0; j <= n ; j++)
	jump[i][j] = jump[i-1][jump[i-1][j]];
}
 
int main()
{
    cin >> n >> q;
    for(int i = 2; i <= n; i++) {
        cin >> u;
        adj[u].push_back(i);
        adj[i].push_back(u);
    }    
    preprocess_LCA();
    for(int i=0;i<=20;i++){
        for(int j=0;j<=100;j++){
            cout << jump[i][j] << " ";
        }
        cout << endl;
    }
    while(q--) {
        cin >> u >> k;
		int boss = u;
		for(int i=0; i<=20; i++)
		if(k & (1<<i))
		boss = jump[i][boss];
 
        cout << (boss==0 ? -1 : boss) << endl;
    }
}