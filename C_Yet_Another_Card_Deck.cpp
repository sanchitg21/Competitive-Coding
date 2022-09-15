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
    long long int n,q,i;
    cin>>n>>q;
    vector<long long int> a(n);
    vector<long long int>c(51,0);
    for(i=0;i<n;i++){
        cin>>a[i];
        if(c[a[i]]==0){
            c[a[i]]=i+1;
        }
    }
    while(q--){
        int t;
        cin>>t;
        cout<<c[t]<<" ";
        for(i=1;i<51;i++){
            if(c[i]<c[t]){
                c[i]++;
            }
        }
        c[t]=1;
    }
} 
