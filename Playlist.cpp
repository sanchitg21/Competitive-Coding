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
	lli n,m,t,i,j,k,low,high=0,mx=0,flag=0;
	cin >> n;
    vll v(n);
    mps mp;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(low=0;low<n;low++){
        while(flag==0 && high<n){
            mp[v[high]]++;
            high++;
            if(mp[v[high-1]]>1){
                flag=1;
                break;
            }
            else{
                mx=max(mx,(lli)mp.size());
            }
        }   
        mp[v[low]]--;
        if(mp[v[high-1]]==1){
            flag=0;
        }
        if(mp[v[low]]==0){
            mp.erase(v[low]);
        }
        mx=max(mx,(lli)mp.size());
    }
    cout << mx << endl;
}
