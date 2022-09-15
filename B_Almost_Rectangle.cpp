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
    int t,n,j,i;
    cin >> t;
    while(t--){
        cin >> n;
        char arr[n][n];
        int x[2];
        int y[2];
        int flag=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){ 
            cin >> arr[i][j];
            }
        } 
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){ 
                if(arr[i][j]=='*'){
                    if(flag==0){ 
                    x[0]=i;
                    y[0]=j;
                    flag=1;
                    continue;
                    }

                    if(flag==1){
                    x[1]=i;
                    y[1]=j;
                    flag=2;
                    break;
                    }
                }
            }  
            if(flag==2){
                break;
            }     
        }
        int a[2];
        int b[2];
        a[0]= x[0];
        b[0]= y[1];
        a[1]= x[1];
        b[1]= y[0];

        if(x[0]==x[1]){
            if(a[0]!=n-1){ 
            arr[a[0]+1][b[1]]='*';
            arr[a[0]+1][b[0]]='*';
            }
            else{
            arr[a[0]-1][b[1]]='*';
            arr[a[0]-1][b[0]]='*'; 
            }
        }
        else if(y[0]==y[1]){
            if(b[0]!=n-1){ 
            arr[a[0]][b[0]+1]='*';
            arr[a[1]][b[0]+1]='*';
            }
            else{
            arr[a[0]][b[0]-1]='*';
            arr[a[1]][b[0]-1]='*'; 
            }
        }
        else{ 
        arr[a[0]][b[0]]= '*';
        arr[a[1]][b[1]]='*';
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}