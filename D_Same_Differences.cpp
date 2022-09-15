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
    long long int t,i,n,sum;
    cin >>t;
    while(t--){
        cin >> n;
        sum=0;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            v[i]=v[i]-i;
        }
        int flag=0;
        sort(v.begin(),v.end());
        long long int c=1;
        for(i=0;i+1<n;i++){
            if(v[i]==v[i+1]){
                c++;
            }
            if(v[i]!=v[i+1]){
                sum= sum+ c*(c-1)/2;
                c=1;
                flag=1;
            }
        }
        sum=sum+ c*(c-1)/2;
        if(flag==0){
            sum=n*(n-1)/2;
        }
        cout << sum << endl;
    }
}
