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
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli t,n,i,num,y,d,k;
    cin >> t;
    while(t--){
        cin >> n;
        d=k=0;
        string s;
        cin >> s;
        map<pair<lli,lli>,lli>mp;
        for(i=0;i<n;i++){   
            if(s[i]=='D'){
                d++;
            }
            else{
                k++;
            }
            mp[{d/gcd(d,k),k/gcd(d,k)}]++;
            cout <<mp[{d/gcd(d,k),k/gcd(d,k)}]<< " ";
        }
        cout << endl;
    }
}
