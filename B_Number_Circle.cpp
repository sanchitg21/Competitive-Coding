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
    long long int i,n,flag;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){ 
        cin >> arr[i];
    }
    sort(arr,arr+n);
    flag=0;
    if(arr[n-1]<arr[n-2]+arr[0]){
        cout << "YES" << endl;
        flag=1;
    }
    else{
        if(arr[n-1]<arr[n-3]+arr[n-2]){
            cout << "YES" << endl;
            flag=2;
        }
        else{
            cout << "NO" << endl;
        }
    }
    if(flag==1){
        for(i=0;i<n;i++){ 
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else if(flag==2){
        for(i=0;i<=n-3;i++){
            cout << arr[i] << " ";
        }
        cout << arr[n-1] << " ";
        cout << arr[n-2] << endl;
    }

}