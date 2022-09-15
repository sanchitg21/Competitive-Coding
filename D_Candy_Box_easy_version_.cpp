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
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i]; 
        }
        map<int,int>mp;
        map<int,int>::iterator it;
        for(i=0;i<n;i++){
            mp[v[i]]++;
        }
        vector<int>ans;
        for(it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
        }
        sort(ans.begin(),ans.end(),greater <>());

        for(i=1;i<ans.size();i++){
            if(ans[i]>=ans[i-1]){
                ans[i]=ans[i-1]-1;
            }
            else{
                continue;
            }
        }
        int count=0;
        for(i=0;i<ans.size() && ans[i]!=0;i++){
            count=count+ans[i];
        }
        cout << count << endl;
        
    }
}
