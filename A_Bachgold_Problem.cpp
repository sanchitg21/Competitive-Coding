#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,t,k,d,flag=0;
    cin >> t;
    if(t%2==0){
        cout << t/2 << endl;
        for(i=1;i<=t/2;i++){
            cout << 2 << " ";
        }
        cout << endl;
    }   
    else{
        cout << (t-3)/2 +1 << endl;
        for(i=1;i<=(t-3)/2;i++){
            cout << 2 << " ";
        }
        cout <<3 << endl;
    }
}
