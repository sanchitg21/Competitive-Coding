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
	lli n,m,t,i,j,k,count;
	cin >> t;
	while(t--){
		cin >> n;
        string s;
        string v;
        cin >> s;
        cin >> v;
        count=0;
        for(i=0;i<n;i++){
            if(s[i]=='0' && v[i]=='1'){
                s[i]='a';
                v[i]='0';
                count++;
            }
        }
        for(i=0;i<n;i++){
            if(v[i]=='1'){
                if(i-1>=0 && s[i-1]=='1'){
                    s[i-1]='a';
                    count++;
                }
                else if(i+1<n && s[i+1]=='1'){
                    s[i+1]='a';
                    count++;
                }
            }
        }
        cout << count << endl;
	}
}
