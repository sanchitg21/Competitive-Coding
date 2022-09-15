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
    long long int t,i,n,u,r,d,l,flag;
    cin >> t;
    while(t--){
        flag=0;
        cin >> n >> u >> r >> d >> l;

        if(u>n || r>n || d>n || l>n){
            flag=1;
        }
        if(u==0 && d==0){
            if(r>n-2 || l>n-2){
                flag=1;
            }
        }
        if((u==1 && d==0)||(u==0 && d==1)){
            if(r>n-2 && l>n-2){
                flag=1;
            }
        }
        if((u==1 && d==0)||(u==0 && d==1)){
            if((l>n-1 && r==n-2)||(r>n-1 && l==n-2)){
                flag=1;
            }
        }
        if(u==1 && d==1){
            if((r==n && l>n-2)||(r>n-2 && l==n)){
                flag=1;
            }
        }
        if((u==2 && d==0)||(u==0 && d==2)){
            if((r==n && l==n-2)||(r==n-2 && l==n)||(r==n-1 && l==n)||(r==n && l==n-1)){
                flag=1;
            }
        }
        if((u==2 && d==1)||(u==1 && d==2)){
            if((r>n-1 && l>n-1)){
                flag=1;
            }
        }
        if(r==0 && l==0){
            if(u>n-2 || d>n-2){
                flag=1;
            }
        }
        if((r==1 && l==0)||(r==0 && l==1)){
            if(d>n-2 && u>n-2){
                flag=1;
            }
        }
        if((r==1 && l==0)||(r==0 && l==1)){
            if((u>n-1 && d==n-2)||(d>n-1 && u==n-2)){
                flag=1;
            }
        }
        if(r==1 && l==1){
            if((d==n && u>n-2)||(d>n-2 && u==n)){
                flag=1;
            }
        }
        if((r==2 && l==0)||(r==0 && l==2)){
            if((u==n && d==n-2)||(u==n-2 && d==n)||(u==n-1 && d==n)||(u==n && d==n-1)){
                flag=1;
            }
        }
        if((r==2 && l==1)||(r==1 && l==2)){
            if((d>n-1 && u>n-1)){
                flag=1;
            }
        }
        
        if(flag==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
