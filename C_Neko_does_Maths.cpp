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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a,b,n,i,j,index=0;
    cin >> a;
    cin >> b;
    long long int mn=a*b;
    if(b<a){
        swap(a,b);
    }
    vpl v;
    for(i=1;i*i<=b-a;i++){
        if((b-a)%i==0){
            v.pb({i,0});
            v.pb({(b-a)/i,0});
        }
    }
    for(i=0;i<v.size();i++){
        if(b%v[i].first!=0){
            v[i].second= v[i].first - (a % v[i].first);
        }
    }
    for(i=0;i<v.size();i++){
        if(mn>(v[i].second+a)*(v[i].second+b)/v[i].first){
            mn=(v[i].second+a)*(v[i].second+b)/v[i].first;
            index=v[i].second;
        }
    }
    cout << index << endl;
}
