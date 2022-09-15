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
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> m;
        lli mask=0;
        for(j=0;j<m;j++){
            cin >> t;
            mask = (mask|(1<<t));
        }
        v[i]=mask;
    }
    lli ans=0;
    lli low=-1;
    lli high=-1;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            lli intersection = v[i]&v[j];
            lli count=__builtin_popcount(intersection);
            // while(intersection){
            //     intersection &= (intersection-1); 
            //     count++;
            // }
            if(ans<count){
                ans=count;
                low=i;
                high=j;
            }
        }
    }
    cout << ans << endl;
    cout << low << " " << high << endl;
}
