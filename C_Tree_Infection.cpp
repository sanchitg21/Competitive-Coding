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

lli ans=0;

void solve(vll& v){
    lli i;
    lli n=v.size();
    if(!n){
        return;
    }
    lli step=0;
    for(i=0;i<n;i++){
        if(v[i]==v[0]){
            step=i;
        }
        else{
            break;
        }
    }
    v[step]--;
    ans++;
    for(i=0;i<n;i++){
        v[i]--;
    }
    sort(v.rbegin(),v.rend());  
    for(i=0;i<n;i++){
        if(v[i]<=0){
            break;
        }
    }
    v.erase(v.begin()+i,v.end());
    solve(v);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k;
	cin >> t;
	while(t--){
        cin >> n;
        mps mp;
        vector<lli>s;
        for(i=0;i+1<n;i++){
            cin >> j;
            mp[j]++;
        }   
        for(auto it=mp.begin();it!=mp.end();++it){
            s.pb(it->ss);
        }
        s.pb(1);
        sort(s.rbegin(),s.rend());
        n=s.size();
        for(i=0;i<n;i++){
            s[i]=s[i]-(n-i);
            ans++;
        }
        sort(s.rbegin(),s.rend());
        for(i=0;i<n;i++){
            if(s[i]<=0){
                break;
            }
        }
        s.erase(s.begin()+i,s.end());

        solve(s);
        cout << ans << endl;
        ans=0;
	}
}
