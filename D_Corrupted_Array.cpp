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
    int t,n,i,a,b,sum,c;
    cin >> t;
    while(t--){ 
        sum=0;
        cin >> n;
        n=n+2;
        c=-1;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            sum=sum+v[i];
        }
        sort(v.begin(),v.end());
        int g=sum;
        sum=sum-2*v[n-1];
        for(i=0;i+1<n;i++){
            if(sum==v[i]){
                c=i;
                break;
            }
            
        }
        int h;
        if(c==-1){
            h=v[n-1];
            v[n-1]=v[n-2];
            v[n-2]=h;
            g=g-2*v[n-1];
            for(i=0;i+1<n;i++){
            if(g==v[i]){
                c=i;
                break;
            }  
            }
            if(c==-1){
                cout << -1 << endl;
                continue;
            }
        }
        for(i=0;i<c;i++){
            cout << v[i] <<" " ;
        }
        for(i=c+1;i<v.size()-1;i++){
            cout << v[i] <<" " ;
        }
        cout << endl;
    }
}
