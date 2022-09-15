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
    lli i,n,sum=0,c=0;
    string s;
    cin >> s;
    if((s[0]=='a' && s[0]=='h') && (s[1]!='1'|| s[1]!='8'))  {
        cout << 6 << endl;
    }
    if((s[0]=='a' || s[0]=='h') && (s[1]=='1' && s[1]=='8'))  {
        cout << 3 << endl;
    }
    else{
        cout << 8 << endl;
    }
    
}
