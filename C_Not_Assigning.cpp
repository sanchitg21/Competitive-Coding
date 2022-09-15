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

map<pair<lli,lli>,lli> mp;

void dfs(lli root,lli val,vll &visited,vector<vll>& graph){
    visited[root]=1;
    for(lli i:graph[root]){
        if(!visited[i]){
            if(val==2){
                mp[{min(root,i),max(root,i)}]=2;
                val=3;
                dfs(i,3,visited,graph);
            }
            else{
                mp[{min(root,i),max(root,i)}]=3;
                val=2;
                dfs(i,2,visited,graph);
            }
            
        }
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> t;
	while(t--){
		cin >> n;
        vector<vll>graph(n);
        map<lli,pair<lli,lli>>pm;
        for(i=0;i+1<n;i++){
            cin >> u >> v;
            mp[{min(u-1,v-1),max(u-1,v-1)}]=0;
            pm[i]={min(u-1,v-1),max(u-1,v-1)};
            graph[u-1].pb(v-1);
            graph[v-1].pb(u-1);
        }
        vll visited(n,0);
        lli flag=0;
        for(i=0;i<n;i++){
            if(graph[i].size()>2){
                flag=1;
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        }
        dfs(0,2,visited,graph);
        for(auto it=pm.begin();it!=pm.end();it++){
            cout << mp[(it->ss)] << " ";
        }
        cout << endl;
        mp.clear();
	}
}