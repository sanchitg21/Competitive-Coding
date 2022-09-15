//CODE BY CONFUZED CODER
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
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n,d,i,high,low,mx=0,sum=0;
    cin >> n;
    while(n--){ 
        vll v(4);
        for(i=0;i<4;i++){
            cin >> v[i];
        }
        i=0;
        if((v[i]<v[i+2] && v[i]<v[i+3] && v[i+1]<v[i+2] && v[i+1]<v[i+3]) || (v[i]>v[i+2] && v[i]>v[i+3] && v[i+1]>v[i+2] && v[i+1]>v[i+3])){ 
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl; 
        }
    }
}