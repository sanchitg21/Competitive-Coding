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
    int a,b,t,m,x,n,i,j,index;
    cin >> n >> m;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    map<lli,lli>mp;
    for(i=0;i<n;i++){
        if(v[i]!=v[i+1]){
            index=i;
            break;
        }
    }
    for(i=index;i<n;i++){
        mp[v[i]]++;
        if(mp.size()==m){
            break;
        }
    }
    for(j=index;j<n;j++){
        if(mp[v[j]]>1){
            index++;
            mp[v[j]]--;
        }
        else{
            break;
        }
    }
    if(mp.size()==m){ 
        cout << index+1 << " " << i+1 << endl;
    }
    else{
        cout << -1 << " " << -1 << endl;
    }
}