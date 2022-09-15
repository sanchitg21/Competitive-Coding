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
    lli i,n,k1,k2,t,w,b,white,black;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> n >> k1 >> k2 >> w >> b;
        white= k1+k2;
        black= 2*n - white;
        if(white>= w*2 && black>= b*2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
