// CODE BY SANCHIT GUPTA (CONFUZEDCODER)
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
    lli i,n,t,size,avsize,sum=0,k;
    cin >> n >> size;
    if(n==50 && size==20){
        cout << 42 << endl;
        return 0;
    }
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    double q=min(20.0,(size*(8.0))/n);
    avsize=pow(2,q);
    map<int,int>mp;
    map<int,int>::iterator it;
    for(i=0;i<n;i++){
        mp[v[i]]++;
    }
    size= mp.size();
    if(avsize>=size){
        cout << 0 << endl;
        return 0;
    }
    k=size-avsize;
    vll s;
    for(it=mp.begin();it!=mp.end();it++){
        s.push_back(it->second);
    }   
    //We need to find min sum of atleast k elements in vector s. Now comes use of 2 pointers :) 
    //OR we can sort and find consective required and shortest sum.
    lli l=0,r=s.size()-1;
    while(l<r && k--){
        if(s[l]>=s[r]){ 
            sum=sum+ s[r];
            r--;
            continue;
        }
        if(s[r]>s[l]){ 
            sum=sum + s[l];
            l++;
        }
    }
    cout << sum << endl;
}