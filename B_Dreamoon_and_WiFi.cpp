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
    vll fact(11,1);
    for(i=1;i<11;i++){
        fact[i]=fact[i-1]*i;
    }
	string s,v;
    cin >> s;
    cin >> v;
    n=s.length();
    mpc mp;
    for(i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(i=0;i<n;i++){
        mp[v[i]]--;
    }
    if(mp['+']<0 || mp['-']<0){
        cout << fixed << setprecision(12) << (db)0 <<endl;
        return 0;
    }
    if(mp['+']==0 && mp['-']==0 && mp['?']==0){
        cout << fixed << setprecision(12) << (db)1 <<endl;
        return 0; 
    }
    double ans=fact[-(mp['?'])];
    ans=ans/fact[mp['+']];
    ans=ans/fact[-(mp['?'])-mp['+']];

    cout << fixed << setprecision(12) << ans/(1<<(-(mp['?']))) <<endl;
}
