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
const lli INF = 2e12;

template<typename T>
class Graph{
    public:
    map<T,vector<pair<T,lli>>> m;
    
    void addEdge(T u, T v,lli dist){
        m[u].pb({v,dist});
        m[v].pb({u,dist});
    }

    void display(){
        for(auto i: m){
            cout << i.ff << endl;
            for(auto j: (i.ss)){
                cout << j.ff << " " << j.ss << endl;
            }
            cout << endl;
        }
    }

    void dijsktra(T src,lli n){
        map<T,lli>dist;
        mps parent;
        for(auto j:m){
            dist[j.ff]= INF;
        }
        set<pair<lli,T>>s;
        dist[src]=0;
        s.insert({0,src});
        while(!s.empty()){
            auto it= *(s.begin());
            lli node = it.ss;
            lli nodedist = it.ff;
            s.erase(s.begin());
            for(auto child: m[node]){
                if(nodedist + child.ss < dist[child.ff]){        
                    parent[child.ff]=node;   
                    //Delete old pair from the set (if it exists)
                    auto it=s.find({dist[child.ff],child.ff});
                    if(it!=s.end()){
                        s.erase(it);
                    }
                    dist[child.ff] = nodedist + child.ss;

                    //insert the new one
                    s.insert({dist[child.ff],child.ff});
                }
            }
        }
        if(dist[n]==0 || dist[n]==INF){
            cout << -1 << endl;
            return;
        }
        vll ans;
        while(parent[n]){
            ans.pb(n);
            n=parent[n];
        }
        ans.pb(1);
        reverse(ans.begin(),ans.end());
        for(lli i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v,wt;
   	Graph<lli> g;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v >> wt;
        g.addEdge(u,v,wt);
    }
    g.dijsktra(1,n);
}