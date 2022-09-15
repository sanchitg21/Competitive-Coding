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
        if(n%3 == 0){
            cout << n-2 << " " << n-3 << " " << n-4 << " " << n-5 << " ";
            for(int i=1;i<=n-6;i++){
                cout << i << " ";
            }
            cout << n-1 << " " << n << endl;
        }
        else if(n%3==1){
            cout << n-2 << " " << n-3 << " ";
            for(int i=1;i<=n-4;i++){
                cout << i << " ";
            }
            cout << n-1 << " " << n << endl;
        }
        else{
            for(int i=1;i<=n-2;i++){
                cout << i << " ";
            }
            cout << n-1 << " " << n << endl;
        }
	}
}
