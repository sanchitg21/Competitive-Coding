#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int i,n,flag=0;
    cin >> n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    map<int,int>mp;
    map<int,int>::iterator it;
    for(i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if((it->second)>2){
            cout << "NO" << endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout << "YES" << endl;
    }
    else{
        exit(0);
    }
    sort(v.begin(),v.end());
    vector<int>dec;
    vector<int>inc;
    for(it=mp.begin();it!=mp.end();it++){
        if((it->second)==2){
            dec.push_back(it->first);
            inc.push_back(it->first);
        }
        else{
            inc.push_back(it->first);
        }
    }
    sort(inc.begin(),inc.end());
    sort(dec.begin(),dec.end(),greater<>());
    int y=inc.size();
    int z=dec.size();
    cout << y << endl;
    for(i=0;i<y;i++){
        cout << inc[i] << " ";
    }
    cout << endl;
    cout << z << endl;
    for(i=0;i<z;i++){
        cout << dec[i] << " ";
    }
    cout << endl;
}
