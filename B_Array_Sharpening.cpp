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
    int t,n,i,j,rest,x,y,flag=0;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>v(n);
        flag=0;
        for(i=0;i<n;i++){
            cin >> v[i];
        }

        for(i=0;i<n;i++){
            if(v[i]>=i){
                v[i]=i;
            }
            else{
                break;
            }
            x=i;
        }
        for(j=n-1;j>=0;j--){
            if(v[j]>=n-j-1){
                v[j]=n-j-1;
            }
            else{
                break;
            }
            y=j;
        }
        if(x<y){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}
