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
    long long int r,q,t,i,j,n,x;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> x;
        long long int arr[n]={0};
        for(i=0;i<n;i++){
            cin >> q;
            cin >> r;
            if(q<=x){ 
                arr[i]=r;
            }
        }
        long long int max=0;
        for(i=0;i<n;i++){
            if(arr[i]>=max){
                max=arr[i];
                break;
            }
        }
        cout << max << endl;
    }
}
