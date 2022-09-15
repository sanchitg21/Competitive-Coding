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

class Graph{

public:
    lli V;
    vector<vll>edge;
    vll visited;
    set<lli>p;
    set<lli>q;
    lli flag=0;
    Graph(lli v){
        V=v;
        edge.resize(V);
        visited.resize(V,0);
    }
    void addEdge(lli u,lli v){
        edge[u].pb(v);
        edge[v].pb(u);
    }
    void display(){
        for(lli i=0;i<V;i++){
            cout << i << " ";
            for(lli j=0;j<edge[i].size();j++){
                cout << edge[i][j] << " ";
            }
            cout << endl;
        }
    }
    void bipartite(){
        for(lli i=0;i<V;i++){
            if(p.find(i)==p.end() && q.find(i)==q.end()){
                lli galf=0;
                for(lli j=0;j<edge[i].size();j++){
                    // q.insert(edge[i][j]);
                    if(p.find(edge[i][j])!=p.end()){
                        galf=1;
                    }
                }
                if(galf==0){
                    p.insert(i);
                    for(lli j=0;j<edge[i].size();j++){
                        q.insert(edge[i][j]);
                    } 
                }
                else{
                    q.insert(i);
                    for(lli j=0;j<edge[i].size();j++){
                        p.insert(edge[i][j]);
                        if(q.find(edge[i][j])!=q.end()){
                            flag=1;
                        }
                    } 
                }
            }
            else if(p.find(i)!=p.end()){
                for(lli j=0;j<edge[i].size();j++){
                    q.insert(edge[i][j]);
                    if(p.find(edge[i][j])!=p.end()){
                        flag=1;
                    }
                }
            }
            else if(q.find(i)!=q.end()){
                for(lli j=0;j<edge[i].size();j++){
                    p.insert(edge[i][j]);
                    if(q.find(edge[i][j])!=q.end()){
                        flag=1;
                    }
                }
            }
            for(auto it=p.begin();it!=p.end();++it){
                cout << *it << " ";
            }
            cout << endl;
            for(auto it=q.begin();it!=q.end();++it){
                cout << *it << " ";
            }
            cout << endl;
        }
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b;
	cin >> n >> m;
    Graph g(n);
    for(i=0;i<m;i++){
        cin >> a >> b;
        g.addEdge(a-1,b-1);
    }
    g.display();
    g.bipartite();
    
    if(g.flag==1){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    vll ans(n);
    for(auto it=g.p.begin();it!=g.p.end();++it){
        ans[*it]=1;
    }
    for(auto it=g.q.begin();it!=g.q.end();++it){
        ans[*it]=2;
    }
    for(i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
