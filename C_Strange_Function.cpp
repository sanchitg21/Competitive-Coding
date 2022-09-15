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
    lli n,t,i,j;
    cin >> t;
    while(t--){
        cin >> n;
        lli sum=0,step=2,fact1=step/2,fact2=step;
        while(fact1<=n){
            fact1=(fact1*(step-1))/gcd(fact1,step-1);
            fact2=(fact2*step)/gcd(fact2,step);
            sum=sum+ ((n/fact1 - n/fact2)*step)%mod;
            sum=sum%mod;
            step++;
            
        }
        cout << sum%mod<< endl;
    }
}
