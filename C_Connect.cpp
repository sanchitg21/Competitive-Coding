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

vll c;

vll dfs(lli root,vector<vll>& graph,vll& visited){
    visited[root]=1;
    c.pb(root);
    for(lli node: graph[root]){
        if(!visited[node]){
            dfs(node,graph,visited);
        }
    }
    return c;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    pair<lli,lli>start;
    pair<lli,lli>end;
    cin >> start.ff >> start.ss >> end.ff >> end.ss;
    map<lli,pair<lli,lli>> mp;
    vector<string>input(n);
    for(i=0;i<n;i++){
        cin >> input[i];
    }
    lli step=0,root1,root2,ans=INF;
    vector<vll>v(n,vll(n));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(input[i][j]=='1'){
                v[i][j]=-1;
            }
            else{
                v[i][j]=step;
                mp[step]={i+1,j+1};
                if(i+1 == start.ff && j+1 == start.ss){
                    root1= step;
                }
                if(i+1 == end.ff && j+1 == end.ss){
                    root2= step;
                }
                step++;
            }
        }
    }
    //addEdge
    vector<vll> graph(step);
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(v[i][j]!=-1 && v[i][j-1]!=-1){
                graph[v[i][j]].pb(v[i][j-1]);
                graph[v[i][j-1]].pb(v[i][j]);
            }
            if(v[j][i]!=-1 && v[j-1][i]!=-1){
                graph[v[j][i]].pb(v[j-1][i]);
                graph[v[j-1][i]].pb(v[j][i]);
            }
        }
    }
    vll visited(step,0);
    vll a=dfs(root1,graph,visited);
    c.clear();
    vll b=dfs(root2,graph,visited);
    
    for(i=0;i<a.size();i++){
        for(j=0;j<b.size();j++){
            ans= min(ans,(mp[a[i]].ff - mp[b[j]].ff)*(mp[a[i]].ff - mp[b[j]].ff)  +  (mp[a[i]].ss - mp[b[j]].ss)*(mp[a[i]].ss - mp[b[j]].ss));
        }
    }
    cout << ans << endl;
}