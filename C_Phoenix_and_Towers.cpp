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
    lli i,t,n,m,x,y;
    cin >> t;
    while(t--){
        cin >> n >> m >> x;
        vll v(n);
        vpl s;
        for(i=0;i<n;i++){
            cin >> v[i];
            s.pb({v[i],i}); 
        }
        cout << "YES" << endl;
        sa(s);
        vll a(n);
        y=0;
        for(i=0;i<n;i++){
            y++;
            a[s[i].second]=y; 
            if(y==m){
                y=0;
            }
        }
        for(i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
