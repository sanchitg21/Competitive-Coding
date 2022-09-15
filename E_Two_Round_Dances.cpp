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
	lli n,t,i,j,k,ans;
    cin >> n;
    t=1;
    for(i=1;i<=n/2 -1 ;i++){
        t=t*i;
    }
    j=1;
    for(i=1;i<=n;i++){
        j=j*i;
    }
    k=1;
    for(i=1;i<=n/2;i++){
        k=k*i;
    }
    k=k*k;
    t=(t*t);
    ans=(j/k)*t;
    ans=ans/2;
    cout << ans << endl;
}