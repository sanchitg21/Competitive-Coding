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
	lli n,t,i,j,k,m,low,high,sum;
	cin >> t;
	while(t--){
		cin >> n;
        vll r(n);
        for(i=0;i<n;i++){
            cin >> r[i];
        }
        cin >> m;
        vll b(m);
        for(i=0;i<m;i++){
            cin >> b[i];
        }
        low=high=0;
        sum=0;
        for(i=0;i<n;i++){
            if(r[i]<0){
                low=max(low,sum);
                sum=sum+r[i];
            }
            else{
                sum=sum+r[i];
            }
        }
        low=max(low,sum);
        sum=0;
        for(i=0;i<m;i++){
            if(b[i]<0){
                high=max(high,sum);
                sum=sum+b[i];
            }
            else{
                sum=sum+b[i];
            }
        }
        high=max(high,sum);
        cout << low + high << endl;
	}
}