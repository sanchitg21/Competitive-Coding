// CODE BY Sanchit Gupta
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

void dijsktra(lli root,vector<vpl>&graph,map<lli,vll> &mp){
    lli n=graph.size();
    vll dist(n);
    for(lli i=0;i<n;i++){
        dist[i]=INF;
    }
    dist[root]=0;
    set<pair<lli,lli>>s;
    s.insert({0,root});
    while(!s.empty()){
        auto it=*(s.begin());
        lli nodedist = it.ff;
        lli node = it.ss;
        s.erase(s.begin());
        for(lli i=0;i<graph[node].size();i++){
            if(nodedist + graph[node][i].ff < dist[graph[node][i].ss]){
                auto it=s.find({dist[graph[node][i].ss],graph[node][i].ss});
                if(it!=s.end()){
                    s.erase(it);
                }
                dist[graph[node][i].ss] = nodedist + graph[node][i].ff;
                s.insert({dist[graph[node][i].ss],graph[node][i].ss});
            }
        }
    }
    lli count=0;
    for(lli i=0;i<dist.size();i++){
        count += mp[i].size() - (lower_bound(mp[i].begin(),mp[i].end(),dist[i])-mp[i].begin());
    }
    cout << count << endl;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v,wt;
    cin >> n >> m >> k;
    vector<vpl>graph(n);
    map<pair<lli,lli>,lli> dist;
    for(i=0;i<m;i++){
        cin >> u >> v >> wt;
        if(dist[{min(u,v),max(u,v)}]){
            dist[{min(u,v),max(u,v)}]=min(wt,dist[{min(u,v),max(u,v)}]);
        }
        else{
            dist[{min(u,v),max(u,v)}]=wt;
        }
    }
    for(auto it=dist.begin();it!=dist.end();++it){
        graph[(it->ff).ff-1].pb({it->ss,(it->ff).ss-1});
        graph[(it->ff).ss-1].pb({it->ss,(it->ff).ff-1});
    }
    map<lli,vll> mp;
    for(i=0;i<k;i++){
        cin >> v >> wt;
        mp[v-1].pb(wt);
    }
    for(auto it=mp.begin();it!=mp.end();++it){
        sa(it->ss);
    }
    dijsktra(0,graph,mp);
}