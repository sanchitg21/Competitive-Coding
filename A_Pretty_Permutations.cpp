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
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            v[i]=i+1;
        }
        if(n==1){
            cout << v[0] << endl;
            continue;
        }
        if(n%2==1){ 
            for(i=0;i<n-3;i=i+2){
                cout << v[i+1] << " " << v[i] << " "; 
            }
            cout << v[n-1] << " " << v[n-3] << " " << v[n-2] << endl;
        }
        else{
            for(i=0;i<n;i=i+2){
                cout << v[i+1] << " " << v[i] << " "; 
            }
            cout << endl;
        }
    }
}