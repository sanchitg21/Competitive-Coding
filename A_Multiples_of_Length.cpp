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
    if(n==1){
        cout << 1 << " " << 1 << endl;
        cout << -v[0] << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        cout << 1 << " " << 1 << endl;
        cout << 0 << endl;
        return 0;
    }
    cout << 1 << " " << n-1 << endl;
    for(i=0;i+1<n;i++){
        cout << (n-1)*v[i] << " ";
        v[i]=v[i]+ (n-1)*v[i] ;
    }
    cout << endl;
    cout << n << " " << n << endl;
    cout << n- v[n-1]%n << endl;
    v[n-1]=v[n-1]+n- v[n-1]%n;
    cout << 1 << " " << n << endl;
    for(i=0;i<n;i++){
        cout << -v[i] << " ";
    }
    cout << endl;
}
