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
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

lli solve(lli mid, vll v){
    lli ans=0;
    for(lli i=0;i<v.size();i++){
        ans+= abs(mid-v[i]);
    }
    return ans;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k=0,mid;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sa(v);
    lli low=v[0];
    lli high=v[n-1];
    while(true){
        mid=(low+high)/2;
        // cout << low <<" " << high<< endl;
        if(solve(mid,v)<=solve(mid+1,v) && solve(mid,v)<=solve(mid-1,v)){
            break;
        }
        else if(high-low==1 && solve(high,v)<=solve(high+1,v) && solve(high,v)<=solve(high-1,v)){
            mid=high;
            break;
        }
        else if(solve(mid,v)<=solve(mid+1,v) && solve(mid,v)>=solve(mid-1,v)){
            high=mid;
        }
        else if(solve(mid,v)>=solve(mid+1,v) && solve(mid,v)<=solve(mid-1,v)){
            low=mid;
        }
    }
    cout << solve(mid,v) << endl;
}
