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

//Directed Acyclic Graph
// Time Complexity- O(V+E)

class Graph{
public:
    vector<int> topologicalsort(int n, vector<vector<int>>& v) {
        vector<vector<int>>graph(n);
        vector<int>s(n);
        for(int i=0;i<v.size();i++){
            s[v[i][0]]++;
            graph[v[i][1]].push_back(v[i][0]);
        }
        set<pair<int,int>>indegree;
        for(int i=0;i<n;i++){
            indegree.insert({s[i],i});
        }
        vector<int>ans;
        vector<int>visited(n,0);
        while(!indegree.empty()){
            auto it=indegree.begin();
            int root = (*it).second;
            if((*it).first>0){
                ans.clear();
                return ans;
            }
            visited[root]=1;
            indegree.erase(it);
            ans.push_back(root);
            for(int node: graph[root]){
                auto it=indegree.lower_bound({s[node],node});
                indegree.erase(it);
                s[node]--;
                indegree.insert({s[node],node});
            }
        }
        return ans;
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	int n,m,t,i,j,k,u,v;
    cin >> n >> m;
    Graph g;
    vector<vector<int>>edges;
    for(i=0;i<m;i++){
        cin >> u >> v;
        edges.pb({u,v});
    }
    vector<int>ans= g.topologicalsort(n,edges);

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
