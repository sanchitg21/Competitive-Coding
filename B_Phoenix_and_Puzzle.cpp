#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,x,y;
    cin >> t;
    while(t--){
        cin >> n;
        x= sqrt(n/2.0); 
        y= sqrt(n/4.0);
        if(x==sqrt(n/2.0) || y ==sqrt(n/4.0)){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    }
}