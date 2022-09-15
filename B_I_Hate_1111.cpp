#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,q,t,m,x,n,k,i,j,ans,sum,mn,index,c;
    cin >> t;
    while(t--){
        cin >> n;
        a= n%11;
        if(n>=a*111){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}