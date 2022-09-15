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
	lli n,m,t,i,j,k;
	t=1;
	while(t--){
		cin >> n;
        vll fact;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                fact.pb(i);
                if(i*i!=n){ 
                    fact.pb(n/i);
                }
            }
        }

        for(i=0;i<fact.size();i++){
            fact[i]= n/fact[i] + fact[i]*(n/fact[i])*(n/fact[i] -1)/2;
        }
        sa(fact);
        for(i=0;i<fact.size();i++){
            cout << fact[i] << " ";
        }
        cout << endl;

        
	}
}
