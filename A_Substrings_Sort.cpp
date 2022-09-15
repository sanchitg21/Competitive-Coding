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
    lli i,n,t,flag=0;
    cin >> t;
    if(t==1){
        cout << "YES" << endl;
    }
    vector<pair<lli,string>> v;
    while(t--){ 
        string s;
        cin >> s;
        v.pb({s.length(),s});
    }
    sort(v.begin(),v.end());
    for(int i=0;i+1<v.size();i++){
        flag=0;
        for(int j=0;j<v[i+1].first-v[i].first+1;j++){
            if(v[i+1].second.substr(j,v[i].first)==v[i].second){ //v[i].second in v[i+1].second
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout << "NO" << endl;
            return 0;
        }
    }
    if(flag==1){
        cout << "YES" << endl;
    }
    for(int i=0;i<v.size();i++){
        cout << v[i].second << endl;
    }
}