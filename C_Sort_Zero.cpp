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
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        map<int,int>mp;
        map<int,int>ind;
        int index = 0;
        bool flag = false;
        mp[v[n-1]]++;
        ind[v[n-1]]=n;
        for(int i=n-2;i>=0;i--){
            // check non-dec maintained
            if(v[i]>v[i+1]){
                flag=true;
                index = max(index,i+1);
            }
            mp[v[i]]++;
            if(ind[v[i]]==0){
                ind[v[i]]=i+1;
            }
            // if i is to be made 0, check the last i to be made 0
            if(flag && mp[v[i]]>1){
                index = max(index,ind[v[i]]);
            }
        }
        map<int,int>ans;
        for(int i=0;i<index;i++){
            ans[v[i]]++;
        }
        cout << ans.size() << endl;
	}
}
