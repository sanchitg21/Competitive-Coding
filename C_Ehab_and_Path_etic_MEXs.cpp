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

lli leaf=0;
lli z=2;
map<lli,pair<lli,lli>> pm;
map<pair<lli,lli>,lli> ans;

void dfs(lli root,lli parent,vector<vll>&graph,vll&visited){
    visited[root]=1;
    lli flag=0;
    for(lli node: graph[root]){
        if(!visited[node]){
            flag=1;
            dfs(node,root,graph,visited);
        }
    }
    if(!flag){
        ans[{min(root+1,parent+1),max(root+1,parent+1)}]= leaf;
        leaf++;
    }
    else{
        ans[{min(root+1,parent+1),max(root+1,parent+1)}]=graph.size()-z;
        z++;
    }
} 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n;
    if(n==2){
        cout << 0 << endl;
        return 0;
    }
    //addEdge
    mps mp;
    vector<vll>graph(n);
    for(i=1;i<n;i++){
        cin >> u >> v;
        pm[i]={min(u,v),max(u,v)};
        mp[u-1]++;
        mp[v-1]++;
        graph[u-1].pb(v-1);
        graph[v-1].pb(u-1);
    }
    lli root;
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->ss >=2){
            root = it->ff;
            break;
        }
    }
    vll visited(n,0);
    dfs(root,-1,graph,visited);

    for(auto it=pm.begin();it!=pm.end();++it){
        cout << ans[it->ss] << endl;
    }
}
