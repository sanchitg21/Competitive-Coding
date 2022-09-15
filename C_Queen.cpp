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



void dfs(lli root, vector<vll>& graph, vll& visited,vpl& v,vll&ans){
    visited[root]=1;
    if(v[root].ss ==0){
        ans[root]=0;
    }
    for(lli node: graph[root]){
        if(!visited[node]){
            if((v[node].ss==0 && v[v[node].ff].ss==1)){
                ans[v[node].ff]=0;
            } 
            dfs(node,graph,visited,v,ans);
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,c;
	cin >> t;
    vector<vll> graph(t);
    vpl v(t);
    lli root;
	for(i=0;i<t;i++){
		cin >> u >> c;
        if(u==-1){
            root=i;
        }
        else{
            graph[i].pb(u-1);
            graph[u-1].pb(i);
        }
        v[i].ss=c;
        v[i].ff = u-1;
	}
    vll visited(t,0);
    vll ans(t,1);
    dfs(root,graph,visited,v,ans);
    
    vll s;
    for(i=0;i<t;i++){
        if(ans[i]==1){
            s.pb(i+1);
        }
    }
    if(!s.size()){
        cout << -1 << endl;
        return 0;
    }
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++){
        cout << s[i] << " ";
    }
    cout << endl;
}