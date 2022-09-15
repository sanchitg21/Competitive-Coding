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
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> m;
        vector<string>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }

        for(j=0;j<m;j++){
            for(i=n-1;i>=0;i--){
                k=i;
                while(k+1<n && v[k][j]=='*' && v[k+1][j]=='.'){
                    v[k+1][j]='*';
                    v[k][j]='.';
                    k++;
                }
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout << v[i][j];
            }
            cout << endl;
        }
        cout << endl;
	}
}
