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
    lli i,n;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];  
    }
    lli l=0,r=n-1,sum1=0,sum2=0,y=0;
    while(l<=r){
        y++;
        if(v[l]>=v[r] && y%2==1){
            sum1=sum1+v[l++];
            continue;
        }
        if(v[r]>=v[l] && y%2==1){
            sum1=sum1+v[r--];
            continue;
        }
        if(v[l]>=v[r] && y%2==0){
            sum2=sum2+v[l++];
            continue;
        }
        if(v[r]>=v[l] && y%2==0){
            sum2=sum2+v[r--];
        }
        
    }
    cout << sum1 << " " << sum2 << endl;
}