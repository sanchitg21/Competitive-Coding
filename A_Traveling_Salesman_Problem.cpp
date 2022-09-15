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
        vpl v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].ff >> v[i].ss;
        }
        lli mxright = 0; 
        lli mnleft = 0;
        lli mxup=0;
        lli mndown = 0;
        for(int i=0;i<n;i++){
            mxright = max(mxright,v[i].ff);
            mnleft = min(mnleft,v[i].ff);
            mxup = max(mxup,v[i].ss);
            mndown = min(mndown,v[i].ss);
        }
        cout << 2*(mxright  -mnleft + mxup -mndown) << endl;
    }
}

