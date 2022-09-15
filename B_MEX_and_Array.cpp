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
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        lli ans=0;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                mps mp;
                for(k=i;k<=j;k++){
                    mp[v[k]]++;
                }
                lli step=0;
                while(mp[step]){
                    ans=ans+mp[step];
                    step++;
                }
                for(auto it=mp.begin();it!=mp.end();it++){
                    if(it->ff >=step){
                        ans=ans+it->ss;
                    }
                }
                ans=ans+mp[0];
            }
        }
        cout << ans << endl;
	}
}
