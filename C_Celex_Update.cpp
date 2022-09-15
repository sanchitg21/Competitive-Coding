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
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,mn,mx,a,b,c,d;
	cin >> t;
	while(t--){
		cin >> a >> b >> c >> d;
        lli n=c-a;
        lli m=d-b;
        lli num= m+n-1-2*min(m,n);
        if(n==0 || m==0){
            cout << 1 << endl;
            continue;
        }
        cout << (min(n,m))*(min(n,m) +1) + num*min(n,m) +1 << endl;
	}
}
