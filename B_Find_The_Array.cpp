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
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vll a;
        for(i=0;i<n;i++){
            k=v[i];
            count=0;
            while(k>0){
                count++;
                k=k/2;
            }
            count--;
            a.pb(count);
        }
        vll b;
        for(i=0;i<n;i++){
            if(abs((1<<a[i])-v[i]) >= abs((1<<(a[i]+1))-v[i])) {
                if((1<<(a[i]+1))>=1000000000){
                    b.pb((1<<a[i]));
                }
                else{ 
                    b.pb((1<<(a[i]+1)));    
                }
            }
            else{
                b.pb((1<<a[i]));
            }            
        }
        for(i=0;i<b.size();i++){
            cout << b[i] << " ";
        }
        cout << endl;
	}
}
