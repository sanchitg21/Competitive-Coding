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
    lli i,n,sum=0,c=0;
    cin >> n;
    if(n==0){
        cout << 1 << endl;
        return 0;
    }
    if(n%4==1){
        cout << 8 << endl;
    }   
    else if(n%4==2){
        cout << 4 << endl;
    }   
    else if(n%4==3){
        cout << 2 << endl;
    }   
    else{
        cout << 6 << endl;
    }
}
