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
        int count=0;
        int ans=1000000;
        for(i=n-1;i>=0;i--){
            ans=min(ans,v[i]);
            if(v[i]>ans){
                count++;
            }
        }
        cout << count << endl;
    }
}