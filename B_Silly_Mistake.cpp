#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,flag=0,count,sum,j,y=0;
    cin >> n;
    vll v(n);
    map<int,int>mp;
    vll ans;
    for(i=0;i<n;i++){
        cin >> v[i];   
    }
    sum=0;
    count=0;
    for(i=0;i<n;i++){
        y++;
        if(mp[abs(v[i])]==0 && v[i]>0){ 
            mp[abs(v[i])] = 2;
            sum++;
            continue;
        }
        if(mp[abs(v[i])]==0 && v[i]<0){ 
            cout << -1 << endl;
            return 0;
        }
        if(mp[abs(v[i])]==2 && v[i]>0){
            cout << -1 << endl;
            return 0;
        }
        if(mp[abs(v[i])]==1 && abs(v[i])>0){
            cout << -1 << endl;
            return 0;
        }
        if(mp[abs(v[i])]==2 && v[i]<0){
            mp[abs(v[i])]= 1;
            sum--;
        }
        if(sum==0){
            count++;
            mp.clear();
            ans.pb(y);
            y=0;
        }
    }
    if(sum!=0){
        cout << -1 << endl;
        return 0;
    }
    cout << count << endl;
    for(i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}
