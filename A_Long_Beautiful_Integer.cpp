//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define ll long long int
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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	ll n,m,i,j,k;
    cin>>n>>k;
    string s,t;
    cin>>s;
    t=s;
    for(ll i=k;i<n;i++)
    {
        s[i]=s[i-k];
    }   
    if(t<=s)
    {
        cout<<n<<"\n"<<s;
        return 0;
    }
    for(ll i=k-1;i>=0;i--)
    {
        if(t[i]!='9')
        {
            t[i]++;
            for(ll j=i+1;j<k;j++)
            {
                t[j]='0';
            }
            break;
        }
    }
    for(ll i=k;i<n;i++)
    {
        t[i]=t[i-k];
    }
    cout<<n<<"\n"<<t;
}