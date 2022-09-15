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
		cin >> n;
        vector<vll> v(n,vll(3,0));
        lli mn=INF,mx=0,cost,a,b,c=INF;
        mps mp;
        for(i=0;i<n;i++){
            for(j=0;j<3;j++){
                cin >> v[i][j];
            }
            a=mn;
            b=mx;
            mn=min(mn,v[i][0]);
            mx=max(mx,v[i][1]);
            if(a!=mn && b!=mx){
                mp[v[i][0]]=v[i][2];
                mp[v[i][1]]=v[i][2];
                cout << v[i][2] << endl;
                continue;
            }
            else if(a!=mn){
                mp[v[i][0]]=v[i][2];
                mp[v[i][1]]=min(mp[v[i][1]],v[i][2]);
                if(v[i][1]==mx){
                    cout << v[i][2] << endl;
                }
                else{
                    cout << v[i][2]+mp[mx] << endl;
                }
            }
            else if(b!=mx){
                mp[v[i][0]]=min(mp[v[i][0]],v[i][2]);
                mp[v[i][1]]=v[i][2];
                if(v[i][0]==mn){
                    cout << v[i][2] << endl;
                }
                else{
                    cout << v[i][2]+mp[mn] << endl;
                }
            }
            else{
                mp[v[i][0]]=min(mp[v[i][0]],v[i][2]);
                mp[v[i][1]]=min(mp[v[i][1]],v[i][2]);
                cout << c << endl;
            }
        }
	}
}
