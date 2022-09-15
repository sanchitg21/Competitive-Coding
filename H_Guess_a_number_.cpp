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
    lli i,n,t,k,x,l,r;
    cin >> n;
    string s;
    string y;
    l=-1e9-1;
    r=1e9+1;
    for(i=0;i<n;i++){ 
        cin >> s;
        cin >> x;
        cin >> y;
        if(s=="<=" && y=="Y" && r>=x){
            r=x;
        }
        if(s=="<" && y=="Y" && r>=x){
            r=x-1;
        }
        if(s==">=" && y=="Y" && l<=x){
            l=x;
        }
        if(s==">" && y=="Y" && l<=x){
            l=x+1;
        }
        if(s=="<=" && y=="N" && l<=x){
            l=x+1;
        }
        if(s=="<" && y=="N" && l<=x){
            l=x;
        }
        if(s==">=" && y=="N" && r>=x){
            r=x-1;
        }
        if(s==">" && y=="N" && r>=x){
            r=x;
        }
    }
    if(r<l){
        cout << "Impossible" << endl;
    }
    else if(r==l){
        cout << l << endl;
    }
    else{
        cout << l+1 << endl;
    }
    return 0;
}
