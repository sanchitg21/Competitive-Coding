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

vll ans;
mps mp;
lli root(lli i,vll &id){
    while(id[i]>=0){
        i=id[i];
    }
    return i;
}

void w_union(lli u,lli v,vll& id,vll &c,vll &power){
    if(abs(id[root(u,id)]) >= abs(id[root(v,id)])){
        id[root(u,id)]+= id[root(v,id)]; 
        id[root(v,id)] = root(u,id);
    }
    else{
        id[root(v,id)]+= id[root(u,id)];
        id[root(u,id)] = root(v,id);
    }
    power[root(v,id)]=min(power[root(v,id)],power[root(u,id)]);
    power[root(u,id)]=power[root(v,id)];
}

lli kruskal(vector<pair<lli,pair<lli,lli>>>&p,vll &id,vll &c,vll &power){
    lli x,y;
    lli cost,mincost=0;
    for(lli i=0;i<id.size();i++){
        lli u=p[i].ss.ff;
        lli v=p[i].ss.ss;
        if(root(u,id)!=root(v,id)){
            lli a=min(c[root(u,id)],c[u]);
            lli b=min(c[root(v,id)],c[v]);
            if(p[i].ff >= a + b){
                if(mp[root(u,id)]==0 && mp[root(v,id)]==0){
                    mincost+= min(c[root(u,id)],c[u])+min(c[root(v,id)],c[v]);
                }
                else if(mp[root(u,id)]==0 && mp[root(v,id)]==1){
                    mincost+= min(c[root(u,id)],c[u]);
                }
                else if(mp[root(u,id)]==1 && mp[root(v,id)]==0){
                    mincost+= min(c[root(v,id)],c[v]);
                }
                ans.pb(u);
                ans.pb(v);
                mp[root(u,id)]=1;
                mp[root(v,id)]=1;
            }
            else{
                mincost+= p[i].ff;
            }
            w_union(u,v,id,c,power);
        }
    }
    return mincost;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli n,m,t,i,j,u,v,wt,mincost,root;
	cin >> n;
    vector<pair<lli,pair<lli,lli>>>p;
    vpl input(n);
    for(i=0;i<n;i++){
        cin >> input[i].ff >> input[i].ss;
    }
    vll c(n);
    for(i=0;i<n;i++){
        cin >> c[i];
    }
    vll k(n);
    for(i=0;i<n;i++){
        cin >> k[i];
    }
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            u=i;
            v=j;
            wt= (abs(input[i].ff-input[j].ff) + abs(input[i].ss-input[j].ss))*(k[i]+k[j]);
            p.pb({wt,{u,v}});
        }
    }    
    sa(p);
    vll id(n,-1);
    vll power(n);
    mincost = kruskal(p,id,c,power);
    if(!ans.size()){
        lli mn=INF;
        for(i=0;i<n;i++){
            mn=min(mn,c[i]);
        }
        mincost+= mn;
    }
    cout << mincost << endl;
}