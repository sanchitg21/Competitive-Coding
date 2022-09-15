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

vector<pair<lli,pair<lli,lli>>> p;
vector<pair<lli,pair<lli,lli>>> ans;
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

void kruskal(vll& id){
    lli x,y;
    for(lli i=0;i<id.size();i++){
        lli u=p[i].ss.ff;
        lli v=p[i].ss.ss;
        if(root(u,id)!=root(v,id)){
            ans.pb({p[i].ff,{u,v}});
            w_union(u,v,id);
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v,weight,nodes,edges;
	cin >> nodes >> edges;
    for(int i=0;i<edges;i++){
        cin >> u >> v >> weight;
        p.pb({weight,{u-1,v-1}});
    }    
    sa(p);
    vll id(nodes);
    for(i=0;i<nodes;i++){
        id[i]=-1;
    }
    kruskal(id);

    mps mp;
    for(i=0;i<ans.size();i++){
        mp[ans[i].ss.ff]++;
        mp[ans[i].ss.ss]++; 
    }
    vll freq(nodes);
    vll final;
    for(i=0;i<ans.size();i++){
        freq[i]=min((mp[ans[i].ss.ss])*(nodes-(mp[ans[i].ss.ss])),(mp[ans[i].ss.ff])*(nodes-(mp[ans[i].ss.ff])));
        final.pb(freq[i]*(1<<ans[i].ff));
    }
    lli total=0;
    for(i=0;i<final.size();i++){
        total+= final[i];
    }
    cout << total << endl;
}
