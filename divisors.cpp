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
    long long int t,i,n,j,k,flag,L,R;
    cin >> n;
    vector<int>v(n);
    for (i=0;i<v.size();i++){
        cin >> v[i];
    }
    int count=0;
    if(v[0]>=v[1]){
        for(i=0;i+1<v.size();i++){
            if(v[i]<=v[i+1]){
                count++;
                break;
            }
        }
    }
    if(v[0]<v[1]){
        for(i=0;i+1<v.size();i++){
            if(v[i]>v[i+1]){
                count++;
                break;
            }
        }
    }

    if(v[i]>=v[i+1]){
        for(j=0;j+1<v.size();j++){
            if(v[j]<=v[j+1]){
                count++;
                break;
            }
        }
    }
    if(v[i]<v[i+1]){
        for(j=0;j+1<v.size();j++){
            if(v[j]>v[j+1]){
                count++;
                break;
            }
        }
    }
    
    if(count==2){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
