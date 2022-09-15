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
    lli i,n,sum=0,c=0;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    int low,high=1;
    sum=v[0];
    for(low=0;low<n;low++){
        while(high<n){
            sum+=v[high];
            high++;
            if(sum!=0){
                c++;
            }
            if(sum==0){
                break;
            }
        }
        sum=sum-v[low];
        if(sum!=0){
            c++;
        }
    }    
    c=c+n-1;   
}
