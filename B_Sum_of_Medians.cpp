//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
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
	lli n,t,i,j,k,m,low,high,sum;
    cin >> t;
    while(t--){
        cin >> n >> k;
        m=n;
        n=n*k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        // TO GET MAXIMUM MEDIAN    
        // if m is odd, then m/2 from below and m-m/2 from above
        // if m is even, then m/2 -1 from below and m/2+1 from above
        sum=0;
        low=0;
        high=n-1;
        while(low<=high){
            if(m%2==1){
                low=low+m/2;
                high=high-(m-m/2);
                sum=sum+v[high+1];
            }
            else{
                low=low+ m/2 -1;
                high=high- (m/2 +1);
                sum=sum+ v[high+1];
            }
        }
        cout << sum << endl;
    }
}