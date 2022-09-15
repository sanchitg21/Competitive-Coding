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
    long long int t,n,m,i,j,x;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> m;
        cin >> x;
        if(x==n*m){ 
            cout << x << endl;
            continue;
        }
        if(x%n!=0)
            cout << (x%n -1)*m + (x/n)+1  << endl;
        else 
            cout << (n-1)*m + (x/n) << endl;
    }
}