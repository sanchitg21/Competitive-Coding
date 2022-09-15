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
    long long int t,i,n,j,k,flag;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        flag=0;
        for(i=0;i+2<n;i++){
            if(v[i]<v[i+1] && v[i+1]>v[i+2]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout << "YES" << endl;
            cout << i+1 << " " << i+2 <<" " << i+3 << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
