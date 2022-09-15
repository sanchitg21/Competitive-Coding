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
    long long int t,i,j,n,a,b,m;
    cin >>t;
    while(t--){
        cin >> n;
        int arr[n][n];
        if(n==2){
            cout << -1 << endl;
            continue;
        }
        m=n;
        a=n+1;
        for(j=0;j<n-2;j++){ 
            m--;
            b=j;
            for(i=0;i<m;i++){ 
                j++;  
                arr[i][j]= a;
                a++;
            }
            j=b;
        }
        m=n;
        for(i=0;i<n-2;i++){ 
            b=i;
            m--;
            for(j=0;j<m;j++){ 
                i++;  
                arr[i][j]= a;
                a++;
            }
            i=b;
        }
        a=1;
        for(i=0;i<n;i++){
            j=i;
            arr[i][j]= a++;
        }
        arr[0][n-1]=n*n-1;
        arr[n-1][0]= n*n;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
