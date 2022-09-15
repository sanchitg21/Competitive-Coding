//CODE BY Sanchit Gupta
#define pb push_back
#define db double
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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = 2e9;
lli step=1;
lli flag=0;
vector<vll>ans;
void solve(vector<vll>&v,lli n,lli m){
	if(flag){
		return;
	}
	if(n+2<v.size() && m+1<v.size() && v[n+2][m+1]==-1){
		v[n+2][m+1]=step++;
		solve(v,n+2,m+1);
		v[n+2][m+1]=-1;
		step--;
	}
	if(n+1<v.size() && m+2<v.size() && v[n+1][m+2]==-1){
		v[n+1][m+2]=step++;
		solve(v,n+1,m+2);
		v[n+1][m+2]=-1;
		step--;
	}
	if(n-1<v.size() && m+2<v.size() && v[n-1][m+2]==-1){
		v[n-1][m+2]=step++;
		solve(v,n-1,m+2);
		v[n-1][m+2]=-1;
		step--;
	}
	if(n-2<v.size() && m-1<v.size() && v[n-2][m-1]==-1){
		v[n-2][m-1]=step++;
		solve(v,n-2,m-1);
		v[n-2][m-1]=-1;
		step--;
	}
	if(n-2<v.size() && m+1<v.size() && v[n-2][m+1]==-1){
		v[n-2][m+1]=step++;
		solve(v,n-2,m+1);
		v[n-2][m+1]=-1;
		step--;
	}
	if(n-1<v.size() && m-2<v.size() && v[n-1][m-2]==-1){
		v[n-1][m-2]=step++;
		solve(v,n-1,m-2);
		v[n-1][m-2]=-1;
		step--;
	}
	if(n+2<v.size() && m-1<v.size() && v[n+2][m-1]==-1){
		v[n+2][m-1]=step++;
		solve(v,n+2,m-1);
		v[n+2][m-1]=-1;
		step--;
	}
	
	if(n+1<v.size() && m-2<v.size() && v[n+1][m-2]==-1){
		v[n+1][m-2]=step++;
		solve(v,n+1,m-2);
		v[n+1][m-2]=-1;
		step--;
	}
	
	if(step==v.size()*v.size()){
		ans=v;
		flag=1;
		return;
	}
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vector<vll>v(n,vll(n,-1));
	v[0][0]=0;
	solve(v,0,0);
	cout << flag << endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}
