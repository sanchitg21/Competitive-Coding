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

lli flag=0;

void dfscycle(lli root,lli parent,vector<vll>&graph,vll&visited){
    visited[root]=1;
    for(lli node: graph[root]){
        if(!visited[node]){
            dfscycle(node,root,graph,visited);
        }
        else{
            if(parent!=node){
                flag=1;
            }          
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> m;
    vector<string>s(n);
    for(i=0;i<n;i++){
        cin >> s[i];
    }
    lli step=0;
    vector<vll>graph(n*m);
    for(i=0;i<n;i++){
        for(j=0;j+1<m;j++){
            if(s[i][j]==s[i][j+1]){
                graph[step].pb(step+1);
                graph[step+1].pb(step);
            }
            step++;
        }
        step++;
    }
    lli temp=0;
    for(i=0;i<m;i++){
        step=temp;
        for(j=0;j+1<n;j++){
            if(s[j][i]==s[j+1][i]){
                graph[step].pb(step+m);
                graph[step+m].pb(step);
            }
            step=step+m;
        }
        temp++;
    }
    
    // for(i=0;i<n*m;i++){
    //     for(j=0;j<graph[i].size();j++){
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vll visited(n*m,0);
    for(i=0;i<n*m;i++){
        if(!visited[i]){
            dfscycle(i,-1,graph,visited);
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
