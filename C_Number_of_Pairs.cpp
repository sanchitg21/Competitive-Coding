//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli a,t,n,i,j,l,r,ans,sum;
    cin >> t;
    while(t--){
        cin >> n >> l >> r;
        vll v(n);
        vector<lli>::iterator ip;
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        sa(v);
        ip = unique(v.begin(), v.begin() + n);
        v.resize(distance(v.begin(), ip));
        n=v.size();
        vll pre(n,0);
        lli z=0;
        for(i=0;i<n;i++){
            pre[i]=z+mp[v[i]];
            z=pre[i];
        }
        ans=0;
        lli low=0;
        lli high=n-1;
        while(low<high){
            sum=v[low]+v[high];
            if(sum>r){
                high--;
            }
            else if(sum<l){
                low++;
            }
            else{
                auto mid=lower_bound(v.begin(),v.end(),l-v[low]);
                auto index=lower_bound(v.begin(),v.end(),v[high]);
                if(mid>lower_bound(v.begin(),v.end(),v[low]) && l>v[low]){ 
                    lli h=mid-v.begin();
                    h--;
                    ans=ans+(pre[index-v.begin()]-pre[h])*mp[v[low]];
                }
                else{
                    ans=ans+(pre[high]-pre[low])*mp[v[low]];
                }
                low++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second>1){
                if(2*(it->first) >=l && 2*(it->first)<=r){
                    ans+= (it->second * (it->second -1 ))/2;
                }
            }
        }
        cout << ans << endl;
    }
}
