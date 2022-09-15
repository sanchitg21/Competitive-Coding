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

lli ceil(lli num, lli m){
    if(num%m==0){
        return num/m;
    }
    else{
        return num/m + 1;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,low,high,count=0,a,b;
	cin >> n >> m >> k;
    vll v(m);
    for(i=0;i<m;i++){
        cin >> v[i];
    }
    m++;
    v.pb(v[m-1]);
    // 2 pointers
    for(high=0;high+1<m;high++){
        a=high;
        b=ceil(v[high]-a,k)*k;
        while(high<m && b-(v[high]-a)>=0 && b-(v[high+1]-a)>=0){
            high++;
        }
        count++;
    }
    cout << count << endl;
}