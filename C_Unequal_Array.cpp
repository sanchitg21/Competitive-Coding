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
const int M=1e5+1;
const int INF = INT_MAX;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vll s;
        lli count=1;
        for(i=1;i<n;i++){
            if(v[i]==v[i-1]){
                count++;
            }
            else{
                s.pb(count);
                count=1;
            }
        }
        s.pb(count);
        count=0;
        lli low=-1;
        for(i=0;i<s.size();i++){
            if(s[i]>1){
                low=i;
                break;
            }
        }
        lli high=-1;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]>1){
                high=i;
                break;
            }
        }
        if(low==-1){
            cout << 0 << endl;
            continue;
        }
        if(low==high){
            if(s[low]>3){
                cout << s[low]-3 << endl;
            }
            else{
                cout << s[low]-2 << endl;
            }
            continue;
        }
        lli sum=0;
        for(i=low;i<=high;i++){
            sum+=s[i];
        }
        cout << sum-3 << endl;
	}
}
