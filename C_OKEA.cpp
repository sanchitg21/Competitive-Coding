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
        m= n*k;
        vector<vll> v(n,vll(k,0));
        lli step=1;

        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                v[i][j]= step;
                step=step+2;
            }
            i++;
        }
        step=2;
        for(i=1;i<n;i++){
            for(j=0;j<k;j++){
                v[i][j]= step;
                step=step+2;
            }
            i++;
        }
        
        if(n%2==1 && k!=1){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
	}
}
