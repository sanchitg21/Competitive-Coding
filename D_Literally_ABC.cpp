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
lli t,n,c,i;
cin >> t;
while(t--){
    string s;
    cin >> s;
    n=s.length();
    vll v;
    vll w;
    c=0;
    for(lli i=0;i<n;i++){
        v.pb(s[i]+c-96);
        if(s[i]=='z'){
            c=c+26;
        }
    }
    w=v;
    sa(w);
    int flag=0;
    if(w==v){
        for(i=1;i<n;i++){
            if(v[i]-v[i-1]==1){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){   
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
}
}
