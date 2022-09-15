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
    lli i,j,n,sum=0,c=0;
    cin >> n;
    vpl v(n);
    for(i=0;i<n;i++){
        cin >> v[i].first;
        v[i].second=i;        
    }
    vll s;
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        if(i==v[i].second){    // TO get min swaps
            continue;
        }
        s.pb(i);
        s.pb(v[i].second);
        for(j=i;j<n;j++){
            if(v[j].second==i){
                v[j].second=v[i].second;
            }
        }
        v[i].second=i;
    }
    cout << s.size()/2 << endl;
    int y=0;
    for(i=0;i<s.size();i++){
        cout << s[i] << " ";
        y++;
        if(y%2==0){
            cout << endl;
        }
    }
    return 0;
}
