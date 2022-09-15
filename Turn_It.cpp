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
    long long int t,u,v,a,s,x;
    cin >> t;
    while(t--){
        cin >> u >> v >> a >> s;
        if(v*v<(u*u)-(2*a*s)){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}
