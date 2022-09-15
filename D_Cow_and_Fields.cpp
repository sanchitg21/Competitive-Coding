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

void bfs(lli root,vll &ans,vector<vll>&graph){
    queue<pair<lli,lli>>q;
    q.push({root,0});
    vll visited(ans.size(),0);
    visited[root]=1;
    while(!q.empty()){
        lli node=q.front().ff;
        lli level=q.front().ss;
        ans[node]=level;
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
	cin >> n >> m >> k;
    vll input(k);
	for(i=0;i<k;i++){
        cin >> input[i];
        input[i]--;
    }
    vector<vll>graph(n,vll(n,0));
    for(i=0;i<m;i++){
        cin >> u >> v;
        graph[u-1].pb(v-1);
        graph[v-1].pb(u-1);
    }
    vll dist1(n,0);
    vll distn(n,0);
    vpl s(k);
    
    bfs(0,dist1,graph);
    bfs(n-1,distn,graph);
    for(i=0;i<k;i++){
        s[i]={dist1[input[i]]-distn[input[i]],input[i]};
    }
    sa(s);
    lli mx=0;
    lli best=0;
    for(i=0;i<k;i++){
        best=max(best,mx+distn[s[i].ss]);
        mx=max(mx,dist1[s[i].ss]);
    }
    cout << min(dist1[n-1],best+1);
}
