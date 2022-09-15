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
        vll v(n+2);
        for(i=1;i<=n;i++){
            cin >> v[i];
        }
        v[0]=0;
        v[n+1]=0;
        n=v.size();
        lli ans=0;
        for(i=1;i<n;i++){
            if(v[i]-v[i-1]>0){ 
                ans=ans+ v[i]-v[i-1]; 
            }
        }
        
        for(i=1;i<n;i++){
            if(v[i-1]-v[i]>0){ 
                ans=ans+ v[i-1]-v[i]; 
            }
        }
        lli count=0;
        for(i=1;i+1<n;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                count+= min(v[i]-v[i-1],v[i]-v[i+1])*1;
            }
        }
        cout << ans-count << endl;
	}
}
