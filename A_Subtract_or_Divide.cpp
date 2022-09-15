//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
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
	lli n,t,i,j,step,flag;
    cin >> t;
    while(t--){
        cin >> n;
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        if(n==2){
            cout << 1 << endl;
            continue;
        }
        if(n==3){
            cout << 2 << endl;
            continue;
        }
        if(n%2==1){
            cout << 3 << endl;
        }
        else if(n%2==0){
            cout << 2 << endl;
        }
    }
}