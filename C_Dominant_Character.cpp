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
		cin >> n;
        string s;
        cin >> s;
        lli flag=0;
        if(s.length()>=2){
            for(i=0;i+1<n;i++){
                if(s.substr(i,2)=="aa"){
                    flag=1;
                }
            }
        }
        if(flag){
            cout << 2 << endl;
            continue;
        }
        if(s.length()>=3){
            for(i=0;i+2<n;i++){
                if(s.substr(i,3)=="aba" || s.substr(i,3)=="aca"){
                    flag=1;
                }
            }
        }
        if(flag){
            cout << 3 << endl;
            continue;
        }
        if(s.length()>=4){
            for(i=0;i+3<n;i++){
                if(s.substr(i,4)=="abca" || s.substr(i,4)=="acba"){
                    flag=1;
                }
            }
        }
        if(flag){
            cout << 4 << endl;
            continue;
        }

        if(s.length()>=7){
            for(i=0;i+6<n;i++){
                if(s.substr(i,7)=="abbacca" || s.substr(i,7)=="accabba"){
                    flag=1;
                }
            }
        }
        if(flag){
            cout << 7 << endl;
            continue;
        }
        cout << -1 << endl;
	}
}