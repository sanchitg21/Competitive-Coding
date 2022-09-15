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
	lli n,t,i,j,ans;
    cin >> t;
    while(t--){
        cin >> n;
        mps mp;
        ans=0;
        for(i=2;i*i<=n;i++){
            while(n%i==0){
                n=n/i;
                mp[i]++;
            }
        }
        mp[n]++;
        for(auto it=mp.begin();it!=mp.end();++it){
            ans=max(ans,it->second); 
        }
        cout << ans << endl;
        vll v(ans);
        for(i=0;i<ans;i++){
            v[i]=1;
        }
        
        while(ans>0){ 
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second > 0){
                v[ans-1]*= it->first;
                it->second --;
            }
        }
        ans--;
        }
        for(i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}