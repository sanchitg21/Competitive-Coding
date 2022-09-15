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
	lli n,m,t,i,j,k,x,flag;
	cin >> t;
	while(t--){
        string s;
		cin >> s;
        n=s.length();
        string v;
        v.resize(n);
        for(i=0;i<n;i++){
            v[i]='0';
        }
        cin >> x;
        string p;
        p=s;
        flag=0;
        for(i=0;i<x && i+x<n;i++){
            if(s[i+x]=='1' && s[i]=='0'){
                if(v[i+x]=='1'){
                    cout << -1 << endl;
                    flag=1;
                    break;
                }
                v[i+x]='1';
                p[i+x]='0';
            }
            if(s[i]=='1' && s[i+x]=='0'){
                if(v[i+x]=='1'){
                    cout << -1 << endl;
                    flag=1;
                    break;
                }
                else{
                    v[i+x]='1';
                    p[i+x]='1';
                }
            }
        }
        if(flag){
            continue;
        }
        for(i=n-x;i<x;i++){
            if(s[i]!=0){
                cout << -1 << endl;
                flag=1;
                break;
            }
        }
        if(flag){
            continue;
        }
        for(i=x;i+x<n;i++){
            if(s[i-x]=='1' && s[i]=='0'){
                if(v[i-x]=='1'){
                    cout << -1 << endl;
                    flag=1;
                    break;
                }
                v[i-x]='1';
                p[i-x]='0';
            }
            if(s[i+x]=='1' && s[i]=='0'){
                if(v[i+x]=='1'){
                    cout << -1 << endl;
                    flag=1;
                    break;
                }
                v[i+x]='1';
                p[i+x]='0';
            }
            if(s[i-x]=='0' && s[i]=='1' && s[i+x]=='0'){
                if(v[i-x]=='1' && v[i+x]=='1'){
                    cout << -1 << endl;
                    flag=1;
                    break;
                }
                else if(v[i-x]=='0'){
                    v[i-x]='1';
                    p[i-x]='1';
                }
                else if(v[i+x]=='0'){
                    v[i+x]='1';
                    p[i+x]='1';
                }
            }
        }
        if(flag){
            continue;
        }
        for(i=x+1;i<n-x;i++){
            if(s[i]!=0){
                cout << -1 << endl;
                flag=1;
                break;
            }
        }
        if(flag){
            continue;
        }
        for(i=n-1;i>=n-x && i-x>=0;i--){
            if(s[i-x]=='1' && s[i]=='0'){
                if(v[i-x]=='1'){
                    cout << -1 << endl;
                    flag=1;
                    break;
                }
                v[i-x]='1';
                p[i-x]='0';
            }
            if(s[i-x]=='0' && s[i]=='1'){
                if(v[i-x]=='1'){
                    cout << -1 << endl;
                    break;
                }
                else if(v[i-x]=='0'){
                    v[i-x]='1';
                    p[i-x]='1';
                }
            }
        }
        
        cout << p << endl;
	}
}
