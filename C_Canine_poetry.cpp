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
	lli n,t,i,j,k,count;
	cin >> t;
	while(t--){
        string s;
		cin >> s;
        n=s.length();
        vll v;
        for(i=1;i+2<n;i++){
            if(s[i-1]==s[i+1] && s[i-1]!=s[i] && s[i+1]!=s[i+2]){
                v.pb(1);
            }
        }
        if(n>=3){ 
        if(s[n-1]==s[n-3] && s[n-2]!=s[n-1]){
            v.pb(1);
        }
        }
        count=1;
        for(i=0;i+1<n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                if(count>=2){
                    v.pb(count);
                    count=1;
                }
            }
        }
        if(count>=2){
            v.pb(count);
        }
        lli ans=0;
        for(i=0;i<v.size();i++){
            if(v[i]==1){
                ans++;
            }
            else{
                ans=ans+ (v[i]/3)*2;
                if((v[i]%3)==2){
                    ans++;
                }
            }
        }
        lli a=0;
        for(i=2;i+2<n;i++){
            if(s[i-2]==s[i] && s[i]==s[i+2] && s[i-1]!=s[i] && s[i+1]!=s[i]){
                a++;
            }   
        }   
        if(a>0){
            a=a+2;
        } 
        if(a%2==1){ 
            cout << ans-(a-a/2) << endl;
        }
        else{
            cout << ans- (a/2) << endl;
        }
	}
}
