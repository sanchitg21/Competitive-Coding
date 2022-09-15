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
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
        if(n==4 && k==3){
            cout << -1 << endl;
            continue;
        }
        if(n-1==k){
            cout << n/2-1 << " " << n/2-2 << endl;
            cout << n-1 << " " << n/2+1 << endl;
            cout << 0 << " " << n/2 << endl;
            for(i=1;i<n/2-2;i++){
                cout << i << " " << n-i-1 << endl;
            }
            continue;
        }
        if(k==0){
            cout << 0 << " " << n-1-k << endl;    
        }
        else{
            cout << 0 << " " << n-1-k << endl;
            cout << n-1 << " " << k << endl;
        }
        for(i=1;i<n/2;i++){
            if(i!=k && i!=n-k-1){
                cout << i << " " << n-i-1 << endl;
            }
        }

	}
}
