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
        vector<vll>v(n,vll(5,0));
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                cin >> v[i][j];
            }
        }
        lli flag=0;
        for(j=0;j<4;j++){
            for(i=j+1;i<5;i++){
                mps mp;
                for(k=0;k<n;k++){
                    if(v[k][j]==1){ 
                        mp[k]++;
                    }
                }
                if(mp.size()<n/2){
                    mp.clear();
                    break;
                }
                lli count=0;
                for(k=0;k<n;k++){
                    if(v[k][i]==1){
                        count++;
                        mp[k]++;
                    }
                }
                if(mp.size()==n && count>=n/2){
                    flag=1;
                }
                mp.clear();
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}
