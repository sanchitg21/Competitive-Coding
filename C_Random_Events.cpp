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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> m;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vector<pair<lli,long double>>s(m);
        for(i=0;i<m;i++){
            cin >> s[i].ff >> s[i].ss;
        }
        lli index=0;
        i=n;
        // for(i=0;i<n;i++){
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        while(i--){
            if(v[i]!=i+1){
                index=i+1;
                break;
            }
        }
        if(index==0){
            cout << fixed << setprecision(6) << (db)1 << endl;
            continue;
        }
        long double ans=1.0;
        for(i=0;i<m;i++){
            if(index<=s[i].ff){
                ans=ans*(db)(1-s[i].ss);
            }
        }
        cout << fixed << setprecision(6) << 1-ans << endl;

	}
}
