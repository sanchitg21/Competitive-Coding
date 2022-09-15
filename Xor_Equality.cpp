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
const int MX= 1e5+5;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> ans(MX);
    long long int t,a,v,n,i,flag;
    ans[1]=1;
    for(int i=2;i<MX;i++){
        ans[i]=(ans[i-1]*2)%mod;
    }
    cin >> t;
    while(t--){ 
        cin >> n;
        cout << ans[n] << endl; 
    }
}
