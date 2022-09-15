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
	t=1;
	while(t--){
		cin >> n >> m;
        vll v(n);
        vll s(m);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<m;i++){
            cin >> s[i];
        }
        lli low=0,high=0;
        count=0;
        vll ans;
        while(high<m){
            if(low<n && v[low]<s[high]){
                count++;
                low++;
            }
            else{
                ans.pb(count);
                count=0;
                high++;
            }
        }
        for(i=1;i<m;i++){
            ans[i]=ans[i]+ans[i-1];
        }
        for(i=0;i<m;i++){
            cout << ans[i] << " ";
        }
        cout << endl;   
	}
}
