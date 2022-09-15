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
	lli n,t,i,j,q,l,r,flag,galf;
    cin >> t;
    while(t--){
        cin >> n >> q;
        string s;
        cin >> s;
        while(q--){
            flag=0;
            cin >> l >> r;
            string a;
            a=s.substr(l-1,r-l+1);
            for(i=0;i<l-1;i++){
                if(s[i]==a[0]){
                    flag=1;
                }
            }
            for(i=r;i<n;i++){
                if(s[i]==a[a.length()-1]){
                    flag=1;
                }
            }
            if(flag){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}