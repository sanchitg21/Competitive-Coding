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
    lli t,n,i,j,count=0;
    string s;
    cin >> n;
    cin >> s;
    vll v;
    for(i=0;i+1<n;i++){
        if(s[i]=='x' && s[i+1]=='x'){
            count++;
        }
        else if(s[i]=='x' && s[i+1]!='x'){
            v.pb(count+1);
            count=0;
        }
    }
    if(s[n-1]=='x'){
        v.pb(count+1);
    }
    lli sum=0;
    for(i=0;i<v.size();i++){
        if(v[i]>=2){
            sum=sum+ v[i]-2;
        }
    }
    cout << sum << endl;
}
