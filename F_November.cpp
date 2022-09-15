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
const int INF = 2e9;

lli solve(lli a,lli x,lli ans){
    lli n=(a-x+1);
    lli sum=0;
    if(n<=ans){
        sum+= ans*(ans+1)/2 - (ans-n)*(ans-n+1)/2;
    }
    else{
        sum+= ans*(ans+1)/2 + n-ans;
    }
    return sum;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b,x;
	cin >> a >> b >> x;
    // ans is between 1 and b. Apply binary search
    lli low = 1;
    lli high = b+1;
    while(low+1<high){
        lli mid = (high+low)/2;
        if(solve(a,x,mid)+solve(a,a-x+1,mid) <=b+mid){
            low = mid;
        }
        else{
            high =mid;
        }
    }
    cout << low << endl;
}
