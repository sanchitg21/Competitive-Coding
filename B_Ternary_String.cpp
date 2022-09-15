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
    lli i,n,t,flag,x_sum,y_sum,mn;
    cin >> t;
    while(t--){ 
        string s;
        cin >> s;
        n=s.length();
        lli l,h=3;
        map<char,int>mp;
        if(n<3){
            cout << 0 << endl;
            continue;
        }
        for(int i=0;i<3;i++){
            mp[s[i]]++;
        }
        if(mp.size()==3){
            cout << 3 << endl;
            continue;
        }
        lli mn=n+1;
        for(l=0;l<n-3;l++){
            while(h<n && mp.size()<3){ 
                mp[s[h]]++;
                h++;
                if(mp.size()==3){
                    mn=min(mn,h-l);
                    break;
                }
            }
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);   
            }  
            if(mp.size()==3){
                mn=min(mn,h-l-1);
            }
        }
        if(mn>n){
            cout << 0 << endl;
            continue;        
        } 
        cout << mn << endl;   
    }
}