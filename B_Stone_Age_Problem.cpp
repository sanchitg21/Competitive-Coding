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
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,q;
	cin >> n >> q;
	vll v(n);
    lli sum=0;
    set<lli>s;
    for(i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
        s.insert(v[i]);
    }
    lli c;
    while(q--){
        cin >> t;
        if(t==1){
            lli a,b;
            cin >> a >> b;
            if(s.find(a)!=s.end()){
                sum-=v[a-1];
                sum+=b;
                v[a-1]=b;
            }
            else{
                sum-=c;
                sum+=b;
                v[a-1]=b;
            }
        }
        else{
            cin >> c;
            sum=n*c;
            s.clear();
        }
        cout << sum << endl;
    }
}