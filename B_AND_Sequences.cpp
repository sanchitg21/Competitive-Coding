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
    long long int t,i,n,flag;
    cin >> t;
    while(t--){
        cin >> n;
        flag=0;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        long long int x= v[0];
        v.erase(v.begin(),v.begin()+1);
        v.push_back(x);
        if(v[0]!=v[n-1]){
            cout << 0 << endl;
            continue;
        }
        for(i=1;i<n;i++){
            x=x&v[i];
            if(x==v[0]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout << 0 << endl;
            continue;
        }
        long long int count=0,ans;
        for(i=0;i<n;i++){
            if(v[0]==v[i]){
                count++;
            }
        }
        ans=count*(count-1)%mod ;
        for(i=1;i<=n-2;i++){
            ans=(ans*i)%mod;
        }
        cout<< ans%mod << endl;
    }
}
