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
    int n,i,j,fir,sec=-1;
    cin >> n;
    vpl v(n);
    for(i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sa(v);
    fir=v[0].second;
    for(i=1;i<n;i++){
        if(v[i].first <= fir && v[i].first > sec){
            sec=v[i].second;
        }

        else if(v[i].first > fir && v[i].first<=sec){
            fir=v[i].second;
        }
        else if(v[i].first <= fir && v[i].first <= sec){
            cout << "NO" << endl;
            return 0;
        }
        else if(v[i].first > fir && v[i].first > sec){
            fir=v[i].second;
        }
    }
    cout << "YES" << endl;
}
