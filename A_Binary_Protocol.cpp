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
    cin >> n;
    string s;
    cin >> s;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            c++;
        }
        if(s[i]=='0' && c!=0 ){
            cout << c;
            c=0;
            continue;
        }
        if(s[i]=='0' && c==0){
            cout << 0 ;
        }
    }
    cout << c << endl;
}
