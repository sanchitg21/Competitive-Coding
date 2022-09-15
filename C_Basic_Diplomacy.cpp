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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,row;
	cin >> t;
	while(t--){
		cin >> n >> m;
        vector<vll>v(m);
        for(i=0;i<m;i++){
            cin >> row;
            v[i].resize(row);
            for(j=0;j<row;j++){
                cin >> v[i][j];
            }
            sa(v[i]);
        }
        vll ans;
        mps mp;
        for(i=0;i<m;i++){
            ans.pb(v[i][0]);
            mp[v[i][0]]++;
        }
        lli num,mx=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(mx<it->second){
                mx=it->second;
                num=it->first;
            }
        }
        if(mx<=ceil(m/2.0)){
            cout << "YES" << endl;
            for(i=0;i<m;i++){
                cout << ans[i] << " ";
            }
            cout << endl;
            continue;
        }
        for(i=0;i<m && mx!=ceil(m/2.0);i++){
            if(v[i][0]!=num){
                continue;
            }
            for(j=1;j<v[i].size();j++){
                ans[i]=v[i][j];
                mx--;
                break;
            }
        }
        if(mx!=ceil(m/2.0)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(i=0;i<m;i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
	}
}
