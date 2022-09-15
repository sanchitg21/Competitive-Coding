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
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,m,i,sum=0,c=0,y=0;
    cin >> t;
	while(t--){ 
		sum=0;
		c=0;
		cin >> n >> m;
		vll v(n);
		for(i=0;i<n;i++){
			cin >> v[i];
			v[i]=v[i]%m;
		}
		sa(v);
		if(v[0]==0){
			sum++;
		}
		for(i=0;i<v.size();i++){
			if(v[i]!=0 && sum==1){
				v.erase(v.begin(),v.begin()+i);
				break;
			}
		}
		if(v[0]==0){
			cout << sum << endl;
			continue;
		}
		map<lli,lli>mp;
		for(i=0;i<v.size();i++){
			mp[v[i]]++;
		}
		auto ip=mp.end();
		ip--;
		auto it=mp.begin();
		while(*it <= *ip){
			y++;
			if(it->first==m/2.0){
				sum++;
				it++;
				continue;
			}
			if(ip->first==m/2.0){
				sum++;
				ip--;
				continue;
			}
			if(it->first+ ip->first==m){
				sum++;
				if(abs(it->second-ip->second)>1){
					c+=abs(it->second - ip->second)-1;
				}
				it++;
				ip--;
				continue;
			}
			if(it->first + ip->first>m){
				c=c+ip->second;
				ip--;
				continue;
			}
			if(it->first + ip->first<m){
				c=c+it->second;
				it++;
			}
			if(y>10000){
				break;
			}
		}
		cout << c+sum << endl; 
	}
}