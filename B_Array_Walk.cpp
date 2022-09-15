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
	lli n,m,t,i,j,k,z,sum,mx,count;
	cin >> t;
	while(t--){
		cin >> n >> k >> z;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        count=0;
        j=z;
        while(z>=0){ 
            sum=v[0];
            mx=0;
            for(i=1;i<=k-z*2;i++){
                sum=sum+v[i];
            }
            for(i=0;i<k-2*z;i++){
                mx=max(mx,v[i]+v[i+1]);
            }  
            count=max(count,z*mx+sum);
            z--;
        }
        z=j;
        k--;
        z--;
        while(z>=0){ 
            sum=v[0];
            mx=0;
            for(i=1;i<=k-z*2;i++){
                sum=sum+v[i];
            }
            for(i=0;i<k-2*z;i++){
                mx=max(mx,v[i]+v[i+1]);
            }  
            if(k-2*z-1>=0 && k-2*z-1<n){ 
                count=max(count,z*mx+sum+v[k-2*z-1]);
            }
            z--;
        }
        cout << count << endl;
	}
}
