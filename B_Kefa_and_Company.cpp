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
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n,d,i,high,low,mx=0,sum=0;
    cin >> n >> d;
    vpl v(n);
    for(i=0;i<n;i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }
    sa(v);
    high=0;
    for(low=0;low<n;low++){
        while(high<n){
            if(v[high].first-v[low].first<d){
                sum=sum+v[high].second;
                high++;
            }
            else{
                break;
            }
        }
        mx=max(mx,sum);
        sum=sum-v[low].second;
    }
    cout << mx << endl;
}