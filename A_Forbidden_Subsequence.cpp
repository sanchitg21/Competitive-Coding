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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		string s,t;
        cin >> s >> t;
        sa(s);
        if(t!="abc"){
            cout << s << endl;
            continue;
        }
        mpc mp;
        for(i=0;i<s.length();i++){
            mp[s[i]]++; 
        }
        if(mp['a']==0 || mp['b']==0 || mp['c']==0){
            cout << s << endl;
            continue;
        }
        for(i=0;i<mp['a'];i++){ 
            cout << ('a');
        }
        for(i=0;i<mp['c'];i++){ 
            cout << ('c');
        }
        for(i=0;i<mp['b'];i++){ 
            cout << ('b');
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->first == 'a' || it->first == 'b' || it->first == 'c'){
                continue;
            }
            for(i=0;i<(it->second);i++){ 
                cout << (it->first);
            }
        }
        cout << endl;
	}
}