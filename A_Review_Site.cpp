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
    int n,t,i,count;
    cin >>t;
    while(t--){
        cin >> n;
        count=0;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<n;i++){
            if(v[i]==1 || v[i]==3){
                count++;
            }
        }
        cout << count << endl;
    }
}