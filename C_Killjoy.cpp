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
	lli n,m,t,i,j,k,sum,flag,count;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n);
        sum=0;
        count=0;
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            count=count+(v[i]==k);
            sum=sum+(v[i]-k);
            mp[v[i]]++;
        }
        if(mp.size()==1 && v[0]==k){
            cout << 0 << endl;
        }
        else if(count){
            cout << 1 << endl;
        }
        else if(sum==0){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
	}
}
