#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,i,n,k;
    cin >>t;
    while(t--){
        cin >> n >> k;
        
        if(2*k+1>n){
            cout << -1 << endl;
            continue;
        }
        cout << 1;
        for(i=1;i<=k;i++){
            cout <<" "<< 2*i +1 << " " << 2*i;
        }
        for(i=2*k+2;i<=n;i++){
            cout << " " << i;
        }
        cout << endl;

    }
}