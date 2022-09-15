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
    lli a,b,t,m,x,n,i,j,sum;
    cin >> n;
    vll v(n);
    vll h(n);
    sum=2;
    for(i=0;i<n;i++){ 
        cin >> v[i] >> h[i]; 
    }
    if(n<=2){
        cout << n << endl;
        return 0;
    }
    for(i=1;i+1<n;i++){
        if(v[i]-h[i]>v[i-1]){
            sum++;
        }
        else if(v[i]+h[i]<v[i+1]){
            sum++;
            v[i]=v[i]+h[i];
        }
    }
    cout << sum << endl;
}
