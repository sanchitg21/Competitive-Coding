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
const int M=1e5+1;
const lli INF = 1e18;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> k;
	vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    v.pb(0);
    sa(v);
    n=v.size();
    lli index=0;
    for(i=0;i<n;i++){
        if(v[i]==0){
            index=i;
            break;
        }
    }
    lli high=min(n-1,index+k),low=high-k;
    lli mn=INF;
    while(low>=max(index-k,(lli)0)){
        mn=min(abs(v[low])+2*abs(v[high]),mn);
        mn=min(mn,2*abs(v[low])+abs(v[high]));
        high--;
        low--;
    }
    cout << mn << endl;
}
