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
    long long int t,n,i,a,b,c,x,y,z;
    cin >> t;
    while(t--){
        cin >> a >> b>> c;
        x=pow(10,a-1);
        y=pow(10,b-1);
        z=pow(10,c-1);
        cout << x<< " " <<y + z << endl;   
    }
}