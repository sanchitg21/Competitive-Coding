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
    lli i,n,a_sum,b_sum,lead;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    if(v.size()==1){
        a_sum=1;
        b_sum=0;
    }
    else{
        a_sum=1;
        b_sum=1;
    }
    int l=0,r=n-1;
    lead= v[r]-v[l];
    while(l<r){
        if(lead>0){
            l++;
            if(r==l){
                break;
            }
            a_sum++;
            lead=lead-v[l];
            continue;
        }
        if(lead<0){
            r--;
            if(r==l){
                break;
            }
            b_sum++;
            lead=lead + v[r];
        }
        if(lead==0){
            l++;
            r--;
            if(l==r){
                a_sum++;
                break;
            }
            if(l>r){
                break;
            }
            a_sum++;
            b_sum++;
            lead= v[r] - v[l];
        }
    }
    cout << a_sum << " " << b_sum << endl;
}