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
    lli n,one,two,three,four,ans;
    cin >> n;
    one = n/2 + n/3 + n/5 + n/7;
    two= n/(2*3) + n/(2*5) + n/(2*7)+ n/(3*5) + n/(3*7) + n/(5*7);
    three=n/(2*3*7)+ n/(2*5*7)+ n/(2*5*3) + n/(3*5*7);
    four = n/(2*3*5*7);
    ans= n-(one-two+three-four);
    cout << ans << endl;
}
