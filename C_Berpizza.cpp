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
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+1;
const int INF = 2e9;

struct cmp{ 
bool operator()(const pair<lli,lli> &a,const pair<lli,lli> &b){
    if(a.ff==b.ff){
        return a.ss > b.ss;
    }
    return a.ff < b.ff;
};
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k=0;
	cin >> t;
    set<pair<lli,lli>,cmp>s;
    set<lli>index;
    vll v(M);
	while(t--){
		cin >> n;
        if(n==1){
            cin >> m;
            k++;
            v[k]=m;
            s.insert({m,k});
            index.insert(k);
        }
        else if(n==2){
            auto it=index.begin();
            cout << (*it) << " ";
            lli a=v[*it],b=*it;
            s.erase(s.find({a,b}));
            index.erase(it);
        }
        else{
            auto it=s.end();
            it--;
            cout << (*it).ss << " ";
            auto ip=index.find((*it).ss);
            s.erase(it);
            index.erase(ip);
        }
	}
}
