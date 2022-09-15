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

void zeronebfs(lli src,vll &dist, vector<vpl>& graph){
    dist[src]=0;
    deque<lli>q;
    q.push_front(src);
    while(!q.empty()){
        lli v=q.front();
        q.pop_front();
        for(auto u: graph[v]){
            if(dist[u.ff] > dist[v] + u.ss){
                dist[u.ff] = dist[v] + u.ss;

                if(u.ss == 1){
                    q.pb(u.ff);
                }
                else{
                    q.push_front(u.ff);
                }
            }
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,r,c,x,y;
	cin >> n >> m;
	cin >> r >> c;
    cin >> x >> y;
    map<lli,pair<lli,lli>> mp;
    vector<string>input(n);
    for(i=0;i<n;i++){
        cin >> input[i];
    }
    lli step=0;
    vector<vll>v(n,vll(c-max((lli)0,c-1-x),0));
    for(i=0;i<n;i++){
        for(j=max((lli)0,c-1-x);j<c;j++){
            if(input[i][j]=='.'){
                mp[step]={i,j};
                v[i][j]=step++;
            }
            else{
                v[i][j]=-1;
            }
        }
    }
    vector<vpl>graph(step);
    for(i=0;i<n;i++){
        for(j=max((lli)0,c-1-x);j+1<c;j++){
            if(v[i][j]!=-1 && v[i][j+1]!=-1){
                graph[v[i][j]].pb({v[i][j+1],0});
                graph[v[i][j+1]].pb({v[i][j],1});
            }
        }
    }
    for(i=max((lli)0,c-1-x);j<c;i++){
        for(j=0;j+1<n;j++){
            if(v[j][i]!=-1 && v[j+1][i]!=-1){
                graph[v[j][i]].pb({v[j+1][i],0});
                graph[v[j+1][i]].pb({v[j][i],0});
            }
        }
    }
    lli src=v[r-1][c-max((lli)0,c-1-x)-1];
    vll dist(step,INF);
    zeronebfs(src,dist,graph);
    
    lli ans=0;
    for(i=0;i<step;i++){
        cout << dist[i] << " ";
    }
}