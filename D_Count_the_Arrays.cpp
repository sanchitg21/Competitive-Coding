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
const int mod=998244353;
const int M=2e5+5;
const int INF = 2e9;

long long int minverse(long long int a,long long int n,long long int m){
    if(n==0){
        return 1;
    }
	long long int t=minverse(a,n/2,m);
    if(n%2==0){
        long long int ans = (t*t)%m;
        return ans;
    }
    else{
        long long int ans = (((a*t)%m)*t)%m;
        return ans;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	vll fact(M);
	fact[0]=1;
	for(i=1;i<=M;i++){
		fact[i]=(fact[i-1]*i)%mod;
	}
	cin >> n >> m;

    if(n==2){
        cout << 0 << endl;
        return 0;
    }
    lli cal=1;        
    cal=(cal*fact[m])%mod;
    cal=(cal*minverse(fact[n-1],mod-2,mod))%mod;
    cal=(cal*minverse(fact[m-n+1],mod-2,mod))%mod;   
    lli ans= cal*(n-2);
    for(i=1;i<=n-3;i++){
        ans=(ans*2)%mod;
    }
    cout << ans << endl;
}
