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
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,i,l,r,x;
	cin >> n >> l >> r >> x;
    vll arr(n);
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    lli total = (1<<n);
    lli count=0;
    for (int i = 1; i < total; i++){
        vll v;
        lli sum=0;
        for (int j = 0; j < n; j++){
            if (i & (1<<j)){ 
                v.pb(arr[j]);
                sum=sum+arr[j];
            }
        }
        sa(v);
        if(sum>=l && sum<=r && v[v.size()-1]-v[0]>=x){
            count++;
        }
    }
    cout << count << endl;
}
