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
    long long int t,q,i,n,w,j,count,sum,flag;
    cin >> t;
    while(t--){ 
        cin >> n >> w;
        vector<long long int>v(n);
        vector<long long int> power(20,0);
        for(i=0;i<n;i++){
            cin >> v[i];
            power[log2(v[i])]++;
        }
        int h=0;
        q=w;
        while(true){ 
            w=q;
            for(i=19;i>=0;i--){
               while(true){ 
                  if(w>=(1<<i) && power[i]>0){
                     w=w-(1<<i);
                     power[i]--;
                  }
                  else{
                     break;
                  }
               }  
            }
            h++;
            for(i=0;i<20;i++){
               if(power[i]!=0){
                  break;
               }
            }
            if(i==20){
               break;
            }
        }
        cout << h << endl;
    }
}
