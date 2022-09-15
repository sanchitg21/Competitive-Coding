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
	lli n,m,t,i,j,k,change;
	cin >> t;
	while(t--){
		cin >> n >> k;
        string s;
        cin >> s;
        vll v;
        vll index;
        lli total=0;
        for(i=0;i<n;i++){
            if(s[i]=='W'){
                total++;
                index.pb(i);
            }
        }
        for(i=1;i<index.size();i++){
            if(index[i]-index[i-1]-1!=0){ 
                v.pb(index[i]-index[i-1]-1);
            }
        }
        sa(v);
        lli sum=0;
        i=0;
        lli count=0;
        // for(i=0;i<v.size();i++){
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        while(i<v.size() && sum+v[i]<=k){
            sum=sum+v[i];
            count++;
            i++;
        }

        lli ans=(v.size()-count+1)  + 2*(min((total+k),n)-(v.size()-count+1));
        cout << max((lli)0,ans) << endl;


	}
}
