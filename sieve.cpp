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
    long long int t,i,n,j,k,flag,L,R;
    cin >> L >> R;
     
    vector <long long int>v;
    for(i=2;i*i<=R;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            v.push_back(i);
        }
    }
    for(n=L;n<=R;n++){
    vector<long long>s;
    flag=0;
    for(int d:v){
        while(n%d==0){
            flag=1;
            break;
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout << n << " ";
    }
    }
}
