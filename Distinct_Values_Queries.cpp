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
const int M=2e5+5;
const int INF = 2e9;

struct query{
    int l;
    int r;
    int index;
} q[M];

bool compare(query x,query y){
    if(x.l/sqrt(M) != y.l/sqrt(M)){
        // different blocks. So sort by blocks
        return x.l/sqrt(M) < y.l/sqrt(M);
    }
    else{
        // sort by right value
        return x.r < y.r;
    }
}

mps cnt;
vll v(M,0);
lli ans=0;

void add(lli position){
    cnt[v[position]]++;
    if(cnt[v[position]]==1){
        ans++;
    }
}

void remove(lli position){
    cnt[v[position]]--;
    if(cnt[v[position]]==0){
        ans--;
        cnt.erase(v[position]);
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,L=0,R=0;
	cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i<m;i++){
        cin >> q[i].l >> q[i].r;
        q[i].l--;
        q[i].r--;
        q[i].index=i;
    }
    sort(q,q+m,compare);
    vll answer(m,0);

    for(i=0;i<m;i++){
        while(q[i].l>L){
            remove(L);
            L++;
        } 
        while(q[i].r+1<R){
            remove(R-1);
            R--;
        }       
        while(L>q[i].l){
            L--;
            add(L);
        }
        while(R<=q[i].r){
            add(R);
            R++;
        }
        answer[q[i].index]=ans;
    }

    for(i=0;i<m;i++){
        cout << answer[i] << endl;
    }
}
