#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int minverse(int a,int n,int m){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return (minverse(a,n/2,m)*minverse(a,n/2,m))%m;
    }
    else{
        return (a*minverse(a,n/2,m)*minverse(a,n/2,m))%m;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int m,n,a,b;
    cin >> a;
    cin >> m;
    cin >> b;
    n=m-2;
    long long int ans= minverse(a,n,m);
    cout << (ans*b)%m << endl;

    string s;
    cin >> s;
    s[0]=s[0]+1;
    cout << s;
}
