//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,b,g,total,ans;
    cin >> t;
    while(t--){
        ans=0;
        cin >> b >> g >> k;
        vll v(k);
        vll s(k);
        total= k*(k-1)/2;
        for(i=0;i<k;i++){
            cin >> v[i];
        }
        for(i=0;i<k;i++){
            cin >> s[i];
        }
        sa(v);
        sa(s);
        lli c=1,d=1;
        for(i=0;i+1<k;i++){
            if(v[i]==v[i+1]){
                c++;
            }
            else{
                ans=ans+ c*(c-1)/2;
                c=1;
            }

            if(s[i]==s[i+1]){
                d++;
            }
            else{
                ans=ans+ d*(d-1)/2;
                d=1;
            }
        }   
        if(v[k-1]==v[k-2]){
            ans=ans+ c*(c-1)/2;
        }
        if(s[k-1]==s[k-2]){
            ans=ans+ d*(d-1)/2;
        }
        cout << total - ans << endl;
    }
}