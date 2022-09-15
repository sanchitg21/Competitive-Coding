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
	lli n,m,t,i,j,k,input;
	cin >> t;
	while(t--){
		cin >> n >> k;
        k++;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> input;
            v[i]= pow(10,input);
        }
        vll ans(n,0);
        i=0;
        while(k!=0){
            if(i+1<n && k>=v[i+1]/v[i]-1){
                ans[i]=v[i+1]/v[i]-1;
                k=k-ans[i];
                i++;
            }
            else{
                ans[i]=k;
                k=0;
            }
        }   
        lli total=0;
        for(i=0;i<n;i++){
            total = total + v[i]*ans[i];
        }
        cout << total << endl;
	}
}