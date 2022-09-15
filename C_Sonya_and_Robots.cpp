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
	lli n,m,t,i,j,k,count;
	t=1;
	while(t--){
		cin >> n;
        vll v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        vll s(100001);
        for(i=0;i<100000;i++){
            s[i]=0;
        }
        count=0;
        for(i=0;i+1<n;i++){
            mp[v[i]]--;
            if(mp[v[i]]==0){
                mp.erase(v[i]);
            }
            if(s[v[i]]!=1){ 
                count=count+mp.size();
                s[v[i]]=1;
            }
        }
        cout << count << endl;
	}
}