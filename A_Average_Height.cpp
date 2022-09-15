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
    long long int t,i,n;
    cin >>t ;
    while(t--){
        cin >> n;
        vector<long long int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vector<long long int>ans;
        for(i=0;i<n;i++){
            if(v[i]%2==0){
                ans.push_back(v[i]);
            }
        }
        for(i=0;i<n;i++){
            if(v[i]%2==1){
                ans.push_back(v[i]);
            }
        }
        for(i=0;i<n;i++){
            cout << ans[i] <<" ";
        }
        cout << endl;        
    }
}