//CODE BY Sanchit Gupta
#define pb push_back
#define ub upper_bound
#define lb lower_bound
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
	lli n,m,t,i,j,k,count=0,mx=0;
	cin >> n;
    vpl v(n);
    for(i=0;i<n;i++){
        cin >> v[i].ff >> v[i].ss;
    }
    // vpl ans;
    // for(i=0;i<n;i++){
    //     ans.pb({v[i].ff,1});
    //     ans.pb({v[i].ss+1,0});
    // }
    // sa(ans);
    // for(i=0;i<2*n;i++){
    //     if(ans[i].ss==1){
    //         count++;
    //     }
    //     else{
    //         count--;
    //     }
    //     mx=max(mx,count);
    // }
    // cout << mx << endl;
    sa(v);
    for(i=0;i<n;i++){
        cout << v[i].ff << " " << v[i].ss << endl;
    }
    multiset<lli>rooms;
    for(i=0;i<n;i++){
        auto it= rooms.lb(v[i].ff);
        if(it==rooms.begin()){
            cout << rooms.size()+1 << endl;
            rooms.insert(v[i].ss);    
        }
        else{
            cout << it-rooms.begin() << endl;
            rooms.erase(--it);
            rooms.insert(v[i].ss);
        }
    }
}
