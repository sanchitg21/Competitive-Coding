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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	cin >> k;
	while(k--){
		cin >> n;
        string s,t;
        cin >> s >> t;
        vll v;
        for(i=0;i<n;){
            while(i<n && s[i]=='0'){
                i++;
            }
            if(i!=0 && i<n){ 
                v.pb(i);
            }
            if(i==n){
                break;
            }
            while(i<n && s[i]=='1'){
                i++;
            }
            v.pb(i);
        }
        vll w;
        for(i=0;i<n;){
            while(i<n && t[i]=='0'){
                i++;
            }
            if(i!=0 && i<n){
                w.pb(i);
            }
            if(i==n){
                break;
            }
            while(i<n && t[i]=='1'){
                i++;
            }
            w.pb(i);
        }
        cout << v.size()+w.size() << " ";
        for(i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        for(i=w.size()-1;i>=0;i--){
            cout << w[i] << " ";
        }
        cout << endl;
	}
}