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
    lli t,n,i,j,mn,flag=0;
    cin >>t;
    while(t--){
        cin >>n;
        flag=0;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sa(v);
        for(i=0;i<n;i++){
            if(v[i]>0){
                flag=1;
                break;
            }
        }
        if(flag==1){ 
            v.erase(v.begin()+i+1,v.end());
            flag=0;
        }
        n=v.size();
        for(j=0;j+2<n;j++){
            if(v[j+1]-v[j]<v[n-1]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout << n-1 << endl;
        }
        else{
            cout << n << endl;
        }
    }
}