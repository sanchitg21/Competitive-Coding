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

// M1 - KRUSKAL
// lli root(lli i,vll &id){
//     while(id[i]>=0){
//         i=id[i];
//     }
//     return i;
// }

// void w_union(lli u ,lli v,vll &id){
//     id[root(u,id)] += id[root(v,id)]; 
//     id[root(v,id)]=root(u,id);
// }

// lli kruskal(vector<pair<lli,pair<lli,lli>>>&graph,vll& id){
//     lli mincost=0;
//     for(lli i=0;i<graph.size();i++){
//         lli u=graph[i].ss.ff;
//         lli v=graph[i].ss.ss;
//         if(root(u,id)!=root(v,id) && id[v]<0){
//             mincost+=graph[i].ff;
//             w_union(u,v,id);
//         }
//     }
//     return mincost;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,u,v,wt;
// 	cin >> n;
//     vll input(n);
//     for(i=0;i<n;i++){
//         cin >> input[i];
//     }
//     cin >> m;
//     vector<pair<lli,pair<lli,lli>>>graph;
//     for(i=0;i<m;i++){
//         cin >> u >> v >> wt;    
//         graph.pb({wt,{u-1,v-1}});
//     }
//     sa(graph);
//     vll id(n,-1);
    
//     lli ans=kruskal(graph,id); 
    
//     lli count=0;
//     for(i=0;i<n;i++){
//         if(id[i]>=0){
//             count++;
//         }
//     }   
//     if(count==n-1){
//         cout << ans << endl;
//     }
//     else{
//         cout << -1 << endl;
//     }
// }

// M2- PRIM

lli prim(lli root,vll& visited,vector<vpl>& graph){
    priority_queue<pair<lli,lli>,vpl,greater<pair<lli,lli>>>q;
    q.push({0,root});
    lli mincost=0;
    while(!q.empty()){
        lli cost= q.top().ff;
        lli node= q.top().ss;
        q.pop();
        if(visited[node]==true){
            continue;
        }
        visited[node]=true;
        mincost+=cost;
        for(lli i=0;i<graph[node].size();i++){
            if(!visited[graph[node][i].ss]){
                q.push(graph[node][i]);
            }
        }
    }
    return mincost;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,wt,u,v,ans;
	cin >> n;
    vll input(n);
    for(i=0;i<n;i++){
        cin >> input[i];
    }
    cin >> m;
    vector<vpl>graph(n);
    lli root=1;
    mps mpu;
    mps mpv;
    for(i=0;i<m;i++){
        cin >> u >> v >> wt;
        mpu[u]=1;
        mpv[v]=1;
        graph[u-1].pb({wt,v-1});
    }
    for(auto it=mpu.begin();it!=mpu.end();++it){
        if(mpv[it->ff]==0){
            root=it->ff;
        }
    }
    vll visited(n,0);
    ans = prim(root-1,visited,graph);

    lli count=0;
    for(i=0;i<n;i++){
        if(visited[i]==1){
            count++;
        }
    }
    if(count==n){
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }
}