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
    long long int t,i,n,m,j,index;
    int mini,maxi;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int arr[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        for(j=0;j<m;j++){
            for(i=0;i<n;i++){
                sort(arr[i]+j,arr[i]+m);
            }
            mini=1000000000;
            maxi=1000000000;
            for(i=0;i<n;i++){
                mini=min(mini,arr[i][j]);
            }
            for(i=0;i<n;i++){
                if(mini==arr[i][j]){
                    maxi=min(maxi,arr[i][m-1]);
                }
            }
            for(i=0;i<n;i++){
                if(mini==arr[i][j] && maxi==arr[i][m-1]){
                    index=i;
                }
            }
            for(i=0;i<n;i++){
                if(i!=index){ 
                    sort(arr[i]+j,arr[i]+m,greater<int>());
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
