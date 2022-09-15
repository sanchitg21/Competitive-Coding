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
    long long int t,i,k,n,m;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;  
        if(n/k>m){
            cout << m << endl;
            continue;
        }
        double i=n/k;
        double j=m-i;
        j=ceil(j/(k-1));
        cout << i-j << endl;
    }
}
