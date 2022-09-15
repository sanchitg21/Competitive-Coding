#include<iostream>
#include<cmath>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    int t,i,n,flag;
    cin >> t;
    while(t--){ 
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++){ 
            cin >> arr[i];
        }
        sort(arr, arr+ n);
        int y=0;
        flag=0;
        for(i=0;i<n;i++){ 
            if(arr[i]<=i+1){ 
                while(arr[i]<i+1){ 
                    y++;
                    arr[i]=arr[i]+1;
                }
            }
            else { 
                cout << "Second" << endl;
                flag=1;
                break;
            }
        }
        if (flag==1)
            continue;    
        if(y%2==0)
            cout << "Second" << endl;
        else 
            cout << "First" << endl;
    }
}