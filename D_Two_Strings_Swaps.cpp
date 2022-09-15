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
	lli n,m,i,j,k;
	cin >> n;
    string s,t;
    cin >> s >> t;
    string a,b;
    a.resize(n);
    b.resize(n);
    j=0;
    for(i=0;i<n;i=i+2){
        a[i]=s[j];
        b[i]=t[j];
        if(i+1<n){ 
            a[i+1]=s[n-j-1];
            b[i+1]=t[n-j-1];
        }
        j++;
    }
    lli count=0;
    for(i=0;i<n;i=i+2){
        mpc mp;
        mp[a[i]]++;
        mp[b[i]]++;
        if(i+1<n){
            mp[a[i+1]]++;
            mp[b[i+1]]++;
            if(mp.size()==4){
                count+=2;
            }
            else if(mp[a[i]]==3 || mp[a[i+1]]==3 || mp[b[i]]==3 || mp[b[i+1]]==3){
                count++;
            }         
            else if(mp.size()==3){
                if(a[i]==b[i] || a[i+1]==b[i+1]){
                    count++;
                }
                else if(a[i]!=a[i+1]){
                    count++;
                }
                else{
                    count+=2;
                }
            }
            continue;
        }
        if(a[i]!=b[i]){
            count++;
        }
    }
    cout << count << endl;
}