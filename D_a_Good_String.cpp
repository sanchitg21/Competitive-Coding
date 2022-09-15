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

int solve(string s,char c){
    if(s.size()==1){
        return (s[0]!=c);
    }
    lli mid=s.size()/2;
    lli cntl=solve(string(s.begin()+mid,s.end()),c+1);
    lli cntr=solve(string(s.begin(),s.begin()+mid),c+1);
    cntl+=s.size()/2 - count(s.begin(),s.begin()+mid,c);
    cntr+=s.size()/2 - count(s.begin()+mid,s.end(),c);
    return min(cntl,cntr);
}

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
        cout << solve(s,'a') << endl;
	}
    
}
