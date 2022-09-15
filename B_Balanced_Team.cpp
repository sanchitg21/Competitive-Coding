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
    lli i,n,flag=0,c=0,mx=0;
    cin >> n;
    lli k=5,l,h=0;;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(l=0;l<n;l++){
        while(h<n){ 
            if(v[h]-v[l]<=5){
                c++;
                mx=max(mx,h-l+1);
                h++; 
            } 
            if(v[h]-v[l]>5){
                break;
            }
        }
    }
    cout << mx << endl;
}