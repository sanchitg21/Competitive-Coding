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
    long long int t,i,n,x,y;
    cin >> t;
    while(t--){
        cin >> n;
        y=n;
        long long int count=0;
        x=205000000000000000;
        while(x>=2050){
            while(n>=x){
                n=n-x;
                count++;
            }
            x=x/10;
        }
        if(n>0){
            cout << -1 << endl;
    
        }
        else{
            cout << count << endl;
        }
    }
}