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
    lli i,n,k,c=0,sum=0;
    cin >> n >> k;
    vll a(n);
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    vll b(n);
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    vll v(n);
    for(i=0;i<n;i++){
        v[i]=b[i]-a[i];
    }
    for(i=0;i<n;i++){
        if(v[i]>=0){
            c++;
        }
    }
    if(c>=k){
        for(i=0;i<n;i++){ 
            if(v[i]>=0){ 
                sum+= a[i];
            }
            if(v[i]<0){
                sum+= b[i];
            }
        }
    }
    else{
        vpl ans;
        for(i=0;i<n;i++){ 
            ans.pb({v[i],i});
        }
        sort(ans.rbegin(),ans.rend());
        for(i=0;i<k;i++){
            sum+= a[ans[i].second];
        }
        for(i=k;i<n;i++){
            sum+= b[ans[i].second];
        }
    }
    cout << sum << endl;
}