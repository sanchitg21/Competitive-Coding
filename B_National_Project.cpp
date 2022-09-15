#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,t,d=0,g,b,q;
    cin >> t;
    while(t--){
        cin >> n >> g >> b;
        q=n;
        n=ceil(n/2.0);
        d=0;
        if(n%g==0){
            d+= (n/g -1)*(g+b) +g;
        }
        else{
            d+= (n/g)*(g+b) + n%g;
        }
        cout << max(q,d) << endl;
    }  
}