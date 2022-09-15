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
    lli i,f,t,n,k,flag;
    cin >> n >> k;
    vll v(n);
    while(n--){
        cin >> f >> t;
        if(t>=k){ 
            v[n]= f-(t-k);
        }
        else{
            v[n]= f;
        }
    }
    sd(v);
    cout << v[0] << endl;
}