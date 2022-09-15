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
        //bfs
        vll visited(n,0);
        queue<pair<lli,lli>>q;
        q.push({0,0});
        mps mp;
        mp[0]=0;
        lli count=0;
        visited[0]=1;
        while(!q.empty()){
            lli root= q.front().first;
            lli level=q.front().second;
            q.pop();
            if(level%2){
                count++;
                mp[root]=1;
            }
            else{
                mp[root]=0;
            }
            for(lli node: graph[root]){
                if(!visited[node]){
                    visited[node]=1;
                    q.push({node,level+1});
                }
            }
        }
        if(count<=n/2){
            cout << count << endl;
            for(auto it=mp.begin();it!=mp.end();it++){
                if(it->ss){
                    cout << it->ff+1 << " ";
                }
            }
            cout << endl;
        }
        else{
            cout << n-count << endl;
            for(auto it=mp.begin();it!=mp.end();it++){
                if(!it->ss){
                    cout << it->ff+1 << " ";
                }
            }
            cout << endl;
        }
	}
}
