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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,num;
    string m;
	cin >> m;
    string v,s;
    v.resize(5);
    v[0]=m[0];
    v[1]=m[2];
    v[2]=m[4];
    v[3]=m[3];
    v[4]=m[1];
    //find num
    num=stoll(v, nullptr, 10);
    n=num;
    for(i=0;i<4;i++){
        n=n*num;
        s=to_string(n);
        if(s.length()>5){ 
            s.erase(0, s.length()-5);
        }
        else{
            while(s.length()<5){
                s.insert(0,"0");
            }
        }
        if(i==3){
            break;
        }
        n=stoll(s, nullptr, 10);
    }
    cout << s << endl;
}