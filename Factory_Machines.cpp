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
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

lli check(lli n,vll v){
    lli ans=0;
    for(lli i=0;i<v.size();i++){
        if(9223372036854775807 - ans< n/v[i]){
            return -1;
        }
        ans=ans+ n/v[i];
    }
    
    return ans;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k=0,mid;
	cin >> n >> m;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    lli low=0,high=1e18;
    while(low+1!=high){
        k++;
        mid=(low+high)/2;
        lli a=check(mid,v);
        
        if(a<=m && a>=0){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    while(check(low,v)==m){
        low--;
    }
    cout << low+1 << endl;
}