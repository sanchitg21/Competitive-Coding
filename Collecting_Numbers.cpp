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
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    mps mp;
    vpl ans;
    for(i=0;i<n;i++){
        mp[v[i]]=1;
        if(mp[v[i]-1]!=0){
            ans.pb({v[i]-1,v[i]});
        }
        else{
            ans.pb({v[i],v[i]});
        }
    }
    sa(ans);
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    lli count=0;
    for(i=1;i<ans.size();i++){
        if(ans[i].ff!=ans[i-1].ss){
            count++;
        }
    }
    
    if(ans[0].ff == ans[0].ss && ans[0].ss !=ans[1].ff){
        count++;
    }
    if(count==0){
        cout << 1 << endl;
    }
    else{ 
        cout << count << endl;
    }
}
