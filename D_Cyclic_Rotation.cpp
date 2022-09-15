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
#define lcm(a,b) a*b/__gcd(a,b)dd
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
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
        vll s(n);
        for(i=0;i<n;i++){
            cin >> s[i];
        }
        mps mp;
        lli prev=-1;
        lli j=0;
        lli flag=0;
        for(i=0;i<n;i++){
            if(j<n && v[j]==s[i]){
                prev=v[j];
                j++;
            }
            else if(s[i]==prev && mp[s[i]]>0){
                mp[s[i]]--;
            }
            else if(j<n){
                mp[v[j]]++;
                j++;
                i--;
            }
            else{
                flag=1;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
	}
}
