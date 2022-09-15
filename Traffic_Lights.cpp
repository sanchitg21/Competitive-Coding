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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> m >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    multiset<lli>s{0,m};
    set<lli>lights{0,m};
    for(i=0;i<n;i++){
        auto it=lights.lower_bound(v[i]);
        lli value=*it-*(--it); // to be removed in s;
        lli v1=v[i]-*it;  // to be added
        lli v2=*(++it)-v[i];  // to be added
        lights.insert(v[i]);
        s.insert(v1);
        s.insert(v2);
        it=s.find(value);
        s.erase(it);
        it=s.end();
        it--;
        cout << *it << " ";
    }
}