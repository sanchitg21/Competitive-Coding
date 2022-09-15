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

long long int ceil(lli a,lli b){
	if(a%b==0){ 
        return a/b;
	}
    return a/b+1;
}

long long int gcd (long long int a, long long int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,sx,sy,ex,ey,x,y;
    cin >> n >> m >> t;
	x= n/gcd(n,m);
	y= m/gcd(n,m);


	while(t--){
		cin >> sx >> sy >> ex >> ey;
		if(sx == ex && ex==1){
			if(ceil(sy,x) == ceil(ey,x)){
				cout << "YES" << endl;
				continue;
			}
		}
		else if(sx == ex && ex==2){
			if(ceil(sy,y) == ceil(ey,y)){
				cout << "YES" << endl;
				continue;
			}
		}
		else if(sx != ex && ex==2){
			if(ceil(sy,x) == ceil(ey,y)){
				cout << "YES" << endl;
				continue;
			}
		}
		else if(sx != ex && ex==1){
			if(ceil(sy,y) == ceil(ey,x)){
				cout << "YES" << endl;
				continue;
			}
		}
		cout << "NO" << endl;
	}
}
