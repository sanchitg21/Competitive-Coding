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
const int M=2e5+1;
const int INF = 2e9;

vll arr(M,0);

lli dfs(lli root,vector<vll>&graph,vll &visited){
    visited[root]=1;
    lli count=0;
    for(lli node: graph[root]){
        if(!visited[node]){
            count+= 1+dfs(node,graph,visited);
        }
    }
    return arr[root]=count;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,input;
	cin >> n;
    vector<vll>graph(n);
    for(i=1;i<n;i++){
        cin >> input;
        graph[input-1].pb(i);
        graph[i].pb(input-1);
    }
    vll visited(n,0);
    dfs(0,graph,visited);

    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


