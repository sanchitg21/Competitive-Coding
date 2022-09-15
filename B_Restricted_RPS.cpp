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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,count,a,b,c;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(3);
        for(i=0;i<3;i++){
            cin >> v[i];
        }
        string s;
        cin >> s;
        mpc mp;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        count=0;
        a=min(mp['R'],v[1]);
        b=min(mp['P'],v[2]);
        c=min(mp['S'],v[0]);
        count= a+b+c;
        if(2*count>=n){
            cout << "YES" << endl;
            string p;
            p.resize(n);
            for(i=0;i<n;i++){
                p[i]='0';
            }
            for(i=0;i<n;i++){
                if(s[i]=='R' && a>0){
                    p[i]='P';
                    a--;
                    v[1]--;
                }
                else if(s[i]=='P' && b>0){
                    p[i]='S';
                    b--;
                    v[2]--;
                }
                else if(s[i]=='S' && c>0){
                    p[i]='R';
                    c--;
                    v[0]--;
                }
            }
            for(i=0;i<n;i++){
                if(p[i]=='0' && v[1]>0){
                    p[i]='P';
                    v[1]--;
                }
                else if(p[i]=='0' && v[2]>0){
                    p[i]='S';
                    v[2]--;
                }
                else if(p[i]=='0' && v[0]>0){
                    p[i]='R';
                    v[0]--;
                }
            }
            cout << p << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}
