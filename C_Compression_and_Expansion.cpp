//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli a,b,t,k,n,i,j,MAX,low,high,mn,flag=0;
    cin >>t;
    while(t--){
        cin >>n;
        flag=0;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vll s;
        if(v[0]==1){
            s.pb(1);
        }
        cout << s[0] << endl;
        for(i=1;i<n;i++){
            flag=0;
            if(1+s[s.size()-1]==v[i]){
                s[s.size()-1]=v[i];
            }
            else{
                for(j=s.size()-1;j>=0;j--){ 
                    if(1+s[j]==v[i]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    s.pb(v[i]);
                }
                else{
                    s[j]=v[i];
                    s.erase(s.begin()+j+1,s.end());
                }
            }
            cout << s[0];
            for(j=1;j<s.size();j++){
                cout  << "." << s[j];
            }
            cout << endl;
        }
    }
}