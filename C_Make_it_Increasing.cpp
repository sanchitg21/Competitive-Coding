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
const int INF = INT_MAX;

lli sanchit(lli a,lli b){
    if(a%b==0){
        return a/b;
    }
    else{
        return a/b +1;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    lli mn=1e18;
    vll s(n,0);
    for(i=0;i<n;i++){
        lli count=0;
        for(j=i-1;j>=0;j--){
            count += sanchit((abs(s[j+1])+1),v[j]);
            s[j]=sanchit((abs(s[j+1])+1),v[j])*(-v[j]) ;
        }
        for(j=i+1;j<n;j++){
            count += sanchit((abs(s[j-1])+1),v[j]);
            s[j]=sanchit((abs(s[j-1])+1),v[j])*v[j];
        }
        mn=min(mn,count);
        for(j=0;j<n;j++){
            s[j]=0;
        }
    }
    cout << mn << endl;
}
