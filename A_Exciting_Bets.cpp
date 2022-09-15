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

lli gcd (lli a, lli b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli t,n,x,ans,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        x=min(a,b);
        if(a==b){
            cout << 0 << " " << 0 << endl;
            continue;
        }
        ans= max(a,b)-min(a,b);
        cout << ans << " " << min(ans-(x%ans),(x%ans)) << endl;
    }
}
