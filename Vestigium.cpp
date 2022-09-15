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
    long long int q,t,i,n,r,c,j,sum;
    cin >> t;
    for(int k=1;k<=t;k++){ 
        c=0;
        r=0;
        vector<int> v;
        vector<int>::iterator ip;
        cin >> n;
        int arr[n][n];
        for(i=0;i<n;i++){ 
            sum=0;
            for(j=0;j<n;j++){ 
                cin >> arr[i][j];
                v.push_back(arr[i][j]);
                sort(v.begin(),v.end());
                ip=unique(v.begin(), v.end());
                v.resize(distance(v.begin(),ip));
            }
            if(v.size()!=n)
                c=c+1;
            v.clear();
        }
        for(j=0;j<n;j++){ 
            sum=0;
            for(i=0;i<n;i++){ 
                v.push_back(arr[i][j]);
                sort(v.begin(),v.end());
                ip=unique(v.begin(), v.end());
                v.resize(distance(v.begin(),ip));
            }
            if(v.size()!=n)
                r=r+1;
            v.clear();
        }
        int trace=0;
        
        for(i=0;i<n;i++)
            trace= trace + arr[i][i];
        cout << "Case #" << k << ": " << trace <<" "<< c << " " << r << endl;
    }
}
