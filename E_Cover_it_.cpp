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

mps mp;

void dfs(lli root,lli flag,vector<vll>& graph,vll& visited){
    visited[root]=1;
    // cout << root+1 << endl;
    mp[root]=flag;
    for(lli node: graph[root]){
        if(!visited[node]){
            if(flag==0){
                dfs(node,1,graph,visited);
            }
            else{
                dfs(node,0,graph,visited);
            }
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> t;
    while(t--){
        cin >> n >> m;
        vector<vll>graph(n);
        for(i=0;i<m;i++){
            cin >> u >> v;
            graph[u-1].pb(v-1);
            graph[v-1].pb(u-1);
        }
        vll visited(n,0);
        dfs(0,0,graph,visited);
        lli count=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->ss==1){
                count++;
            }
        }
        if(count<= n/2){
            cout << count << endl;
            for(auto it=mp.begin();it!=mp.end();++it){
                if(it->ss==1){
                    cout << it->ff +1 << " ";
                }
            }
            cout << endl;
        }
        else{
            count=0;
            for(auto it=mp.begin();it!=mp.end();++it){
                if(it->ss==0){
                    count++;
                }
            }
            cout << count << endl;
            for(auto it=mp.begin();it!=mp.end();++it){
                if(it->ss==0){
                    cout << it->ff +1 << " ";
                }
            }
            cout << endl;
        }
        mp.clear();
    }
}   