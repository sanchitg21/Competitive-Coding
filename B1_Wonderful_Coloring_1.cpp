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
	lli n,t,i,j,k,count,a,b;
	cin >> t;
	while(t--){
        string s;
		cin >> s;
        n=s.length();
        mpc mp;
        count=a=b=0;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second>=3){
                count++;
            }
            if(it->second==2){
                a++;
            }       
            if(it->second==1){
                b++;
            }       
        }
        count=count+(a)+b/2;
        cout << count << endl;
	}
}
