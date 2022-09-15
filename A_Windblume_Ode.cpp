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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,mx;

    //prime sieve
    vll prime(M,0);
    for(i=2;i<M;i++){
        if(prime[i]==1){
            continue;
        }
        k=2;
        while(i*k<M){
            prime[i*k]=1;
            k++;
        }
    }
	cin >> t;
	while(t--){
        lli sum=0;
        mx=0;
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            sum=sum+v[i];
        }
        if(prime[sum]==1){
            cout << v.size() << endl;
            for(i=1;i<=n;i++){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            lli index;
            cout << v.size()-1 << endl;
            for(i=0;i<n;i++){
                if(v[i]%2==1){
                    index=i;
                    break;
                }
            }
            for(i=1;i<=n;i++){
                if(i-1!=index){ 
                    cout << i << " ";
                }
            }
            cout << endl;
        }
	}
}
