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

vll v;
set<string>ans;
void solve(lli n,lli num){
    if(n==0){
        lli sum=0;
        lli flag=0;
        for(lli i=0;i<v.size();i++){
            sum=sum+v[i];
            if(sum<0){
                flag=1;
            }
        }
        if(!flag && sum==0){
            string s;
            s.resize(v.size());
            for(lli i=0;i<v.size();i++){
                if(v[i]==1){
                    s[i]='(';
                }
                else{
                    s[i]=')';
                }
            }
            ans.insert(s);
        }
        return;
    }
    v[n-1]=num;
    solve(n-1,1);
    solve(n-1,-1);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    v.resize(n);
    solve(n,-1);
    cout << ans.size() << endl;
    for(auto it=ans.begin();it!=ans.end();++it){
        cout << *it << endl;
    }
}
