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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,count,flag;
	cin >> t;
	while(t--){
        string s;
		cin >> s;
        vll v;
        n=s.length();
        for(i=0;i+1<n;i=i+2){
            count=0;
            flag=0;
            while((s[i]=='1' || s[i]=='?') && (s[i+1]=='0' || s[i+1]=='?')){
                i=i+2;
                count=count+2;
                flag=1;
            }
            if(i+1<n && (s[i+1]=='1' || s[i+1]=='?')){
                count++;
            }
            if(flag){ 
                v.pb(count);
                i=i-2;
            }
        }
        
        for(i=0;i+1<n;i=i+2){
            count=0;
            flag=0;
            while((s[i]=='0' || s[i]=='?') && (s[i+1]=='1' || s[i+1]=='?')){
                i=i+2;
                count=count+2;
                flag=1;
            }
            if(i+1<n && (s[i+1]=='1' || s[i+1]=='?')){
                count++;
            }
            if(flag){ 
                v.pb(count);
                i=i-2;
            }
        }
        for(i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
	}
}
