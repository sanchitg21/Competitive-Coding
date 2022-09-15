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
        // 2 digits from back
		// 1 digit from front
		string s,ans;
		cin >> s;
		n=s.length();
		if(n==1){
			cout << s << endl;
			continue;
		}
		lli flag=0;
		for(i=n-2;i>=0;i--){
			lli num=s[i]-'0' + s[i+1]-'0';
			if(num>9){
				ans= string(s.begin(),s.begin()+i);
				char c=(num/10+'0');
				ans=ans+c;
				c=(num%10+'0');
				ans=ans+c;
				ans=ans+string(s.begin()+i+2,s.end());
				cout << ans << endl;
				flag=1;
				break;
			}
		}
		if(flag){
			continue;
		}
		lli num=s[0]-'0' + s[1]-'0';
		char c=(num +'0');
		ans=c;
		ans=ans+string(s.begin()+2,s.end());
		cout << ans << endl;
	
	}
}
