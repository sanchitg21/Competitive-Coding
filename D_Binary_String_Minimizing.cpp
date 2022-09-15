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
		cin >> n >> k;
        string s;
        cin >> s;
        vll v;
        lli count=0;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                v.pb(max((lli)0,count-k));
                k=k-count;
                if(k<0){
                    k=0;
                }
            }
            else{
                count++;
            }
        }
        string ans;
        ans.resize(n);
        for(i=0;i<v.size();i++){
            ans[i+v[i]]='0';
        }
        for(i=0;i<n;i++){
            if(ans[i]!='0'){ 
                ans[i]='1';
            }
        }
        cout << ans << endl;
	}
}
