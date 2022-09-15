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

vll s;
lli a=0;
lli b=0;
lli dfs(lli root,vll &visited,vector<vll>&graph,lli step){
    visited[root]=1;
    s[root]=step;
    if(step==0){
        a++;
    }
    else{
        b++;
    }
    lli c=0;
    for(lli node: graph[root]){
        if(!visited[node] && step==0){
            c+=dfs(node,visited,graph,1);
        }
        if(!visited[node] && step==1){
            c+=dfs(node,visited,graph,0);
        }
    }
    return 1+c;
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
    s.resize(n,0);
    vll visited(n,0);
    for(i=0;i<n;i++){
        if(!visited[i])
        dfs(i,visited,graph,0);
    }
    cout << a << endl;
    for(i=0;i<n;i++){
        if(s[i]==0){
            cout << i << " ";
        }
    }
    cout << endl;
    cout << b << endl;
    for(i=0;i<n;i++){
        if(s[i]==1){
            cout << i << " ";
        }
    }
}
