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
	lli n,m,i,j,k,x,y,sum=0,mx;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
        sum=sum+v[i];
    }
    sa(v);
    cin >> m;
    while(m--){
        cin >> x >> y;
        mx=0;
        //binary search
        // 1) no. x 
        // 2) less than no. x 
        // 3) more than no. x
        auto j=lower_bound(v.begin(),v.end(),x);
        lli flag=0;
        if(j!=v.end()){
            mx=max(mx,y-(sum-v[j-v.begin()]));
            flag=1;
        }
        if(j==v.begin()){
            cout << mx << endl;
            continue;
        }
        j--;
        if(flag==0){
            mx=max(mx,(x-v[j-v.begin()])+max((lli)0,y-(sum-v[j-v.begin()])));
        }
        else{
            mx=min(mx,(x-v[j-v.begin()])+max((lli)0,y-(sum-v[j-v.begin()])));
        }
        cout << mx << endl;
    }
}
