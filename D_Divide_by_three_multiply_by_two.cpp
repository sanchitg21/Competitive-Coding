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
    vpl ans;
    for(i=0;i<n;i++){
        lli count1=0;
        lli num=v[i];
        while(num%3==0){
            count1++;
            num=num/3;
        }
        while(num%2==0){
            count1--;
            num=num/2;
        }
        ans.pb({count1,i});
    }
    sort(ans.rbegin(),ans.rend());
    for(i=0;i<ans.size();i++){
        cout << v[ans[i].ss] << " ";
    }
    cout << endl;
}
