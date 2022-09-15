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
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        lli i=0;
        vll ans;
        while(mp.size()){
            lli mex=0;
            for(auto it=mp.begin();it!=mp.end();it++){
                if(it->ff == mex){
                    mex++;
                }
                else{
                    break;
                }
            }
            mps pm;
            for(i;i<n;i++){
                mp[v[i]]--;
                if(mp[v[i]]==0){
                    mp.erase(v[i]);
                }
                if(v[i]<mex){
                    pm[v[i]]++;
                }
                if(pm.size()==mex){
                    ans.pb(mex);
                    i++;
                    break;
                }
            }
            pm.clear();
        }
        cout << ans.size() << endl;
        for(i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
	}
}