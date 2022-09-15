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
	lli n,t,i,j,k,count,a,ans;
	cin >> t;
	while(t--){
		cin >> n;
        vpl v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i].first;
            mp[v[i].first]=0;
        }
        for(i=0;i<n;i++){
            cin >> v[i].second;
        }
        sa(v);
        count=0;
        for(auto it=mp.begin();it!=mp.end();++it){ 
            if(it->second==2){
                continue;
            }
            a=it->first;
            while(it->second!=2){
                mp[v[a-1].second]+=2;
                a=v[a-1].second;
            }
            count++;
        } 
        ans=1;
        for(i=1;i<=count;i++){ 
            ans=(ans*2);
            ans=ans%mod;
        }
        cout << ans << endl;  
	}
}
