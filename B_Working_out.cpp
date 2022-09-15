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

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,sum=0;
	cin >> n >> m;
    vector<vll>v(n,vll(m));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    vector<vll>boy_starttoij(n,vll(m));
    boy_starttoij[0][0]=v[0][0];
    for(i=1;i<n;i++){
        boy_starttoij[i][0]=boy_starttoij[i-1][0]+v[i][0];
    }
    for(i=1;i<m;i++){
        boy_starttoij[0][i]=boy_starttoij[0][i-1]+v[0][i];
    }
    for(i=1;i<n;i++){
        for(j=1;j<m;j++){
            boy_starttoij[i][j]=v[i][j]+max(boy_starttoij[i-1][j],boy_starttoij[i][j-1]);
        }
    }
    vector<vll>boy_ijtoend(n,vll(m));
    boy_ijtoend[n-1][m-1]=v[n-1][m-1];
    for(i=n-2;i>=0;i--){
        boy_ijtoend[i][m-1]=boy_ijtoend[i+1][m-1]+v[i][m-1];
    }
    for(i=m-2;i>=0;i--){
        boy_ijtoend[n-1][i]=boy_ijtoend[n-1][i+1]+v[n-1][i];
    }
    for(i=n-2;i>=0;i--){
        for(j=m-2;j>=0;j--){
            boy_ijtoend[i][j]=v[i][j]+max(boy_ijtoend[i+1][j],boy_ijtoend[i][j+1]);
        }
    }
    vector<vll>girl_starttoij(n,vll(m));
    girl_starttoij[n-1][0]=v[n-1][0];
    for(i=n-2;i>=0;i--){
        girl_starttoij[i][0]=girl_starttoij[i+1][0]+v[i][0];
    }
    for(i=1;i<m;i++){
        girl_starttoij[n-1][i]=girl_starttoij[n-1][i-1]+v[n-1][i];
    }
    for(i=n-2;i>=0;i--){
        for(j=1;j<m;j++){
            girl_starttoij[i][j]=v[i][j]+max(girl_starttoij[i+1][j],girl_starttoij[i][j-1]);
        }
    }
    vector<vll>girl_ijtoend(n,vll(m));
    girl_ijtoend[0][m-1]=v[0][m-1];
    for(i=1;i<n;i++){
        girl_ijtoend[i][m-1]=girl_ijtoend[i-1][m-1]+v[i][m-1];
    }
    for(i=m-2;i>=0;i--){
        girl_ijtoend[0][i]=girl_ijtoend[0][i+1]+v[0][i];
    }
    for(i=1;i<n;i++){
        for(j=m-2;j>=0;j--){
            girl_ijtoend[i][j]=v[i][j]+max(girl_ijtoend[i-1][j],girl_ijtoend[i][j+1]);
        }
    }
    for(i=1;i+1<n;i++){
        for(j=1;j+1<m;j++){
            sum=max(sum,boy_starttoij[i-1][j]+boy_ijtoend[i+1][j]+girl_starttoij[i][j-1]+girl_ijtoend[i][j+1]);
            sum=max(sum,boy_starttoij[i][j-1]+boy_ijtoend[i][j+1]+girl_starttoij[i+1][j]+girl_ijtoend[i-1][j]);
        }
    }
    cout << sum << endl;
}
