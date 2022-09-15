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
const int INF = INT_MAX;

bool solve(lli a,vll &v, lli x,lli y){
    lli sum=0;
    for(lli i=0;i<v.size();i++){
        if(v[i]-a*y>0){
            sum=sum+ceil((db)(v[i]-a*y)/(x-y));
        }
    }
    if(sum<=a){
        return true;
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,x,y;
	cin >> n;
    cin >> x >> y;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sa(v);
    lli low=1;
    lli high= v[n-1]/y;
    while(low<high){
        lli mid=(low+high)/2;
        if(solve(mid,v,x,y)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout << low << endl;
}
