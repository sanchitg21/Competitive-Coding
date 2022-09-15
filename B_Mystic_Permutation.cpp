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
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        if(n==1){
            cout << -1 << endl;
            continue;
        }
        set<lli>s;
        for(i=0;i<n;i++){
            s.insert(v[i]);
        }
        vll ans(n,0);
        lli flag=0;
        for(i=0;i<n;i++){
            auto it =s.begin();
            if(*it == v[i]){
                it++;
            }
            if(it==s.end()){
                flag=1;
                it--;
            }
            ans[i]=*it;
            s.erase(it);
        }

        if(flag){
            swap(ans[n-1],ans[n-2]);
        }
        for(i=0;i<n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
	}
}
