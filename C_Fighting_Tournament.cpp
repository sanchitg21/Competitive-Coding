//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
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
	cin >> t;
	while(t--){
		cin >> n >> q;
        vll v(n);
        int mx = 0;
        int index = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(mx < v[i]){
                mx  = v[i];
                index = i;
            }
        }
        // k <= max(0,index-1). mx no has won 0. After that only mx wins.
        
        map<int,vector<int>>mp;
        lli a=v[0];
        for(int i=1;i<=max(0,index-1);i++){
            a = max(a,v[i]);
            mp[a].push_back(i);
        }

        for(int i=1;i<=q;i++){
            cin >> j >> k;
            if(k > max(0,index-1)){
                if(j-1==index){
                    cout << k - max(0,index-1) << endl;
                }
                else{
                    cout << upper_bound(mp[v[j-1]].begin(),mp[v[j-1]].end(),max(0,index-1))-mp[v[j-1]].begin()  << endl;
                }
            }
            else{
                cout << upper_bound(mp[v[j-1]].begin(),mp[v[j-1]].end(),k)-mp[v[j-1]].begin() << endl;
            }
        }
	}
}
