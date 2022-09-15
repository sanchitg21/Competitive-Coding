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
	lli n,m,t,i,j,k,count=0;;
	cin >> n;
    vll a(n+1);
    for(i=0;i<=n;i++){
        cin >> a[i];
    }
    vll b(n);
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    for(i=0;i<n;i++){
        if(b[i]>=a[i]){
            b[i]=b[i]-a[i];
            count+=a[i];
            a[i]=0;
        }
        else{
            a[i]=a[i]-b[i];
            count+=b[i];
            b[i]=0;
        }
        if(b[i]>=a[i+1]){
            b[i]=b[i]-a[i+1];
            count+=a[i+1];
            a[i+1]=0;
        }
        else{
            a[i+1]=a[i+1]-b[i];
            count+=b[i];
        }
    }
    cout << count << endl;
}
