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
    lli i,n,t,flag,mn,mx,bindex,sindex;
    cin >> t;
    while(t--){
        flag=0;
        mn=51;
        mx=0;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i+1<n;i++){
            if(v[i]<v[i+1]){
                continue;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout << 0 << endl;
            continue;
        }   
        if(v[0]==1 || v[n-1]==n){
            cout << 1 << endl;
            continue;
        }
        if(v[0]==n && v[n-1]==1){
            cout << 3 << endl;
            continue;
        }
        cout << 2 << endl;
    }   
}
