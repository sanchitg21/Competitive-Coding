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
    lli i,t,n,flag,galf,x;
    cin >> t;
    while(t--){
        string s;
        x=0;
        cin >> s;
        flag=s.length()-1;
        galf=0;
        if(s.length()<=3){
            cout << "YES" << endl;
            continue;
        }
        for(i=0;i+1<s.length();i++){
            if(s[i]=='1' && s[i+1]=='1'){
                flag=i;
                break;
            }
        }
        for(i=0;i+1<s.length();i++){  
            if(s[i]=='0' && s[i+1]=='0'){
                galf=i;
            }
            if(galf-flag>=2){
                cout << "NO" << endl;
                x=1;
                break;
            }
        }
        if(x==0){
            cout << "YES" << endl;
        }
    }
}