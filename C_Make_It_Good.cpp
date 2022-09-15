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
    long long int t,i,n,z,c,a,b,flag;
    cin >> t;
    while(t--){
        c=0;
        cin >> n;
        vector<int>v(n);
        vector<int>d(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            d[i]=v[i];
        }
        if(v[0]>=v[n-1]){
            b=v[n-1];
            v.erase(v.begin()+n-1);
        }
        else{
            b=v[0];
            v.erase(v.begin());
        }
        n=v.size();
        if(n==0 || n==1){
            cout << 0 << endl;
            continue;
        }
        flag=0;
        while(true){
            if(b>=v[0] && b>=v[n-1]){
                if(v[0]>=v[n-1]){
                    b=v[n-1];
                    a=n-1;
                }
                else{
                    b=v[0];
                    a=0;
                }
                flag=1;
                v.erase(v.begin()+a);
                n=v.size();
            }
            else{
                if(n==0){
                    break;
                }
                v.clear();
                for(i=0;i<d.size();i++){
                    v.push_back(d[i]);
                }
                c++;
                v.erase(v.begin());
                n=v.size();
                d.clear();
                for(i=0;i<v.size();i++){
                    d.push_back(v[i]);
                }
            }

        }
        cout << c << endl;
    }
}
