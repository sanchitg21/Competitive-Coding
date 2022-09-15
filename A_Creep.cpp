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
	lli n,m,t,i,j,k,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
        string ans;
        if(b>=2*a){
            for(i=0;i<a;i++){
                ans.pb('0');
            }
            for(i=0;i<b;i++){
                ans.pb('1');
            }
            cout << ans << endl;
            continue;
        }
        else if (a>=2*b){
            for(i=0;i<b;i++){
                ans.pb('1');
            }
            for(i=0;i<a;i++){
                ans.pb('0');
            }
            cout << ans << endl;
            continue;
        }

        if(a>=b){
            for(i=1;i<=b;i++){
                ans.pb('0');
                ans.pb('1');
            }
            for(i=b+1;i<=a;i++){
                ans.pb('0');
            }
        }  
        else{
            for(i=1;i<=a;i++){
                ans.pb('1');
                ans.pb('0');
            }
            for(i=a+1;i<=b;i++){
                ans.pb('1');
            }
        }
        cout << ans << endl;
	}
}
