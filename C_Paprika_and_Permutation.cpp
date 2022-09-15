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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,input;
	cin >> t;
    while(t--){
        cin >> n;
        vll v(n),s,u(n+1,0);
        for(i=0;i<n;i++){
            cin >> v[i];
            if(v[i]>n){
                s.pb(v[i]);
            }
            else if(u[v[i]]==1){
                s.pb(v[i]);
            }
            else{
                u[v[i]]=1;
            }
        }
        for(i=0;i<s.size();i++){
            s[i]=(s[i]+1)/2-1;
        }
        sa(s);
        lli flag=0,step=0;
        for(i=1;i<=n;i++){
            if(!u[i]){
                if(s[step++]<i){
                    flag=1;
                }
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        }
        cout << s.size() << endl;
    }
}