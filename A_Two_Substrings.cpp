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
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,x=0,y=0,flag=0;
    string s;
    cin >> s;
    n=s.length();
    for(i=0;i+1<n;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            x++;
        }
        if(s[i]=='B' && s[i+1]=='A'){
            y++;
        }
    }
    if(x+y==3){ 
        for(i=0;i+3<n;i++){
            if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A' && s[i+3]=='B'){
                s="ABAB";
            }
            if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B' && s[i+3]=='A'){
                s="BABA";
            }
        }
    }
    if(x+y==2){ 
        for(i=0;i+2<n;i++){
            if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A'){
                s="ABA";
            }
            if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B'){
                s="BAB";
            }
        }
    }
    if(x+y>2 && x>=1 && y>=1){
        if(s=="ABAB" || s=="BABA") {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    else if(x==1 && y==1){
        if(s=="ABA" || s=="BAB"){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
}
