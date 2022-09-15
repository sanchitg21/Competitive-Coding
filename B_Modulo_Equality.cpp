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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,m,i,j,k,mx=1e9;
    cin >> n >> k;
    vll a(n);
    vll b(n);
    for(i=0;i<n;i++){
       cin >> a[i];
    }
    for(i=0;i<n;i++){
       cin >> b[i];
    }
    sa(a);
    sa(b);
    for(i=0;i<n;i++){
        map<lli,lli>mp;
        for(j=0;j<n;j++){
            mp[(b[(i+j)%n]-a[j]+k)%k]++;
        }
        if(mp.size()==1){
            map<lli,lli>::iterator it=mp.begin();
            mx=min(mx,it->first);
        }
    }   
    cout << mx << endl;
}