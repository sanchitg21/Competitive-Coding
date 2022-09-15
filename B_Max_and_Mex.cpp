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
        cin >> k;
        vector<int>v;
        vector<int>::iterator ip;
        for(i=0;i<n;i++){ 
            cin >> q;
            v.push_back(q);
        }
        sort(v.begin(),v.end());
        long long int a,b;
        b=*max_element(v.begin(), v.end()); //Found B
        for(i=0;i<n;i++){ 
            if(v[i]!=i)
                break;
        }
        a=i;                                 //Found a 
        long long int c= ceil((a+b)/2.0);
        if(k==0){ 
            cout << n << "\n";
            continue;
        }
        v.push_back(c);
        sort(v.begin(),v.end());
        ip=unique(v.begin(), v.end());
        v.resize(distance(v.begin(),ip));
        n=v.size();
        int flag=0;
        for(i=0;i<n;i++){ 
            if(v[i]!=i){ 
                flag=1;
                break;
            }
        }
        if (flag==0){ 
            n=n+k-1;
        }
        
        cout << n << "\n";
    }
}
