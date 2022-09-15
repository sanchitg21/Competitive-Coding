//CODE BY Sanchit Gupta
#define pb push_back
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
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> k;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    // Sliding window
    mps mp;
    for(i=0;i<k;i++){
        mp[v[i]]++;
    }
    lli mx=mp.size();
    lli low=0,high=k;
    while(high<n){
        mp[v[high]]++;
        mp[v[low]]--;
        if(mp[v[low]]==0){
            mp.erase(v[low]);
        }
        mx=max(mx,(lli)mp.size());
        low++;
        high++;
    }
    cout << mx << endl;
}
