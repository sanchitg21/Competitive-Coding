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
        int low =0;
        int high = n-1;
        string s;
        cin >> s;
        long long int count = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                count+= i;
            }
            else{
                count+= n-i-1;
            }
        }
        vll v(n,count);
        int k=n;
        while(low<high){
            int flag=0;
            if(s[low]=='L'){
                if(k){
                    k--;
                    flag=1;
                    count+= n-2*low-1;
                }
            }
            low++;
            if(flag){
                v[n-k-1]=count;
                flag=0;
            }

            if(s[high]=='R'){
                if(k){
                    k--;
                    count+= 2*high+1-n;
                    flag=1;
                }
            }
            high--;
            if(flag){
                v[n-k-1]=count;
                flag=0;
            }
            
        }

        for(int i=0;i<n;i++){
            if(i+1<n && v[i]>v[i+1]){
                v[i+1]=v[i];
            }
        }
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
	}
}
