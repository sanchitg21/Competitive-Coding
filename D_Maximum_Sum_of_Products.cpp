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
	lli n,m,t,i,j,k,mx=0,total=0;
	cin >> n;
	vpl v(n);
    for(i=0;i<n;i++){
		cin >> v[i].ff;
	}
	for(i=0;i<n;i++){
		cin >> v[i].ss;
	}
	lli low,high,mid;
	for(i=0;i<n;i++){
		total=total+ v[i].ff*v[i].ss;
	}
	mx=total;
	//odd
	for(mid=0;mid<n;mid++){
		low=mid-1;
		high=mid+1;
		lli sum=total;
		while(low>=0 && high<n){
			sum=sum+(v[low].ff*v[high].ss + v[low].ss*v[high].ff) - (v[low].ff*v[low].ss + v[high].ff*v[high].ss);
			low--;
			high++;
			mx=max(mx,sum);
		}
	}
	//even
	for(mid=0;mid+1<n;mid++){
		low=mid;
		high=mid+1;
		lli sum=total;
		while(low>=0 && high<n){
			sum=sum+(v[low].ff*v[high].ss + v[low].ss*v[high].ff) -(v[low].ff*v[low].ss + v[high].ff*v[high].ss);
			low--;
			high++;
			mx=max(mx,sum);
		}
	}	
	cout << mx << endl;
}
