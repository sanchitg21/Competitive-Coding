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
    lli n,k,x,t,i,j,sum,c,d,check;
    cin >> n >> k >> x;
    vll v(n);
    vll s;
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sa(v);
    c=d=0;
    for(i=1;i<n;i++){
        if(v[i]-v[i-1]>x){
            
            c++;
            check=(v[i]-v[i-1])/x;
            if(check==(v[i]-v[i-1])*1.0/x){
                s.pb((v[i]-v[i-1])/x -1); 
                continue;   
            }
            s.pb((v[i]-v[i-1])/x);
        }
    }
    sa(s);
    c=c+1;
    sum=0;
    if(k==0){
        cout << c << endl;
        return 0;
    }
    for(i=0;i<s.size();i++){
        sum=sum+ s[i];
        if(sum<=k){
            c--;
        }
        else{
            break;
        }
    }
    cout << c << endl;
}