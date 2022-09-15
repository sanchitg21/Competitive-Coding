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
lli n,t,k,i,j,c,sum;
cin >> t;
while(t--){
    cin >> n >> k;
    vll v(n);
    sum=0;
    c=0;
    for(i=0;i<n;i++){
        cin >> v[i];
        if(v[i]<0){ 
           c++;
        }
    }
    sa(v);
    if(k>c){
        k=k-c;
    }
    else{
        c=k;
    }
    for(i=0;i<c;i++){
        v[i]=-v[i];
    }
    for(i=0;i<n;i++){
        sum=sum+v[i];
    }
    sa(v);
    if(k%2==1){
        sum=sum-v[0]*2;
    }
    cout << sum << endl;
}
}
