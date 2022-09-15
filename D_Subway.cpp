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

lli cycle=0;
mps mp;
lli root1;
lli root2;
vector<vll> edge;
void dfs(lli root,lli parent,vll &visited, vector<vll>&graph){
    visited[root]=1;
    mp[root]=parent;
    // cout << root << endl;
    for(lli i:graph[root]){
        if(!visited[i]){
            dfs(i,root,visited,graph);
        }
        else if(parent!=i && parent!=-1){
            if(edge[root][i]==0 && edge[i][root]==0){
                continue;
            }
            cycle++;
            root1=i;
            root2=root;
            edge[root][i]=0;
            edge[i][root]=0;
            
        }
    }
}

void bfs(lli root,vll &ans,vector<vll>&graph){
    queue<pair<lli,lli>>q;
    q.push({root,0});
    vll visited(ans.size(),0);
    visited[root]=1;
    while(!q.empty()){
        lli node=q.front().ff;
        lli level=q.front().ss;
        ans[node]=min(ans[node],level);
        q.pop();
        for(lli i:graph[node]){
            if(!visited[i]){
                q.push({i,level+1});
                visited[i]=1;
            }
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n;
    vector<vll>graph(n);
    edge.resize(n);
    for(i=0;i<n;i++){
        edge[i].resize(n);
    }
    for(i=0;i<n;i++){
        cin >> u >> v;
        graph[u-1].pb(v-1);
        graph[v-1].pb(u-1);
        edge[u-1][v-1]=1;
        edge[v-1][u-1]=1;
    }
    // detect all vertices of cycles
    vll visited(n,0);
    dfs(0,-1,visited,graph);
    vll w;
    w.pb(root2);
    
    while(root2!=root1){
        root2=mp[root2];
        w.pb(root2);
    }
    vll ans(n,INF);
    for(i=0;i<w.size();i++){
        ans[w[i]]=0;
        bfs(w[i],ans,graph);
    }
    for(i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
