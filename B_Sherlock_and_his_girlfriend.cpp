#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
bool isprime(long long int n){
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,i,n;
    cin >> n;
    if(n>2){
        cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }
    for(i=2;i<=n+1;i++){
        if(isprime(i)){
            cout << 1 << " ";
        }
        else{
            cout << 2 << " ";
        }
    }
}
