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
    int t,n,m,k,i,j;
    cin >> n >> m >> k;
    int a[n];
    int b[n];
    int c[n];
    int max[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        cin >> b[i];
        max[i]=b[i];
    }
    for(i=0;i<k;i++){
        cin >> c[i];
    }
    sort(max,max+n);
    vector<int>v;
    vector<int>ans;
    for(j=1;j<=max[n-1];j++){ 
        for(i=0;i<n;i++){
            if(b[i]==j){
                v.push_back(i);
            }
        }
        for(i=0;i<v.size();i++){
            v[i]=a[v[i]];
        }
        sort(v.begin(),v.end(),greater<>());
        ans.push_back(v[0]);
        v.clear();
    }
    for(i=0;i<k;i++){
        c[i]=a[c[i]-1];
    }
    int count=0;
    for(i=0;i<k;i++){
        for(j=0;j<ans.size();j++){ 
            if(c[i]==ans[j]){
                count++;
                break;
            }
        }
    }
    cout << k-count << endl;
}
