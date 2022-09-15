#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, v;
    cin >> n >> v;
    map<int, int> a;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a[x] += y;
    }
    int ans = 0;
    for (int i = 1; i <= 3002; i++) {
        int add = min(a[i - 1], v);
        ans += add;
        int fadd = min(a[i], v - add);
        a[i] -= fadd;
        ans += fadd;
    } 
    cout << ans;
}
