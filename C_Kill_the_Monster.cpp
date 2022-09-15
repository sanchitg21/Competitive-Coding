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
const int M=1e5+1;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,l,hc,dc,hm,dm,w,a;
	cin >> t;
	while(t--){
        cin >> j >> l >> hm >> dm >> k >> w >> a;
        lli flag=0;
        hc=j;
        dc=l;
        for(i=0;i<=k;i++){
            hc = hc+a*i;
            dc= dc +w*(k-i);
            // if((hm%dc)==0){
            //     n=hm/dc;
            // }
            // else{
            //     n=hm/dc+1;
            // }
            // if((n-1)*dm < hc){
            //     flag=1;
            // }
            if((hc%dm)==0){
                n= hc/dm;
            }
            else{
                n= hc/dm+1;
            }
            if(n*dc>=hm){
                flag=1;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}
