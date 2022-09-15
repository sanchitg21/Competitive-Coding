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

//Time complexity - O( log( x * 10d)*logerror(n) ) where d=16; //doubt

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli m,t,i,j,k;
	db n;
    cin >> n >> k;
    db low;
    db high;
    if(n>=1){
        low=1;
        high=n;
    }
    else{
        low=n;
        high=1;
    }
    db error = 1e-15;
    while(low+error<high){
        db mid=(low+high)/2;
        if(pow(mid,k) > n){
            high=mid;
        }
        else if(pow(mid,k) < n){
            low =mid;
        }
        else{
            break;
        }
    }
    cout << fixed << setprecision(16) << low << endl;
}
