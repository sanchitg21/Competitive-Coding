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

bool solve(vll &v,lli mid,lli k){
    lli count=1;
    lli low=v[0];
    for(lli high=1;high<v.size();high++){
        if(v[high]-low>=mid){
            count++;
            low=v[high];
        }
    }
    if(count>=k){
        return true;
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        lli low=1;
        lli high=v[n-1]-v[0];
        while(low+1<high){
            lli mid=(low+high)/2;
            if(solve(v,mid,k)){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        if(solve(v,high,k)){
            cout << high << endl;
            continue;
        }
        cout << low << endl;
	}
}
