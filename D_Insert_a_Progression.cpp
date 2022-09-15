//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
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
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n,0);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
       
       int a[k+1];
       for(int i=0;i<k+1;i++) a[i]=0;
       vector<long> ans;
       int j=0;
       while(j<n){
ans.push_back(v[j]);
if(a[v[j]]==0){ 
    ans.push_back(v[j]);
    a[v[j]]=1;
}
j++;
       }

       for(int i=1;i<k+1;i++){
           if(a[i]==0) ans.push_back(i);
       }
long sum=0;
       for(int i=0;i<ans.size()-1;i++){
sum+=abs(ans[i]-ans[i+1]);
       }
       cout<<sum<<"\n";

	}
}
