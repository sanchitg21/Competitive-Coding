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
	lli n,t,i,j,a,b,c,d;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(i=0;i+1<n;i++){
            if(v[i]!=v[i+1]){
                a=i+1;
                c=v[i];
                b=i+2;
                d=v[i+1];
                break;
            }
        }
        for(i=0;i<n;i++){
            if(v[i]!=c){
                cout << a << " " << i+1 << endl;
            }
            else if(v[i]==c && i+1!=a){
                cout << b << " " << i+1 << endl;
            }
        }
    }
}
