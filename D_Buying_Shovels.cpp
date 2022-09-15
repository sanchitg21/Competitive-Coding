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
	lli n,t,i,j,k,flag=0;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                v.pb(i);
                v.pb(n/i);
            }
        }
        sd(v);
        for(i=0;i<v.size();i++){
            if(v[i]<=k){
                cout << n/v[i] << endl;
                break;
            }
        }
	}
}
