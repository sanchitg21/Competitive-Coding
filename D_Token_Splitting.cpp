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
map<string,int> mp;
string t;
string s;
void solve(lli n,lli next){
    if(n==0  && mp[string(t.begin()+n,t.begin()+next)]){
        ans.insert(t);
        return;
    }
    if(n==0){
        return;
    }
    if(mp[string(t.begin()+n,t.begin()+next)]){
        t.insert(t.begin()+n,'#');
        solve(n-1,n);
        t.erase(t.begin()+n);
    }
    solve(n-1,next);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	cin >> n;
    cin >> s;
    cin >> m;
    for(i=0;i<m;i++){
        string w;
        cin >> w;
        mp[w]=1;
    }
    if(n==1){
        if(mp[s]==1){
            cout << 1 << endl;
            cout << s << endl;
        }
        else{
            cout << 0 << endl;
        }
        return 0;
    }
    t=s;
    solve(n-1,n);
    cout << ans.size() << endl;
    for(auto it=ans.begin();it!=ans.end();++it){
        cout << *it << endl;
    }
}   
