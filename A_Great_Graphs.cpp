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
    lli t,n,i,sum,j,count,sub;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        count=0;
        sum=0;
        sub=0;
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sa(v);
        count=-v[n-1];
        for(i=1;i<n;i++){
            sum=sum+v[i];
        }
        count=count+sum;
        for(i=1;i<n;i++){
            sub=sub+v[i];
            count=count + sum - sub - (v[i])*(n-i-1);
        }
        cout<< -count << endl;
    }
}