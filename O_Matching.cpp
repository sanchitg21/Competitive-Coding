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
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,i,j;
  	cin >> n;
    lli input[n][n];
    vpl arr;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> input[i][j];
            if(input[i][j]){    
                arr.pb({i+1,j+1});
            }
        }
    }
    lli total = (1<<arr.size());
    lli count=0;
    for (int i = 1; i < total; i++){
        vpl v;
        for (int j = 0; j < arr.size(); j++){
            if (i & (1<<j)){ 
                v.pb(arr[j]);
            }
        }
        if(v.size()==n){ 
            mps mp,pm;
            for(int j=0;j<v.size();j++){
                mp[v[j].ff]++;
                pm[v[j].ss]++;
            }
            if(mp.size()==n && pm.size()==n){
                count=(count+1)%mod;
            }
        }
    }
    cout << count << endl;
}