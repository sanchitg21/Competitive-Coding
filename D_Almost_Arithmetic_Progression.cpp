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
    lli t,n,i,j;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    if(v.size()==1 || v.size()==2){
        cout << 0 << endl;
        return 0;
    }
    vll s(n-1);
    for(i=1;i<n;i++){
        s[i-1]=v[i]-v[i-1]; 
    }
    n=n-1;
    vll dif(n-1);
    for(i=0;i+1<n;i++){
        dif[i]=s[i]-s[i+1];
    }
    n=n-1;
    lli flag=0;
    for(i=0;i<n;i++){
        if(dif[i]>4 || dif[i]<-4){
            flag=1;
        }
    }
    if(flag){
        cout << -1 << endl;
        return 0;
    }
    
    if((dif[0]==4 || dif[0]==-4) && (dif[n-1]==4 || dif[n-1]==-4)){
        cout << -1 << endl;
        return 0;
    }
    flag=0;
    lli count=0;
    vll ans(n+1);
    for(i=0;i+1<n;i++){   
        if(dif[i]==4){
            dif[i+1]=dif[i+1]+2;
            dif[i]=dif[i]-2;
        }
        else if(dif[i]==-4){
            dif[i+1]=dif[i+1]-2;
            dif[i]=dif[i]+2;
        }
        else if(dif[i]==3){
            if(dif[i+1]>=3 || dif[i+1]<=-3){
                dif[i]=dif[i]-2;
                dif[i+1]=dif[i+1]+2;
            }
        }
        else if(dif[i]==-3){
            if(dif[i+1]>=3 || dif[i+1]<=-3){
                dif[i]=dif[i]+2;
                dif[i+1]=dif[i+1]-2;
            }
        }    
    }
}