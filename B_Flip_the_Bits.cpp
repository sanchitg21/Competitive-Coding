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
    long long int t,i,n,p,q;
    cin >> t;
    while(t--){
        cin >> n;
        string a;
        string b;
        cin >> a >> b;
        bool c[n],d[n];
        bool flag=true;
        p=0,q=0;
        for(i=0;i<n;i++){
            if(a[i]==b[i]){
                d[i]=1;
            }
            else{
                d[i]=0;
            }
            if(a[i]=='0'){
                p++;
            }
            else{
                q++;
            }
            if(p!=q){
                c[i]=0;
            }
            else{
                c[i]=1;
            }
        }
        for(i=0;i+1<n;i++){
            if(d[i]!=d[i+1]){
                if(c[i]==0){
                    flag=false;
                    break;
                }
            }
        }
        if(d[n-1]==0 && c[n-1]==0){
            flag=false;
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
