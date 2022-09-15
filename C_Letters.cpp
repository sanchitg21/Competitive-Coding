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
    lli t,n,m,i,j;
    cin >> n >> m;
    vll v(n+1);
    vll s(m);
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    for(i=0;i<m;i++){
        cin >> s[i];
    }
    v[0]=0;
    for(i=1;i<=n;i++){
        v[i]=v[i]+v[i-1];
    }  
    lli first,second=0; //two pointer technique
    for(first=1;first<=n;first++){
        while(second<m){
            if(v[first]>=s[second]){
                cout << first << " " << s[second]-v[first-1] << endl;
                second++;
            }
            else{
                break;
            }
        }
    }
    
}