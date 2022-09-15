//CODE BY Sanchit Gupta*
#define pb push_back
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
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,m;
	cin >> t;
	while(t--){
        cin >> n >> m;
        vector<string> v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vector<string> s(n-1);
        for(i=0;i<n-1;i++){
            cin >> s[i];
        }
        sa(v);
        sa(s);
        string ans;
        multiset<char> mp;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                mp.insert(v[j][i]);  
            }
            for(j=0;j<n-1;j++){
                mp.erase(mp.find(s[j][i]));
            }
            ans.pb(*mp.begin());
            mp.clear();
        }
        cout << ans << endl;
	}
}
