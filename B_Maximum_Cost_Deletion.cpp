//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
	lli n,t,i,j,a,b,count,sum,cal0;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        string s;
        cin >> s;
        count=1;
        vll v;
        cal0=0;
        for(i=0;i+1<n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                if(s[i]=='0'){
                    cal0++;
                }
                v.pb(count);
                count=1;
            }
        }
        v.pb(count);
        if(n>1){ 
        if(s[n-1]=='0'){
            cal0++;
        }
        }
        lli mn=min(cal0+1,(lli)v.size()-cal0+1);
        if(b<0){
            sum= b*mn +n*(a);
        }
        else{
            sum=b*n+(n*a);
        }
        cout << sum << endl;
    }
}