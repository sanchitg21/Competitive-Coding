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
    lli t,n,i,avg,sum,ans;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        sum=0;
        ans=0;
        for(i=0;i<n;i++){
            cin >> v[i];
            sum=sum+v[i];
        }
        sa(v);
        avg=sum/n;
        if(avg!=sum*1.0/n){
            cout << -1 << endl;
            continue;
        }
        for(i=n-1;i>=0;i--){
            if(v[i]>avg){
                ans++;
            }
        }
        cout << ans << endl;
    }
}