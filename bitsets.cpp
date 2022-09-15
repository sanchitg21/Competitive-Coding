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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,i,j,count,mx,x,y,days;
	cin >> n;
    bitset<10>v;
    v[0]=1;
    v=v|(v<<2);
    cout << v << endl;
    v=v|(v<<3);
    cout << v << endl;
    // cout << ~v << endl;
    // for(i=0;i<n;i++){
    //     while(){ 
    //         cin >> days;
    //     }
    // }
    // mx=0;
    // for(i=0;i+1<n;i++){
    //     for(j=0;j<v[i].size();j++){
    //         count=__builtin_popcountll(v[i]&v[j]);
    //         if(count>mx){
    //             mx=count;
    //             x=i;
    //             y=j;
    //         }
    //     }
    // }
    // cout << i << " " << j << endl;
}