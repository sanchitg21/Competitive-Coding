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
	lli n,m,t,i,j,k,s1,s2,mn,mx;
	cin >> t;
	while(t--){
		cin >> m;
        lli arr[2][m];
        for(i=0;i<2;i++){
            for(j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        s1=s2=0;
        for(j=1;j<m;j++){
            s1+=arr[0][j];
        }
        mn=s1;
        for(j=1;j<m;j++){
            s1=s1-arr[0][j];
            s2=s2+arr[1][j-1];
            mx=max(s1,s2);
            mn=min(mn,mx);
        }
        cout << mn << endl;
	}
}
