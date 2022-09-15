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
	cin >> t;
	while(t--){
		cin >> n >> k;
        string s;
        cin >> s;
        mpc mp;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        lli count=0;
        lli head=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            count = count + (it->ss)%2;
        }
        lli total = n-count;
        lli x= total/k;
        x= (x/2)*2;
        lli y= x+2;
        lli num= (k*y-total)/(y-x);
        // cout << num << endl;
        cout << x+((count+(k-num)>=num)?1:0) << endl;
	}
}
