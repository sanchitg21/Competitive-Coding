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
    lli i,n,sum=0,c=0;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=0;i+1<v.size();i++){
        if(gcd(v[i],v[i+1])==1){
            continue;
        }
        v.insert(v.begin()+i+1,1);
        c++;
    }
    cout << c << endl;
    for(i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
