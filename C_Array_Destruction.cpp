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
            vll v(2*n);
            for(i=0;i<2*n;i++){
                  cin >> v[i];
            }
            sa(v);
            lli flag=0;
            vpl ans;
            lli X;
            for(i=0;i+1<2*n;i++){
                  lli x= v[i]+v[2*n-1];
                  X=x;
                  multiset<lli>s;
                  for(j=0;j<2*n;j++){
                        s.insert(v[j]);
                  }
                  for(j=0;j<n;j++){
                        auto it= s.end();
                        it--;
                        lli num=*it;
                        s.erase(it);
                        auto ip=s.upper_bound(x-num);
                        ip--;
                        if(*ip==x-num){
                              ans.pb({num,*ip});
                              x=max(num,*ip);
                              s.erase(ip);
                        }
                        else{
                              break;
                        }
                  }
                  if(s.size()==0){
                        flag=1;
                        break;
                  }
                  ans.clear();
            }
            if(flag){
                  cout << "YES" << endl;
                  cout << X << endl;
                  for(i=0;i<ans.size();i++){
                        cout << ans[i].ff << " " << ans[i].ss << endl; 
                  }
            }
            else{
                  cout << "NO" << endl;
            }
	}
}
