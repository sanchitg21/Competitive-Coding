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
	lli n,m,t,i,j,k,a=0,b=0;
	cin >> n >> m;
    if(m==n){
        cout << -1 << endl;
        return 0;
    }
    vll v(n+1,0);
    for(i=2;i<=n && m>0;i++){
        v[i]=i;
        m--;
    }
    vll odd;
    vll even;
    for(i=2;i<=n;i++){
        if(v[i]==i){
            continue;
        }
        else{
            if(i%2==1){
                a++;
                odd.pb(i);
            }
            else{
                b++;
                even.pb(i);
            }
        }
    }
    if(a==b){
        v[1]=1;
        for(i=0;i<odd.size();i++){
            v[odd[i]]=even[i];
            v[even[i]]=odd[i];
        }
    }
    else{
        for(i=0;i<min(a,b);i++){
            v[odd[i]]=even[i];
            v[even[i]]=odd[i];
        }
        if(a>b){
            v[odd[a-1]]=1;
            v[1]=odd[a-1];
        }
        else{
            v[even[b-1]]=1;
            v[1]=even[b-1];
        }
    }
    for(i=1;i<=n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
