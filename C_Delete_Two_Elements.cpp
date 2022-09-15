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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        lli sum=0;
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            sum=sum+v[i];
            mp[v[i]]++;
        }
        double total= ((db)sum/n)*2;
        vll s;
        for(auto it=mp.begin();it!=mp.end();++it){
            s.pb(it->first);
        }
        i=0;
        j=s.size()-1;
        lli ans=0;
        while(i<j){
            if(s[i]+s[j]==total){
                ans=ans+mp[s[i]]*mp[s[j]];
                i++;
                j--;
            }   
            else if(s[i]+s[j]<total){
                i++;
            }
            else{
                j--;
            }
        }
        if(2*s[i]==total){
            ans=ans+mp[s[i]]*(mp[s[i]]-1)/2;
        }
        cout << ans << endl;
	}
}
