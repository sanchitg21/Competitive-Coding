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
    char c;
	string s;
    cin >> s;
    n=s.length();
    mpc mp;
    for(i=0;i<n;i++){
        mp[s[i]]++;
    }
    lli count=0;
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second %2==1){
            count++;
            c=it->first;
        }
    }
    if(count>1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string ans;
    ans.resize(n);
    if(count==1){
        ans[n/2]=c;
        mp[c]--;
    }
    i=0;
    for(auto it=mp.begin();it!=mp.end();++it){
        while(it->second !=0){ 
            ans[i]=it->first;
            ans[n-i-1]=it->first;
            it->second = it->second -2;
            i++;
        }
    }
    cout << ans << endl;
}