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
    int t,n,i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i+1<n;i++){
            if(v[0]!=v[1] && v[1]==v[2]){
                cout << 1 << endl;
                break;
            }
            if(v[i]!=v[i+1]){
                cout << i+2 << endl;
                break;
            }
        }
    }
}