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
    lli i,j,n,sum=0,x,y,north=0,south=0,east=0,west=0,mx=0;
    cin >> n >> x >> y;
    vpl v(n);
    for(i=0;i<n;i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }
    for(i=0;i<n;i++){
        if(v[i].first>x){
            east++;
        }
        if(v[i].first<x){
            west++;
        }
        if(v[i].second>y){
            north++;
        }
        if(v[i].second<y){
            south++;
        }
    }
    mx=max(mx,south);
    mx=max(mx,north);
    mx=max(mx,east);
    mx=max(mx,west);
    cout << mx << endl;
    if(mx==north){
        cout << x <<" " << y+1 << endl;
    }
    else if(mx==south){
        cout << x << " " << y-1 << endl;
    }
    else if(mx==east){
        cout << x+1 << " " << y << endl;
    }
    else{
        cout << x-1 << " " << y << endl;
    }
}
