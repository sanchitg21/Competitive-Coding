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
    long long int i,n,j,k,sum=0;
    cin >> n>>k;
    vector<long long int>v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    
    long long int x[n+1]={0};
    for(i=0;i<k;i++){
        sum=sum+v[i];
    }
    //find x1 to xk
    for(i=1;i<=k;i++){
        x[i]=x[i-1] + v[i-1];
    }
    for(i=k+1;i<=n;i++){ 
        sum=sum+v[i-1];
        x[i]= x[i-k]+ sum;
    }
    for(i=1;i<=n;i++){
        cout << x[i] << " ";
    }
    cout << endl;
}
