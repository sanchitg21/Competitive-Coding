//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

bool solve(vll v,lli painters,lli time){
    lli temp=0;
    for(lli i=0;i<v.size();i++){
        if(v[i]>time){
            return false;
        }
        if(temp+v[i]>time){
            
            temp=v[i];
            painters--;
            if(painters==0){
                return false;
            }
        }
        else{
            temp=temp+v[i];
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,painters,mid,ans,mn;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    cin >> m;
    lli low=0,high=0;
    for(i=0;i<n;i++){
        low=max(low,v[i]);
        high=high+v[i];
    }
    mn=high;
    while(low<=high){
        mid=(low+high)/2; 
        ans=solve(v,m,mid);
        if(ans==1){
            mn=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout << low << endl;
}
