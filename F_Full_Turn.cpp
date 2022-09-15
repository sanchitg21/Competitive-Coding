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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    double x,y,u,v;
	cin >> t;
	while(t--){
		cin >> n;
        map<double,lli>mp;
        map<double,lli>pm;
        lli a=0,b=0,c=0,d=0;
        for(i=0;i<n;i++){
            cin >> x >> y >> u >> v;
            if(u>x && v>y){
                mp[(v-y)/(u-x)]++;
            }
            else if(u<x && v<y){
                mp[-(v-y)/(u-x)]++;
            }
            else if(u>x && v<y){
                pm[(v-y)/(u-x)]++;
            }
            else if(u<x && v>y){
                pm[-(v-y)/(u-x)]++;
            }
            else if(u==x && v>y){
                a++;
            }
            else if(u==x && v<y){
                b++;
            }
            else if(u>x && v==y){
                c++;
            }
            else if(u<x && v==y){
                d++;
            }            
        }
        lli count=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            count+= it->second * mp[-(it->first)];
        }
        for(auto it=pm.begin();it!=pm.end();it++){
            count+= it->second * pm[-(it->first)];
        }
        cout << count/2 + a*b + c*d << endl;
	}
}