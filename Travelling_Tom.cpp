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

vector<pair<lli,pair<lli,lli>>> p;

lli root(lli i,vll &id){
    while(id[i]>=0){
        i=id[i];
    }
    return i;
}

void w_union(lli u,lli v,vll& id){
    if(abs(id[root(u,id)]) >= abs(id[root(v,id)])){
        id[root(u,id)]+= id[root(v,id)]; 
        id[root(v,id)] = root(u,id);
    }
    else{
        id[root(v,id)]+= id[root(u,id)];
        id[root(u,id)] = root(v,id);
    }
}

lli kruskal(vll& id){
    lli x,y;
    lli cost,mincost=0;
    for(lli i=0;i<id.size();i++){
        lli u=p[i].ss.ff;
        lli v=p[i].ss.ss;
        if(root(u,id)!=root(v,id)){
            mincost+= p[i].ff;
            w_union(u,v,id);
        }
    }
    return mincost;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,l,u,v,weight,mincost,nodes,edges;
	cin >> nodes >> edges >> k;
    vll c(k);
    for(i=0;i<k;i++){
        cin >> c[i];
    }
    for(int i=0;i<edges;i++){
        cin >> u >> v >> l;
        lli weight=0;
        for(j=0;j<l;j++){
            cin >> t;
            weight+= c[t-1];
        }
        p.pb({weight,{u-1,v-1}});
    } 
    sa(p);

    vll id(nodes);
    for(i=0;i<nodes;i++){
        id[i]=-1;
    }
    mincost = kruskal(id);
    cout << mincost << endl;    
}