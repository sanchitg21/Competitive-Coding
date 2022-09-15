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
	lli n,i,j,k,count=0;
	cin >> n;
    i=1;
    while(n>i-1){
        i=i*2;
    }
    if(i-1==n){
        cout << 0 << endl;
        return 0;
    }
    vll v;
    while(true){
        i=1,j=0; 
        while(i<=n){
            i=i*2;
            j++;
        }
        i--;
        v.pb(j);
        n=(n^i);
        if(n==0){
            break;
        }
        n++;
        i=1;
        while(i<n){
            i=i*2;
        }
        if(n==i){
            break;
        }
        count++;
    }
    cout << v.size()+count << endl;
    for(i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}