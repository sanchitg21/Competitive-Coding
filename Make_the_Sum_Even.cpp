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
    long long int n,t,i,sum;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sum=0;
        for(i=0;i<n;i++){
            sum=sum+ v[i];
        }
        if(sum%2==0){
            cout << 0 << endl;
            continue;
        }
        int flag=0;
        for(i=0;i<n;i++){
            if(v[i]==0 || v[i]==2){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    
}