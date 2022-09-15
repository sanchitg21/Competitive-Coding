//CODE BY CONFUZED CODER
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
const int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,c,ans,n,k,i,j,sum,mx;
    cin >> t;
    while(t--){
        cin >> n >> k;
        map<int,int>mp;
        vll v(n);
        sum=0;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
            sum++;
        }
        if(sum-mp.size()>=k){
            cout << mp.size() << endl;
        }
        else{
            cout << sum-k << endl;
        }
    }
}
