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
	lli n,m,t,i,j,k,a,b,c;
	cin >> n;
    b=n/2;
    a= n-n/2;
    set<pair<lli,lli>> v;
    for(i=a;i>=0;i=i-2){
        for(j=b;j>=0;j=j-2){
            v.insert({i,j});
        }
    }
    auto ip=v.end();
    for(auto it=v.begin();it!=ip;it++){
        v.insert({(*it).ss,(*it).ff});
    }
    lli ans=0;
    for(auto it=v.begin();it!=v.end();it++){
        if((*it).ff==0 && (*it).ss==0){
            ans++;
            continue;
        }
        if((*it).ff==0 || (*it).ss==0){
            ans=ans+2;
            continue;
        }
        ans=ans+4;
    }
    cout << ans << endl;
}
