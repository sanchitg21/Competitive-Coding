//CODE BY Sanchit Gupta
#define pb push_back
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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b,c;
	cin >> n;
    if(n==1){
        cout << "NO" << endl;
        return 0;
    }
    n=2*n;
    for(i=1;i<=sqrt(n);i++){
        a=(n-i*i-i);
        b=sqrt(a);
        c=b+1;
        if(b==0){
            continue;
        }
        if(a==b*c || a==b*(b-1)){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
