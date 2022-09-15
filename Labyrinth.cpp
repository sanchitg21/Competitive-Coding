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
    Graph(lli v){
        V=v;
        edge.resize(V);
        visited.resize(V,0);
    }
    void addEdge(lli u,lli v){
        edge[u].pb(v);
        edge[v].pb(u);
    }
    // void display(){
    //     for(lli i=0;i<V;i++){
    //         cout << i << " ";
    //         for(lli j=0;j<edge[i].size();j++){
    //             cout << edge[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    void dfs(lli root,lli target,lli count){
        visited[root]=1;
        if(root == target){
            cout << "YES" << endl;
            cout << count << endl;
            
        }
        for(lli node: edge[root]){
            if(!visited[node]){
                dfs(node,target,count+1);
            }
        }
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
	vector<string> s(n);
    for(i=0;i<n;i++){
        cin >> s[i];
    }
    vector<vll> v(n,vll(m));
    lli step=0;
    lli root,target;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]!='#'){
                if(s[i][j]=='A'){
                    root=step;
                }
                if(s[i][j]=='B'){
                    target=step;
                }
                v[i][j]=step++;
            }
            else{
                v[i][j]=-1;
            }
        }
    }
    Graph g(step);
    for(i=0;i<n;i++){
        for(j=0;j+1<m;j++){
            if(v[i][j]!=-1 && v[i][j+1]!=-1){
                g.addEdge(v[i][j],v[i][j+1]);
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j+1<n;j++){
            if(v[j][i]!=-1 && v[j+1][i]!=-1){
                g.addEdge(v[j][i],v[j+1][i]);
            }
        }
    }
    g.dfs(root,target,0);
}
