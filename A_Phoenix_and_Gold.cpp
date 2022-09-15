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
    int t,n,i,x,index,flag,sum;
    cin >> t;
    while(t--){
        sum=0;
        flag=0;
        cin >> n >> x;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vector<int>s;
        sort(v.begin(),v.end(),greater<int>());
        while(sum<x){ 
        for(i=0;i<v.size();i++){
            if(sum+v[i]!=x){
                sum=sum+v[i];
                s.push_back(v[i]);
                v.erase(v.begin()+i,v.begin()+i+1);
                
            }
        }
        if(v.size()==0){
                    break;
                }
        flag++;
        if(flag>n){
            break;
        }
        }
        if(flag>n){
            cout << "No" << endl;
            continue;
        }
        else{
            cout << "Yes" << endl;
        }
        for(i=0;i<s.size();i++){
            cout << s[i] << " ";
        }
        for(i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}