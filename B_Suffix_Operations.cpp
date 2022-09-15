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
	lli n,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        lli sum=0;
        vll ans;
        if(n>=2){ 
            ans.pb(abs(v[0]-v[1]));
            ans.pb(abs(v[n-1]-v[n-2]));
            for(i=1;i+1<n;i++){
                if(v[i]<v[i+1] && v[i]<v[i-1]){
                    if(v[i-1]>=v[i+1]){
                        ans.pb(2*(v[i+1]-v[i])); //
                    }
                    else{
                        ans.pb(2*(v[i-1]-v[i])); //
                    }
                }
                else if(v[i]>v[i+1] && v[i]>v[i-1]){
                    if(v[i-1]>=v[i+1]){
                        ans.pb(2*(v[i]-v[i-1])); //
                    }
                    else{
                        ans.pb(2*(v[i]-v[i+1])); //
                    }
                }
            }
        }
        lli mx=0;
        for(i=0;i<ans.size();i++){
            mx=max(mx,ans[i]);
        }
        for(i=n-2;i>=0;i--){
            sum=sum+abs(v[i]-v[i+1]);
        }
        cout << sum-mx << endl;
	}
}
