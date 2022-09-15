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
	t=1;
	while(t--){
		cin >> n;
        vll a(n);
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        vll b(n);
        for(i=0;i<n;i++){
            cin >> b[i];
        }
        vpl index(n+1);
        for(i=0;i<n;i++){
            index[a[i]].first= i+1;     
        }
        for(i=0;i<n;i++){
            index[b[i]].second= i+1;     
        }
        mps mp;
        for(i=1;i<=n;i++){
            if(index[i].first>index[i].second){ 
                mp[(index[i].first-index[i].second)]++;
            }
            else{
                mp[(index[i].first+n-index[i].second)]++;
            }
        }
        lli mx=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            mx=max(mx,it->second);
        }   
        cout << mx << endl;
	}
}
