#include<iostream>
#include<cmath>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long int t,i,n,k,j,c,m;
    cin >> t;
    for(i=0;i<t;i++){ 
        int arr[5]={0};
        for(j=0;j<5;j++)
            cin >> arr[j];
        
        if((arr[1]-arr[0]) >=  arr[4]*arr[2] && (arr[1]-arr[0]) <=  arr[4]*arr[3])
            cout << 1 << endl;
        else 
            cout << 0 << endl;
    }
}