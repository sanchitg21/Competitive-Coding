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
    lli t,n,i,j,sum,ans;
    cin >> t;
    while(t--){
        sum=0;
        cin >> i >> j;
        sum=sum + ((j)/1) - ((i)/1);
        sum=sum + ((j)/10) - ((i)/10);
        sum=sum + ((j)/100) - ((i)/100);
        sum=sum + ((j)/1000) - ((i)/1000) ;
        sum=sum + ((j)/10000) - ((i)/10000) ;
        sum=sum + ((j)/100000) - ((i)/100000);
        sum=sum + ((j)/1000000) - ((i)/1000000) ;
        sum=sum + ((j)/10000000) - ((i)/10000000);
        sum=sum + ((j)/100000000) - ((i)/100000000); 
        sum=sum + ((j)/1000000000) - ((i)/1000000000); 
        cout << sum << endl;
    }
}
