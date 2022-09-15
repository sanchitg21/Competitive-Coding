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
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a,t,b,n,i,j,c=0;
    cin >> t;
    while(t--){
        cin >> n;
        c=0;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vll s;
        for(i=0;i<n;i++){
            if(v[i]%2==0){
                s.pb(v[i]);
            }
        }
        for(i=0;i<n;i++){
            if(v[i]%2){
                s.pb(v[i]);
            }
        }
        for(i=0;i+1<n;i++){
            for(j=i+1;j<n;j++){
                if(gcd(s[i],2*s[j])==1){
                    c++;
                }
            }
        }
        cout << n*(n-1)/2 - c << endl;
    }
}
