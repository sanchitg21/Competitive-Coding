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
	lli n,m,i,j,k,a=0,b=0;
	cin >> n;
    string s,t;
	cin >> s >> t;
    vpl v;
    vpl w;
    vll index1;
    vll index2;
    for(i=0;i<n;i++){
        (s[i]=='a')?a++:b++;
        (t[i]=='a')?a++:b++;
    }
    if(a%2==1 || b%2==1){
        cout << -1 << endl;
        return 0;
    }
    for(i=0;i<n;i++){
        if(s[i]=='a' && t[i]=='b'){
            index1.pb(i);
        }
        else if(s[i]=='b' && t[i]=='a'){
            index2.pb(i);
        }
    }
    if(index1.size()%2==1){
        cout << (index1.size()+index2.size()-2)/2 + 2 << endl;
    }
    else{
        cout << (index1.size()+index2.size())/2 << endl;
    }
    for(i=1;i<index1.size();i=i+2){
        cout << index1[i]+1 << " " << index1[i-1]+1 << endl;
    }
    for(i=1;i<index2.size();i=i+2){
        cout << index2[i]+1 << " " << index2[i-1]+1 << endl;
    }
    if(index1.size()%2==1){
        cout << index2[index2.size()-1]+1 << " " << index2[index2.size()-1]+1 << endl;
        cout << index1[index1.size()-1]+1 << " " << index2[index2.size()-1]+1 << endl;
    }
}
