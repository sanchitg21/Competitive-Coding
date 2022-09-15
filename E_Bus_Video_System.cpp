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
    lli n,t,i,j,cap,Max,Min;
    cin >> n >> cap;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    Min=v[0];
    Max=v[0];
    lli low=Min,high=Max;
    for(i=1;i<n;i++){
        low=low+v[i];
        high=high+v[i];
        Min=min(Min,low);
        Max=max(Max,high);
    }
    if(Max>cap || Min>cap){
        cout << 0 << endl;
        return 0;
    }
    Max=max((lli)0,Max);
    Max=max((lli)0,cap-Max);
    Min=max((lli)0,-Min);
    if(Max<=cap && Min <=cap){
        cout << max((lli)0,Max-Min+1) << endl;
    }
    else{
        cout << 0 << endl;
    }
}