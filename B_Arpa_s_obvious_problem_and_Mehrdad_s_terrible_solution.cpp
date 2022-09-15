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
	lli n,m,t,i,j,k,x,count=0;;
	cin >> n >> x;
    vll v(n);
    mps mp;
    for(i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    sa(v);
    for(i=0;i<n;i++){
        m= (x^v[i]);
        auto it= lower_bound(v.begin(),v.end(),m);
        if(*it==m){
            if(m!=v[i]){    
                count=count+mp[m];
            }
            else{
                count=count+mp[m]-1;
            }
        }
    }
    cout << count/2 << endl;
}
