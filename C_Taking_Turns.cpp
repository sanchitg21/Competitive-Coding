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
const int INF = INT_MAX;
set<string>ans;
string res;
string s;
string t;
void solve(lli n,lli step){
    if(n==0){
        ans.insert(res);
        return;
    }   
    if(step==1){
        res[n-1]=s[n-1];
        solve(n-1,2);
        solve(n-1,-1);
    }
    else if(step==-1){
        res[n-1]=t[n-1];
        solve(n-1,-2);
        solve(n-1,1);
    }
    else if(step==2){
        res[n-1]=s[n-1];
        solve(n-1,-1);
    }
    else{
        res[n-1]=t[n-1];
        solve(n-1,1);
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	cin >> n;
    cin >> s >> t;
    res.resize(n);
    solve(n,1);
    solve(n,-1);
    cout << ans.size() << endl;
    for(auto it=ans.begin();it!=ans.end();++it){
        cout << *it << endl;
    }
}