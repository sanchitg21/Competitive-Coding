//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<double>
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

vector<vll>matrixmultiply(vector<vll> a,vector<vll> b,lli n){
    vector<vll> c(n,vll(n,0));
    for(lli i=0;i<n;i++){
        for(lli j=0;j<n;j++){
            for(lli k=0;k<n;k++){
                c[i][k] = (c[i][k]+ (a[i][j]*b[j][k]));
            }
        }
    }
    return c;
}

vector<vll>matrix(vector<vll>v,lli n,lli power){
    vector<vll>identity(n,vll(n,0));
    for(lli i=0;i<n;i++){
        identity[i][i]=1;
    }
    if(power==0){
        return identity;
    }
    vector<vll> ans=identity;
    if(power%2==1){
        ans=v;
    }
    vector<vll> t=matrix(v,n,power/2);
    return matrixmultiply(ans,matrixmultiply(t,t,n),n);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,power;
    db p;
    n=2;
	cin >> power >> p;
    vector<vll>v(n,vll(n,0));
    v[0][0]=1-p;
    v[0][1]=p;
    v[1][0]=p;
    v[1][1]=1-p;
    vector<vll>ans=matrix(v,n,power);
    cout << fixed << setprecision(10) << ans[0][0] <<endl;
}
