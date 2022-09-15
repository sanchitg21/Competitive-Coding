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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,t,n,a,b,c,d,e;
    cin >> t;
    while(t--){
        cin >> a >> b;
        
        if(b==1){
            cout << "NO" << endl;
        }
        
        else{
            c=a*b;
            d=a;
            e=d+c;
            cout << "YES" << endl;
            cout << c << " " << d <<" " <<  e << endl;
        }
    }
}
