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
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vpl v(n);
        mps mp;
        lli flag=0;
        for(i=0;i<n;i++){
            cin >> v[i].ff;
            v[i].ss=i;
            mp[v[i].ff]++;
            if(mp[v[i].ff]==2){
                flag=1;
            }
        }
        if(flag==0){
            cout << -1 << endl;
            continue;
        }
        sa(v);
        lli ans=0;
        for(i=0;i+1<n;i++){
            if(v[i].ff == v[i+1].ff){
                ans=max(ans,v[i].ss + n - v[i+1].ss);
            }
        }
        cout << ans << endl;
	}
}