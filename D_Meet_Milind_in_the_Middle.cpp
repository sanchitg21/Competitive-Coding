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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	t=1;
	while(t--){
		cin >> n;
        k=n*(n-1)/2;
        if(k%2==0){
            k=k/2;
        }
        else{
            k=k/2+1;
        }
	}
    //binary search
    lli low=1,high=n+1;
    while(low+1<high){
        lli mid=(low+high)/2;
        if(n*mid- mid*(mid+1)/2 >= k){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    lli mid=(low+high)/2;
    if(n*mid- mid*(mid+1)/2 >= k){ 
        cout << mid << endl;
    }
    else{
        cout << mid+1 << endl;
    }
}
