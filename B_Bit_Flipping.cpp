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
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
        string s;
        cin >> s;
        vll v(n,0);
        if(n==1){
            cout << s << endl;
            cout << k << endl;
            continue;
        }
        if(k==0){
            cout << s << endl;
            for(i=0;i<n;i++){
                cout << 0 << " ";
            }
            cout << endl;
            continue;
        }
        if(s[0]=='0'){
            k--;
            v[1]=1;
            s[0]='1';
            for(i=2;i<s.length();i++){
                if(s[i]=='1'){
                    s[i]='0';
                }
                else{
                    s[i]='1';
                }
            }
        }

        lli count=0;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
            }
        }
        lli flag=0;
        if(k%2==1){ 
            flag=1;
        }

        if(flag){
            for(i=1;k>1 && i<n;i++){
                if(s[i]=='1'){
                    s[i]='0';
                    k--;
                }
            }
            
            for(i=1;i<n;i++){
                if(s[i]=='0'){
                    s[i]='1';
                }
                else{
                    s[i]='0';
                }
            }
        }
        else{
            for(i=1;k>0 && i<n;i++){
                if(s[i]=='0'){
                    s[i]='1';
                    k--;
                }
            }
        }
        cout << s << endl;
        // for(i=0;i<n;i++){
        //     cout << v[i] << " ";
        // }
        // cout << endl;
	}
}
