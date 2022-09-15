#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,t,k,d,flag=0;
    cin >> t;
    while(t--){
        cin >> n >> k >> d;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        map<int,int>mp;
        for(i=0;i<d;i++){
            mp[v[i]]++;
        }
        lli low,high=d,mn=mp.size(),q;
        for(low=0;low<n-d;low++){
            mp[v[high]]++;
            high++;
            mp[v[low]]--;
            if(mp[v[low]]==0){
                mp.erase(v[low]);
            }
            q=mp.size();
            mn=min(mn,q);
        }   
        
        cout << mn << endl;
    }    
}
