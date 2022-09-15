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
	lli n,m,t,i,j,k,s1,s3,mx;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    lli low=0,high=n-1;
    s1=0;
    s3=0;
    mx=0;
    while(low<=high){
        if(s1+v[low]<=s3+v[high]){
            s1=s1+v[low];
            low++;
        }
        else if(s1+v[low]>s3+v[high]){
            s3=s3+v[high];
            high--;
        }
        if(s1==s3){
            mx=max(mx,s1);
        }
    }
    cout << mx << endl;
}
