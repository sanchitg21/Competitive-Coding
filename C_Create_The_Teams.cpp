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
    long long int t,i,j,n,c,y;
    double x;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> x;
        c=0;
        vector<long long int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++){
            if(v[i]>=x){
                v.erase(v.begin()+i);
                c=c+1;
                i=i-1;
            }
        }
        for(i=v.size()-1;i>=0;i--){
            n=v.size();
            y=ceil(x/v[i]);
            
            if(n-y-i==0){
                c=c+1;
                v.erase(v.begin()+i,v.end());
            }
        }
        cout << c << endl;
    }
}
