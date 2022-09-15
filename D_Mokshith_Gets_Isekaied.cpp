//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    string s;
    cin >> s;
    mpc mp;
    for(i=0;i<n;i++){
        mp[s[i]]++;
    }
    if(mp['W']==0 || mp['B']==0){
        cout << 0 << endl;
        return 0;
    }
    if(mp['W']%2==1 && mp['B']%2==1){
        cout << -1 << endl;
        return 0;
    }
    // convert all to W
    vll ans;
    lli count=0;
    if(mp['W']%2==1 || mp['B']%2==0){
        for(i=0;i+1<n;i++){
            if(s[i]=='B'){
                count++;
                ans.pb(i+1);
                if(s[i+1]=='B'){
                    s[i+1]='W';    
                }
                else{
                    s[i+1]='B';
                }
            }
        }
    }
    else{
        for(i=0;i+1<n;i++){
            if(s[i]=='W'){
                count++;
                ans.pb(i+1);
                if(s[i+1]=='W'){
                    s[i+1]='B';    
                }
                else{
                    s[i+1]='W';
                }
            }
        }
    }
    cout << count << endl;
    for(i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
