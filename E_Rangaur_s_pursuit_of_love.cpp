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
	lli n,m,t,i,j,k,ans=0;
	cin >> n;
    vll a(n),b(n),c(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    for(i=0;i<n;i++){
        cin >> c[i];
    }
    sa(a);
    sa(b);
    sa(c);
    
    vll v;
    for(i=0;i<n;i++){
        v.pb(n-(upper_bound(c.begin(),c.end(),b[i])-c.begin()));
    }
    vll s;
    for(i=0;i<n;i++){
        s.pb(n-(upper_bound(b.begin(),b.end(),a[i])-b.begin()));
    }
    for(i=n-2;i>=0;i--){
        v[i]=v[i]+v[i+1];
    }
    v.pb(0);
    for(i=0;i<n;i++){
        ans+=v[n-s[i]];
    }
    cout << ans << endl;
}
