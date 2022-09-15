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
	lli n,t,i,j,k,ans;
	cin >> t;
	while(t--){
        ans=0;
        cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<n;){
            if(is_sorted(v.begin(),v.end())){
                break;
            }
            while(i<n && v[i]<=k){
                i++;
            }
            if(i==n){
                break;
            }
            swap(v[i],k);
            ans++;
        }
        if(is_sorted(v.begin(),v.end())){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
	}
}
