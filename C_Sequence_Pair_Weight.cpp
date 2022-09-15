#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,t,flag,sum;
    cin >> t;
    while(t--){ 
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        map<lli,lli>mp;
        sum=0;
        for(i=0;i<n;i++){
            
            sum+= (n-i)*mp[v[i]];
            mp[v[i]]+=(i+1);
        }
        cout << sum << endl;
    }
}
