//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout << 0 << endl;
            else
                cout << (i^(i-1)) << endl;
            int v;
            cin >> v;
            if(v==1)
                break;
        }
    }
    return 0;
}