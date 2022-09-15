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
    long long int t,i,j,k,n;
    cin >> t;
    while(t--){ 
        cin >> n;
        vector<int>v(n);
        vector<int>w(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<n;i++){
            cin >> w[i];
        }
        for(i=0;i<n;i++){
            w[i]=w[i]-v[i];
        }
        int flag=0;
        for(i=0;i<w.size();i++){
            if(w[i]<0){
                cout << "NO" << endl;
                flag=1;
                break;
            }
        }
        if(flag==1){
            continue;
        }
        int x=0,y=0;
        for(i=0;i<w.size();i++){
            if(w[i]!=0){
                x=i;
                break;
            }
        }
        for(i=w.size()-1;i>=0;i--){
            if(w[i]!=0){
                y=i;
                break;
            }
        }
        flag=0;
        for(i=x;i<=y-1;i++){
            if(w[i]!=w[i+1]){
                flag=1;
            }
        }
        sort(w.begin(),w.end());
        while(w[0]==0 && w.size()>0){
            w.erase(w.begin());
        }
        if(w.size()==0 || w.size()==1){
            cout << "YES" << endl;
            continue;
        }
        int count=0;
        for(i=0;i<w.size()-1;i++){
            if(w[i]!=w[i+1]){
                count++;
            }
        }
        if(count<=1 && flag==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
