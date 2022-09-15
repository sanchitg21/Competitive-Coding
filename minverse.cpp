#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int minverse(long long int a,long long int n,long long int m){
    if(n==0){
        return 1;
    }
    long long int t=minverse(a,n/2,m);
    if(n%2==0){
        long long int ans = (t*t)%m;
        return ans;
    }
    else{
        long long int ans = (((a*t)%m)*t)%m;
        return ans;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int m,n,a;
    cin >> a;
    m=mod;
    n=m-2;
    long long int ans= minverse(a,n,m);
    cout << ans << endl;
}
