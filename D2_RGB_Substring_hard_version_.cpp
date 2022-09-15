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
	lli n,m,t,i,j,k,count,mx,low,high;
	cin >> t;
    string c="RGB";
    string d;
    for(i=1;i<=100000;i++){
        d.append(c);
    }
	while(t--){
		cin >> n >> k;
        string s;
        cin >> s;
        mx=0;
        vll v;
        for(i=0;i<n;i++){
            if(s[i]==d[i]){
                v.pb(1);
            }
            else{
                v.pb(0);
            }
        }
        // 2 pointers
        count=0;
        for(i=0;i<k;i++){
            if(v[i]==1){
                count++;
            }
        }
        mx=max(mx,count);
        low=0;
        high=k;
        while(high<n){
            if(v[high]==1){
                count++;
            }
            if(v[low]==1){
                count--;
            }
            high++;
            low++;
            mx=max(mx,count);
        }
        v.clear();
        for(i=0;i<n;i++){
            if(s[i]==d[i+1]){
                v.pb(1);
            }
            else{
                v.pb(0);
            }
        }
        // 2 pointers 
        count=0;
        for(i=0;i<k;i++){
            if(v[i]==1){
                count++;
            }
        }
        mx=max(mx,count);
        low=0;
        high=k;
        while(high<n){
            if(v[high]==1){
                count++;
            }
            if(v[low]==1){
                count--;
            }
            high++;
            low++;
            mx=max(mx,count);
        }
        v.clear();
        for(i=0;i<n;i++){
            if(s[i]==d[i+2]){
                v.pb(1);
            }
            else{
                v.pb(0);
            }
        }
        // 2 pointers
        count=0;
        for(i=0;i<k;i++){
            if(v[i]==1){
                count++;
            }
        }
        mx=max(mx,count);
        low=0;
        high=k;
        while(high<n){
            if(v[high]==1){
                count++;
            }
            if(v[low]==1){
                count--;
            }
            high++;
            low++;
            mx=max(mx,count);
        }
        cout << k-mx << endl;
	}
}