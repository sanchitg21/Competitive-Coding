//CODE BY Sanchit Gupta
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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,count;
	cin >> t;
	while(t--){
        cin >> n >> k;
        vpl v(n);
        for(i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
        }
        lli mx=0;
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<n;j++){
                if(j==i){
                    continue;
                }
                if(abs(v[j].first-v[i].first) + abs(v[j].second-v[i].second) <=k){
                    count++;
                } 
            }
            mx=max(mx,count);
        }
        if(mx==n-1){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
	}
}
