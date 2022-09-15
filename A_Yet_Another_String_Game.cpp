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
	lli n,t,i,steps;
	cin >> t;
	while(t--){
        string s;
        cin >> s;
        n=s.length();
        steps=0;
        for(i=0;i<n;i++){
            if(steps%2==0){
                if(s[i]=='a'){
                    s[i]='b';
                }
                else{
                    s[i]='a';
                }
            }
            else{
                if(s[i]=='z'){
                    s[i]='y';
                }
                else{
                    s[i]='z';
                }
            }
            steps++;
        }   
        cout << s << endl;    
	}
}