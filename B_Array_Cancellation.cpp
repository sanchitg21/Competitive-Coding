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
    long long int t,i,j,k,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long int arr[n];
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        for(i=0;i+1<n;i++){
            if(arr[i]>=0){
                arr[i+1]=arr[i+1]+arr[i];
                arr[i]=0;
            }
        }
        long long count=0;
        for(i=0;i<n;i++){
            if(arr[i]<=0){
                count=count+arr[i];   
            }
        }
        cout << -count << endl;
    }
}
