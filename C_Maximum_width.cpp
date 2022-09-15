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
	lli n,m,i,j,k,mx=0;
	cin >> n >> m;
    string s;
    string t;
    cin >> s >> t;
    vll left(m);
    vll right(m);
    lli low=0,high=0;
    while(high<m){
        if(s[low]==t[high]){
            left[high]=low;
            high++;
        }
        low++;
    }
    // for(i=0;i<m;i++){
    //     cout << left[i] << " ";
    // }
    // cout << endl;

    high=m-1;
    low=n-1;
    while(high>=0){
        if(s[low]==t[high]){
            right[high]=low;
            high--;
        }
        low--;
    }
    // for(i=0;i<m;i++){
    //     cout << right[i] << " ";
    // }
    // cout << endl;

    for(i=1;i<m;i++){
        mx=max(mx,right[i]-left[i-1]);
    }
    cout << mx << endl;
}
