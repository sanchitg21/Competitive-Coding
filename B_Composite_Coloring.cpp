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
    lli i,n,t,j;
    lli flag=0;
    vll primes={2,3,5,7,11,13,17,19,23,29,31};
    cin >> t;
    while(t--){
        cin >> n;
        vpl v(n);
        for(i=0;i<n;i++){
            cin >> v[i].first;
        }
        map<int,int>mp;
        set<int>s;
        set<int>::iterator it;
        for(i=0;i<v.size();i++){
            for(j=0;j<primes.size();j++){
                if(v[i].first%primes[j]==0){
                    mp[primes[j]]++;
                    v[i].second=j+1;
                    s.insert(j+1);
                    break;
                }
            }
        }
        int y=1;
        for(it=s.begin();it!=s.end();it++){
            if(*it!=y){
                for(i=0;i<v.size();i++){
                    if(v[i].second==*it){
                        v[i].second=y;
                    }
                }
            }
            y++;
        }
        cout << mp.size() << endl;
        for(i=0;i<v.size();i++){
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}