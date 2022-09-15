//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
    lli n,q,i,l,r,j,sum,a;
    cin >> n >> q;
    string s;
    cin >> s;
    map<char,lli>mp;
    for(i=0;i<n;i++){
        if(mp[s[i]]==0){
            mp[s[i]]=s[i]-96;
        }
    }  
    vll pre(n);
    pre[0]=mp[s[0]];
    for(i=1;i<n;i++){
        pre[i]=pre[i-1]+mp[s[i]];
    }
    for(i=0;i<q;i++){
        sum=0;
        cin >> l >> r;
        if(l-2>=0){ 
            sum=sum+ pre[r-1]-pre[l-2];
        }
        else{
            sum=sum+ pre[r-1];
        }
        cout << sum << endl;
    } 
}