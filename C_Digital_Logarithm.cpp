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

int len(int n){
    int count = 0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll a(n);
        vll b(n);
        map<int,int>mp;
        map<int,int>pm;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(mp[b[i]]){
                mp[b[i]]--;
            }
            else{
                pm[b[i]]++;
            }
        }
        int count = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(pm[len(it->first)]){
                count++;
                pm[len(it->first)]--;
                mp[it->first]--;
            }
            else{
                mp.erase(it->first);
                mp[len(it->first)]++;
                count++;
            }
        }
        for(auto it=pm.begin();it!=pm.end();it++){
            if()
        }
	}
}
