//CODE BY Sanchit Gupta :)
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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

struct cmp{ 
bool operator()(const pair<lli,lli> &a,const pair<lli,lli> &b){
    if(a.ss - a.ff +1 < b.ss - b.ff +1){
        return false;
    }
    else if(a.ss - a.ff +1 > b.ss - b.ff +1){
        return true;
    }
    return a.ff < b.ff;
};
};
set<pair<lli,lli>,cmp> v;
void solve(lli low,lli high,lli n){
    lli mid=(low+high)/2;
    if(low==high){
        v.insert({low,high});
        return;
    }
    if(high-low==1){
        v.insert({low,high});
        v.insert({high,high});
        return;
    }
    
    v.insert({low,high});
    solve(low,mid-1,mid-low);
    solve(mid+1,high,high-mid);
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,low,high,mid;
    cin >> t;
    while(t--){
        cin >> n;
        vll ans(n);
        low=0;
        high=n-1;
        solve(0,n-1,n);
        i=1;
        for(auto it=v.begin();it!=v.end();it++){
            ans[((*it).ff + (*it).ss)/2]=i++;   
        }
        for(i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        v.clear();
    }
}