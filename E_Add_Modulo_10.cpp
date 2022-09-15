//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]%2==1){
                v[i] = v[i]+ (v[i]%10);
            }
        }
        map<int,int>pm;
        int count = 0;
        for(int i=0;i<n;i++){
            if(v[i]%10==0){
                pm[v[i]]++;
                count++;
            }
        }

        if(pm.size() == 1){
            if(count == n){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
            continue;
        }
        else if(pm.size() > 1){
            cout << "No" << endl;
            continue;
        }

        for(int i=0;i<n;i++){
            int a = v[i] - (v[i]%20);
            a = a/20;
            v[i]=v[i]-a*20;
        }
        
        for(int i=0;i<n;i++){
            while(v[i]/10){
                if(v[i]%10 == 2){
                    v[i]=v[i]-6;
                }
                else if(v[i]%10 == 4){
                    v[i]=v[i]-2;
                }
                else if(v[i]%10 == 8){
                    v[i]=v[i]-4;
                }
                else if(v[i]%10 == 6){
                    v[i]=v[i]-8;
                }
                
            }
            while(v[i] && v[i]%2==0){
                v[i]=v[i]/2;
            }
        }
        mps mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        if(mp.size() == 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
	}
}
