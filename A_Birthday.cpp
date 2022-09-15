//CODE BY Sanchit Gupta
#define pb push_back
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
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
lli ceil(lli a,lli b){
    if(a%b==0){
        return a/b;
    }
    return a/b +1;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,l,ans;
	cin >> n >> m >> k >>l;
    if(n<m){
        cout << -1 << endl;
        return 0;
    }
    if(k+l>n){
        cout << -1 << endl;
        return 0;
    }
    ans=ceil((l+k),m);
    if(ans*m>n){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}
