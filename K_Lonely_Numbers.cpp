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
	lli n,m,t,i,j,k,flag,l,r;
	cin >> t;
    vll v;
    n=1000500;
    for(i=2;i<n;i++){
        flag=0;
        for(j=2;j*j<=i;j++){
            if((i%j)==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            v.pb(i);
        }
    }
	while(t--){
		cin >> n;
        r= lower_bound(v.begin(),v.end(),n)-v.begin();
        l= lower_bound(v.begin(),v.end(),sqrt(n))-v.begin();
        if(v[r]!=n){
            r--;
        }
        if(v[l]==sqrt(n)){
            l++;
        }
        cout << r-l+2 << endl;
	}   
}
