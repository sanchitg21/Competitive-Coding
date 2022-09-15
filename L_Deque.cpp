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

vll v;
lli X[3001][3001];
lli Y[3001][3001];

lli solve(lli i, lli j, lli step){
    if(i>j){
        return 0;
    }
    if(Y[i][j]!=0){
        return Y[i][j];
    }
    if(step==0){
        return Y[i][j]=min(solve(i+1,j,1),solve(i,j-1,1));
    }
    return Y[i][j]=max(v[i]+solve(i+1,j,0),v[j]+solve(i,j-1,0));
}
lli Solve(lli i, lli j, lli step){
    if(i>j){
        return 0;
    }
    if(X[i][j]!=0){
        return X[i][j];
    }
    if(step==0){
        return X[i][j]=max(v[i]+Solve(i+1,j,1),v[j]+Solve(i,j-1,1));
    }
    return X[i][j]=min(Solve(i+1,j,0),Solve(i,j-1,0));    
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    v=vll(n+1);
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    solve(1,n,0);
    Solve(1,n,0);
    cout << X[1][n]-Y[1][n] << endl;
}
