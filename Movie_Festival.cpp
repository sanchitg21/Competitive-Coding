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

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, ans = 0, cur = -1,i;
    cin >> n;
    vector<pair<int, int>> events(n);
    for(i=0;i<n;i++){
        cin >> events[i].ss >> events[i].ff;
    }
    sort(events.begin(),events.end());
    for(i=0;i<n;i++){
        cout << events[i].ff << " " << events[i].ss << endl;
    }
    for(i=0;i<n;i++){
        if(events[i].ss >=cur){
            ans++;
            cur=events[i].ff;
        }
    }
    cout << ans << endl;
}