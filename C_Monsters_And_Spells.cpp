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
	lli n,m,t,i,j;
	cin >> t;
	while(t--){
		cin >> n;
        vll k(n);
        vll h(n);
        vll a(n,0),b;
        for(i=0;i<n;i++){
            cin >> k[i];
        }
        for(i=0;i<n;i++){
            cin >> h[i];
        }
        lli q=h[n-1];
        b.pb(q);

        for(i=n-2;i>=0;i--){
            q= q-(k[i+1]-k[i]);
            if(q<=0){
                b.pb(h[i]);
                q=h[i];
            }
            else if(h[i]>q){
                b[b.size()-1]+= h[i]-q;
                q=h[i];
            }
        }
        lli ans=0;
        for(i=0;i<b.size();i++){
            ans+= b[i]*(b[i]+1)/2;
        }
        cout << ans << endl;
	}
}
