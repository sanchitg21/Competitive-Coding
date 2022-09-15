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
	lli n,t,i,j,k,num,count;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vll v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        lli ans=1e9;
        for(auto it=mp.begin();it!=mp.end();++it){    
            count=0;
            for(i=0;i<n;i++){
                if(v[i]!=it->first){
                    count++;
                    i=i+k-1;
                }
            }
            ans=min(ans,count);
        }
        cout << ans << endl;
    }
}