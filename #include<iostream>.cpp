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
    long long int t,i,n,j,k,sum;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        int c=0;
        for(k=0;k<n;k++){
            if(s[k]=='A'){ 
                break;
            }
        }
        if(k==n-1 || k==n){
            cout << 0 << endl;
            continue;
        }
        int flag=0;
        for(i=k;i<n;i++){
            if(s[i]=='P'){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout << 0 << endl;
            continue;
        }
        while(true){ 
            for(i=0;i+1<n;i++){
                if(s[i]=='A' && s[i+1]=='P'){
                    s[i+1]='A';
                    i++;
                }
                else if(s[i]=='A' && s[i+1]=='A'){
                    for(j=i;j<n;j++){
                        if(s[j]!='A'){
                            i=j;
                            s[i]='A';
                            break;
                        }
                    }
                }
            }
            c++;
            flag=0;
            for(i=k;i<n;i++){
                if(s[i]=='P'){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                break;
            }
        }
        cout << c << endl;
    }
}