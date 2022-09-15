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

lli ans=0;

void dfs(lli root,vector<vll>&graph, vll& visited){
    visited[root]=1;
    ans++;
    // cout << root << " ";
    for(lli node: graph[root]){
        if(!visited[node]){
            dfs(node,graph,visited);
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,l,x,y;
	cin >> l >> n >> m;
    vector<vector<string>>input(l,vector<string>(n));
    for(i=0;i<l;i++){
        for(j=0;j<n;j++){
            cin >> input[i][j];
        }        
    }
    cin >> x >> y;
    lli step=0,root;
    vector<vector<vll>>v(l,vector<vll>(n,vll(m,0)));
    for(i=0;i<l;i++){
        for(j=0;j<n;j++){
            for(k=0;k<m;k++){
                if(input[i][j][k]=='.'){
                    v[i][j][k]=step++;
                }
                else{
                    v[i][j][k]=-1;
                }
            }
        }
        root=v[0][x-1][y-1];
    }    

    //addEdge
    vector<vll>graph(step);
    for(j=0;j<n;j++){
        for(k=0;k<m;k++){
            for(i=0;i+1<l;i++){
                if(v[i][j][k]!=-1 && v[i+1][j][k]!=-1){
                    graph[v[i][j][k]].pb(v[i+1][j][k]);
                    graph[v[i+1][j][k]].pb(v[i][j][k]);
                }
            }       
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<n;j++){
            for(k=0;k+1<m;k++){
                if(v[i][j][k]!=-1 && v[i][j][k+1]!=-1){
                    graph[v[i][j][k]].pb(v[i][j][k+1]);
                    graph[v[i][j][k+1]].pb(v[i][j][k]);
                } 
            }
        }
        for(j=0;j<m;j++){
            for(k=0;k+1<n;k++){
                if(v[i][k][j]!=-1 && v[i][k+1][j]!=-1){
                    graph[v[i][k][j]].pb(v[i][k+1][j]);
                    graph[v[i][k+1][j]].pb(v[i][k][j]);
                } 
            }
        }
    } 
    
    vll visited(step,0);
    dfs(root,graph,visited);
    cout << ans << endl;
}
