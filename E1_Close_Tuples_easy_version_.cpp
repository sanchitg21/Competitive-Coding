//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
	lli n,t,i,j,count,step;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        mps pm;
        pm=mp;
        sa(v);
        step=0;
        count=0;
        for(auto it=pm.begin();it!=pm.end();++it){
            count=count+(mp[it->first])*(mp[it->first]-1)*(mp[it->first]-2)/6;
            count=count+(mp[it->first])*(mp[it->first]-1)*(mp[it->first+1])/2;
            count=count+(mp[it->first])*(mp[it->first+1])*(mp[it->first+1]-1)/2;
            count=count+(mp[it->first])*(mp[it->first+1])*(mp[it->first+2]);
            count=count+(mp[it->first])*(mp[it->first]-1)*(mp[it->first+2])/2;
            count=count+(mp[it->first])*(mp[it->first+2])*(mp[it->first+2]-1)/2;
        }
        cout << count << endl;
    }
}
