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
	lli n,m,t,i,j,k,r,b;
	cin >> t;
	while(t--){
		cin >> n >> r >> b;
        lli a = ceil((db)r/(b+1));
        lli z = a*(b+1) - r;
        lli y = b+1 - z;
        string s;
        for(i=0;i<y;i++){
            s.append(string(a,'R'));
            if(i==y-1 && z==0){
                break;
            }
            s.append("B");
        }
        for(i=0;i<z;i++){
            s.append(string(a-1,'R'));
            if(i==z-1){
                break;
            }
            s.append("B");
        }
        cout << s << endl;
	}
}