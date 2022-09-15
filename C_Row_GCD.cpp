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
	lli n,m,t,i,j,k;
	cin >> n >> m;
    vll a(n);
    vll b(m);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<m;i++){
        cin >> b[i];
    }
    lli hcf=0;
    for(i=1;i<n;i++){ 
        hcf=gcd(hcf,abs(a[i]-a[0]));
    }
    for(i=0;i<m;i++){
        cout << gcd(hcf,a[0]+b[i]) << " ";
    }
}
