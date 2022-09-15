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
    int n,j=0,k;
    cin >> n;
    k=n;
    vector<int>v;
    vector<int> :: iterator ip;
    while(k>0){ 
    n=k;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        v.push_back(n);
    }
    ip = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), ip));
    int c=0;
    for(int i=0;i<v.size();i++){
        c=c+1;
    }
    if(c==2){
        j=j+1;
    }
    v.clear();
    k--;
    }
    cout << j << endl;
}