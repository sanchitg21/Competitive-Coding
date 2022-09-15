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
	lli n,m,t,i,j,k,a,b,c;
	cin >> t;
	while(t--){
        lli flag=0;
		cin >> a >> b >> c;

        //b
        if(!flag &&(a+c)%(2*b)==0){
            k=((a+c)); //2b
            if(a+c==k && k>=b){
                flag=1;
            }
            
        }
        if(!flag &&(2*b-a)%c ==0){
            k=((2*b-a)); //c
            if((a+k)==2*(b) && k>=c){
                flag=1;
            }
            
        }
        if(!flag && (2*b-c)%a==0){
            k=((2*b-c)); //a
            if((k+c)==2*b && k>=a){
                flag=1;
            }
        }
        if(flag==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}
