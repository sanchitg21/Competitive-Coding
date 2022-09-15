//CODE BY CONFUZED CODER
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
const int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,t,m,x,n,k,i,j,l,r,mn,ans,index;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vll v(n);
        vll sum(n-k+1,0);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<k;i++){
            sum[0]=sum[0]+v[i];
        }
        r=k;
        for(l=0;l+1<=n-k;l++){
            sum[l+1]=sum[l]+v[r]-v[l];
            r++;
        }
        mn=1e9;
        for(i=0;i<sum.size();i++){ 
            mn=min(mn,sum[i]);
        }
        ans=(mn*(mn+1))/2;
        for(i=0;i<sum.size();i++){
            if(sum[i]==mn){
                index=i;
                break;
            }
        }
        for(i=index;i<index+k;i++){
            if(v[i]==1){
                v[i]=0;
            }
        }
        for(i=0;i<n;i++){
            ans=ans+v[i];
        }
        cout << ans << endl;
    }
}
