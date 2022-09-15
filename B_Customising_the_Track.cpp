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
    lli n,t,i,j,sum,mean,mx,mn,x,y;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        sum=0;
        for(i=0;i<n;i++){
            cin >> v[i];
            sum=sum+v[i];
        }
        mn= floor(sum*1.0/n); 
        mx= ceil(sum*1.0/n);
        if(mx==mn){
            cout << 0 << endl;
            continue;
        }
        x=(sum- n*mn)/(mx-mn);
        y=n-x;
        cout << x*y << endl;
    }
}