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
    long long int t,i,k,n,j,flag,sum,ans=1e9+7;
    vector<int>v[200005];
    cin >> n >> k;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
        int count=0;
        while(arr[i]>0){ 
            v[arr[i]].push_back(count);
            count++;
            arr[i]/=2;
        }
    }
    for(i=0;i<200005;i++){
        sort(v[i].begin(),v[i].end());
        if(v[i].size()>=k){ 
            sum=0;
            for(j=0;j<k;j++){
                sum=sum+ v[i][j];
            }
            ans=min(ans,sum);
        }
    }
    cout << ans << endl;
}
