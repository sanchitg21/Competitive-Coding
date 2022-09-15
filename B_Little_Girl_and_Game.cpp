#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,t,n=0;
    string s;
    cin >> s;
    vll v(26,0);
    for(i=0;i<s.length();i++){
        v[s[i]-'a']++;
    }
    for(i=0;i<v.size();i++){
        if(v[i]%2==1){
            n++;
        }
    }
    if(n==0 || n%2==1){
        cout << "First" << endl;
    }
    else{ 
        cout << "Second" << endl;
    }
}
