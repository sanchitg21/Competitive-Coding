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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,l,r,u,v;
// 	cin >> n >> m >> k;
//     vpl s(m);
//     vll w(m);
//     lli mx=0;
//     for(i=0;i<m;i++){
//         cin >> l >> r;
//         s[i]={l,r};
//     }
//     sa(s);
//     for(i=0;i<m;i++){
//         mx=max(mx,s[i].ss);
//         w[i]=mx;
//     }
//     for(i=0;i<m;i++){
//         cout << s[i].ff << " " << s[i].ss << endl;
//     }
//     for(i=0;i<k;i++){
//         cin >> u >> v;
//         if(u>v){
//             swap(u,v);
//         }
//         if(lower_bound(w.begin(),w.end(),v)==w.end()){
//             cout << "NO" << endl;
//             continue;
//         }
//         lli index=lower_bound(w.begin(),w.end(),v)-w.begin();
//         if(s[index].ff<=u){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
//     }
// }

bool cmp(const pair<lli,lli> &a,const pair<lli,lli> &b){
    if(a.ss != b.ss){
        return a.ss < b.ss;
    }
    return a<b;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,l,r,u,v;
	cin >> n >> m >> k;
    vpl s(m);
    vll w(m);
    lli mn=INF;
    for(i=0;i<m;i++){
        cin >> l >> r;
        s[i]={l,r};
    }
    sort(s.begin(),s.end(),cmp);
    for(i=m-1;i>=0;i--){
        mn=min(mn,s[i].ff);
        w[i]=mn;
    }
    for(i=0;i<k;i++){
        cin >> u >> v;
        if(u>v){
            swap(u,v);
        }
        auto it=upper_bound(w.begin(),w.end(),u);
        if(it==w.begin()){
            cout << "NO" << endl;
            continue;
        }
        it--;
        if(s[it-w.begin()].ss >= v){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
} 
