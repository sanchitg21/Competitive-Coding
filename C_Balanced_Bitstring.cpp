//CODE BY Sanchit Gupta
#define pb push_back
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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,req0,req1,flag;
    cin >> t;
    while(t--){
        flag=0;
        cin >> n >> k;
        string s;
        cin >> s;
        mpc mp;
        for(i=0;i<k;i++){
            mp[s[i]]++;
        }
        flag=0;
        string v;
        for(i=0;i<k;i++){
            v.pb(s[i]);
        }
        for(i=k;i<n;i++){
            if((s[i]=='0' && v[(i%k)]=='1') ||(s[i]=='1' && v[(i%k)]=='0')) {
                flag=1;
            }
            else if(s[i]=='0' && v[(i%k)]=='?'){
                v[(i%k)]='0';
            }
            else if(s[i]=='1' && v[(i%k)]=='?'){
                v[(i%k)]='1';
            }
        }
        if(flag){
            cout << "NO" << endl;
            continue;
        }
        mp.clear();
        for(i=0;i<k;i++){
            mp[v[i]]++;
        }
        if(mp['0']<=k/2 && mp['1']<=k/2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
