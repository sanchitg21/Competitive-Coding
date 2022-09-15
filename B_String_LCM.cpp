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
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,flag,lcm;
	cin >> t;
	while(t--){
        flag=0;
		string a;
        cin >> a;
        string b;
        cin >> b;
        flag=0;
        string c;
        for(i=0;i<a.length();i++){
            c=a.substr(0,i+1);   
            flag=0; 
            if(a.length() % c.length() !=0){
                continue;
            }
            for(j=0;j<a.length();j=j+c.length()){
                if(c!=a.substr(j,c.length())){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                break;
            }
        }   
        if(b.length() % c.length() !=0){
            cout << -1 << endl;
            continue;
        }
        flag=0;
        for(j=0;j<b.length();j=j+c.length()){
            if(c!=b.substr(j,c.length())){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        }
        string s;
        lli x=a.length()/c.length();
        lli y=b.length()/c.length();
        lcm=(x*y)/gcd(x,y);            
        for(i=0;i<lcm;i++){
            cout << c;
        }
        cout <<  endl;
	}
}