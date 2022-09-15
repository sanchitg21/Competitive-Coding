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
	lli n,t,i,j,k,x,sum,flag,index;
	cin >> t;
	while(t--){
		cin >> n >> x;
        vll v(n);
		for(i=0;i<n;i++){
			cin >> v[i];
		}
		vll ans;
		flag=0;
		while(true){
			sum=0;
			for(i=0;i<n;i++){
				sum=sum+v[i];
			}
			for(i=0;i<n;i++){
				if(v[i]%x!=0 && flag!=2){ 
					flag=1;
					index=i;
					break;
				}
			}
			ans.pb(sum);
			for(i=0;i<n;i++){
				v[i]/=x;
			}
			if(flag==2){
				break;
			}
			if(flag==1){
				flag=2;
				n=index;
			}
		}
		vll multiply(ans.size());
		multiply[0]=1;
		for(i=1;i<ans.size();i++){
			multiply[i]=multiply[i-1]*x;
		}
		lli total=0;
		for(i=0;i<ans.size();i++){
			total+= multiply[i]*ans[i];
		}
		cout << total << endl;
	}
}
