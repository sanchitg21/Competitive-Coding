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

void nextVertex(lli k,vll &s,vector<vll> &graph){
    while(true){
        s[k]=s[k]+1;
        if(s[k]==s.size()){
            s[k]=-1;
            return;
        }
        lli flag=0;
        for(lli j=0;j<k;j++){
            if(s[j]==s[k]){
                flag=1;
            }
        }    
        if(!flag && graph[s[k-1]][s[k]] && graph[s[k]][0]){
            return;
        }
        if(!flag && graph[s[k-1]][s[k]] && k+1!=s.size()){
            return;
        }
    }
}

void Hamiltonian(lli k,vll &s,vector<vll> &graph){
    while(true){
        nextVertex(k,s,graph);  
        if(s[k]==-1){
            return;
        }
        if(k+1==s.size()){
            for(lli i=0;i<s.size();i++){
                cout << s[i]+1 << " ";
            }
            cout << endl;
        }
        else{
            Hamiltonian(k+1,s,graph);
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n >> m;
    vector<vll> graph(n,vll(n,0));
    for(i=0;i<m;i++){
        cin >> u >> v;
        graph[u-1][v-1]=1;
        graph[v-1][u-1]=1;
    }
    vll s(n,-1);
    s[0]=0;
    Hamiltonian(1,s,graph);
}
