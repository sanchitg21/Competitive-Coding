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


vector<vll> matrixmultiply(vector<vll>a,vector<vll>b){
    vector<vll>c(2,vll(2,0));
    for(lli i=0;i<2;i++){
        for(lli j=0;j<2;j++){
            for(lli k=0;k<2;k++){
                c[i][k] = (c[i][k]+ (a[i][j]*b[j][k]))%mod;
            }
        }    
    }
    return c;
}

vector<vll> matrix(vector<vll>v,lli n){
    vector<vll>identity(2,vll(2,0));
    identity[0][0]=1;
    identity[1][1]=1;
    if(n==0){ 
        return identity;
    }
    vector<vll> ans=identity;
    if(n%2==1){
        ans=v;
    }
    vector<vll> t=matrix(v,n/2);
    return matrixmultiply(ans,matrixmultiply(t,t));
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    cin >> n;
    vector<vll>v(2,vll(2,0));
    v[1][0]=1;
    v[0][1]=1;
    v[1][1]=1;
    vector<vll> a=matrix(v,n);
    vector<vll>b(2,vll(1,0));
    b[1][0]=1;
    vector<vll>ans=matrixmultiply(a,b);
    cout << ans[0][0] << endl;
}
