#include<bits/stdc++.h>
using namespace std;

void bipartite(int u,vector<vector<int>> &graph, set<int> &a, set<int> &b, vector<int> &visited){
    int flag=0;
    visited[u]=1;
    if(a.find(u)==a.end() && b.find(u)==b.end()){
        a.insert(u);
        flag=1;
    }
    else if(a.find(u)==a.end()){
        flag=2;
    }
    else{
        flag=1;
    }
    if(flag==1){
        for(int v : graph[u]){
            if(!visited[v]){
                b.insert(v);
                bipartite(v,graph,a,b,visited);
            }       
        }    
    }
    else if(flag==2){
        for(int v: graph[u]){
            if(!visited[v]){
                a.insert(v);
                bipartite(v,graph,a,b,visited);
            }
        }
    }
}

int main(){
    // your code goes here
    int n,m,u,v;
    cin >> n;
    vector<vector<int>>graph(n);
    for(int i=0;i+1<n;i++){
        cin >> u >> v;
        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }
    set<int>a;
    set<int>b;
    vector<int>visited(n,0);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bipartite(0,graph,a,b,visited);
        }
    }

    long long int ans =0;
    for(auto it = a.begin();it!=a.end();it++){
        ans += (b.size() - (graph[*it].size()));
    }
    cout << ans << endl;
}