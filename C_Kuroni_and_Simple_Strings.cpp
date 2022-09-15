#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,t,flag=0;
    string s;
    cin >> s;
    n=s.length();
    vll v;
    lli l=0,r=n-1;
    while(l<r){
        if(s[l]!='('){
            l++;
        }
        if(s[r]!=')'){
            r--;
        }
        if(l>=r){
            break;
        }
        if(s[l]=='(' && s[r]==')'){
            v.pb(l+1);
            v.pb(r+1);
            l++;
            r--;
        }
    }
    if(v.size()==0){
        cout << 0 << endl;
        return 0;
    }
    cout << 1 << endl;
    sa(v);
    cout <<v.size() << endl;
    for(i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
