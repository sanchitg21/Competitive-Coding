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
const int mod=1e9;
const int M=5e5+5;
const int INF = 2e9;

vector<vll>matrixmultiply(vector<vll> a,vector<vll> b,lli n){
    vector<vll> c(n,vll(n,0));
    for(lli i=0;i<n;i++){
        for(lli j=0;j<n;j++){
            for(lli k=0;k<n;k++){
                c[i][k] = (c[i][k]+ (a[i][j]*b[j][k]))%mod;
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
	lli n,m,t,i,j,k,power;
	cin >> t;
	while(t--){
		cin >> k;
        vector<vll>v(k,vll(k,0));
        vector<vll>b(k,vll(k,0));
        for(i=0;i<k;i++){
            cin >> b[i][0];
        }
        for(i=k-1;i>=0;i--){
            cin >> v[k-1][i];
        }
        cin >> power;
        //create v
        for(i=0;i+1<k;i++){
            v[i][i+1]=1;
        }
        vector<vll>ans=matrix(v,k,power-1);
        vector<vll>c=matrixmultiply(ans,b,k);
        cout << c[0][0] << endl;
	}
}
