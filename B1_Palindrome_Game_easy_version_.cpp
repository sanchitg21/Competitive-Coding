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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,l,k,c=0,r=0,mn=2000,flag,c0,c1;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        c0=c1=0;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                c0++;
            }
        }
        if(c0==0){
            cout << "DRAW" << endl;
            continue;
        }
        if(c0==1 || n%2==0 || s[n/2]=='1'){
            cout << "BOB" << endl;
            continue;
        }
        else{
            cout << "ALICE" << endl;
            continue;            
        }
    }
}