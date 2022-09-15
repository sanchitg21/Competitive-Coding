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
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=3e5+1;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    //precalculate
    vll xors(M,0);
    for(i=1;i<M;i++){
        xors[i]=xors[i-1]^i;
    }
	cin >> t;
	while(t--){
        lli count;
		cin >> n >> m;
        count=n;
        k= xors[n-1];
        if(k==m){
            cout << count << endl;
        }
        else{
            if((k^m)!=n){
                cout << count+1 << endl;
            }
            else{
                cout << count+2 << endl;
            }
        }
	}
}
