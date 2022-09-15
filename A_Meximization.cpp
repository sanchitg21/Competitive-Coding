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
    long long int q,t,i,n,k,j,ip;
    cin >> t;
    while(t--){ 
        cin >> n;
        vector<int>v;
        vector<int>::iterator ip;
        vector<int>a;
        
        for(i=0;i<n;i++){ 
            cin >> q;
            v.push_back(q);
            a.push_back(q);
        }
        sort(v.begin(),v.end());
        sort(a.begin(),a.end());
        ip=unique(v.begin(), v.end());
        v.resize(distance(v.begin(),ip));
        int m=v.size();
        for(i=0;i<m;i++){ 
            for(j=0;j<n;j++){ 
                if(v[i]==a[j]){ 
                    a.erase(a.begin()+j);
                    break;
                }        
            }
        }
        n=a.size();
        for(i=0;i<n;i++)
            v.push_back(a[i]);
        for(ip=v.begin();ip!=v.end();++ip)
            cout << *ip << " ";
        cout << "" << endl;

    }

}
