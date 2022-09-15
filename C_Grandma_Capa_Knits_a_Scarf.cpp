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
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        string s;
        cin >> s;
        mpc mp;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        lli mn=1e9;
        for(auto it=mp.begin();it!=mp.end();++it){
            char c=it->first;  
            lli low=0,high=n-1;
            lli flag=0;
            lli count=0;
            while(low<=high){
                if(s[low]==s[high]){
                    low++;
                    high--;
                }
                else if(s[low]==c){
                    low++;
                    count++;
                }
                else if(s[high]==c){
                    high--;
                    count++;
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==0){ 
                mn=min(mn,count);
            }
        }
        if(mn==1e9){
            cout << -1 << endl;
        }
        else{
            cout << mn << endl;
        }
	}
}
