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
const int M=5e6+1;
const int INF = 2e9;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b,num;
	cin >> t;
    //precompute / sieve
    vll v(M,-1);
    v[0]=0;
    v[1]=0;
    for(i=2;i<M;i++){
        if(v[i]==0){
            continue;
        }
        for(j=2*i;j<M;j=j+i){
            v[j]=0;
        }
    }
    for(i=2;i<M;i++){
        if(v[i]!=-1){
            continue;
        }
        for(j=2*i;j<M;j=j+i){
            lli num=j;
            while(num%i==0){
                num=num/i;
                v[j]++;
            }
        }
        v[i]=1;
    }
    for(i=1;i<M;i++){
        v[i]=v[i-1]+v[i];
    }
	while(t--){
		cin >> a >> b;    
        cout << v[a]-v[b] << endl;
	}
}
