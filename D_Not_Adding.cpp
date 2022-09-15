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
	lli n,m,t,i,j,k,mx=0;
	cin >> n;
    vll v(n);
    set<lli>s;
    lli hcf=0;
    for(i=0;i<n;i++){
        cin >> v[i];
        s.insert(v[i]);
        mx=max(mx,v[i]);
        hcf=gcd(hcf,v[i]);
    }
    vll ans(mx+1,0);
    for(i=0;i<v.size();i++){
        ans[v[i]]=1;
    }
    if(hcf==1 && s.find(1)==s.end()){
        s.insert(1);
    }
    for(i=2;i<mx;i++){
        k=1;
        lli count=0;
        while(k*i<=mx){
            if(ans[k*i]==1){
                count=gcd(count,k*i);
            }
            if(count==i){
                break;
            }
            k++;
        }
        if(count==i){
            s.insert(i);
        }
    }
    cout << s.size()-v.size() << endl;
}
