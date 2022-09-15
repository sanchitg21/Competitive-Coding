//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

bool solve(bool dir,string left,string right,int curr,int water,int k){
    int n = left.size();
    if(curr < water){
        return false;
    }
    if(curr >= n){
        return true;
    }
    if(dir==0){
        if(left[curr]=='X' || left[curr]=='V'){
            return false;
        }
        left[curr]='V';
        if(curr+k>=n){
            return true;
        }
        if(solve(0,left,right,curr+1,water+1,k)){
            return true;
        }
        else if(solve(1,left,right,curr+k,water+1,k)){
            return true;
        }
        else if(solve(0,left,right,curr-1,water+1,k)){
            return true;
        }
    }
    else{
        if(right[curr]=='X' || right[curr]=='V'){
            return false;
        }
        right[curr]='V';
        if(curr+k >= n){
            return true;
        }
        if(solve(1,left,right,curr+1,water+1,k)){
            return true;
        }
        else if(solve(1,left,right,curr-1,water+1,k)){
            return true;
        }
        else if(solve(0,left,right,curr+k,water+1,k)){
            return true;
        }
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> k;
    string a,b;
    cin >> a >> b;
    if(solve(0,a,b,0,0,k)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}