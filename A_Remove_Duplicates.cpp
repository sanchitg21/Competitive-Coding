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
    lli t,n,i,j;
    cin >> n;
    vll v(n);
    mps mp;
    for(i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    vll s(mp.size());
    lli flag=0;
    lli y=1;
    for(i=n-1;i>=0;i--){
        flag=0;
        for(j=0;j<s.size();j++){ 
            if(v[i]!=s[j]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){ 
            s.insert(s.begin(),v[i]);
        }
    }
    cout << mp.size() << endl;
    for(i=0;i<mp.size();i++){
        cout << s[i] << " ";
    }
    cout << endl;
}