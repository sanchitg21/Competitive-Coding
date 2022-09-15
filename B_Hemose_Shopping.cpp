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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n+1);
        for(i=1;i<=n;i++){
            cin >> v[i];
        }
        vll s=v;
        sa(s);
        lli flag=0;
        for(i=n-k+1;i<=k;i++){
            if(v[i]==s[i]){
                continue;
            }
            else{
                flag=1;
                break;
            }
        }
        if(2*k<=n){
            cout << "YES" << endl;
        }
        else if(flag==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}
