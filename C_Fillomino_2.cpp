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
    long long int i,n,m,j,k,index;
    cin >> n;
    m=n;
    int arr[n][n];
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(j=0;j<n;j++){
        k=j;
        arr[k][j]=v[j];
    }
    for(i=1;i<m;i++){
        for(j=0;j<n;j++){
            if(v[j]==i){
                v.erase(v.begin()+j,v.begin()+j+1);
            }
        }
        n=v.size();
        k=i-1;
        for(j=0;j<n;j++){
            k++;
            arr[k][j]=v[j];
        }
        
    }
    for(i=0;i<m;i++){
        for(j=0;j<i+1;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
