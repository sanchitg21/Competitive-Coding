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
	lli n,m,t,i,j,k,r,c,row,col;
	cin >> t;
	while(t--){
		cin >> n >> k >> row >> col;
        vector<string> ans(n,string(n,'.'));
        
        r = row-1;
        c = col -1;

        
        int a = r/k * k;
        int b = c/k * k;
        int e = a+k;
        int f = b+k;
        
        while(r>=a){
            ans[r][c] = 'X';
            r = r-1;
            c = c-1;
            if(c<b){
                c = c+k;
            }
        }

        r = row-1;
        c = col -1;
        while(r<e){
            ans[r][c] = 'X';
            c++;
            r++;
            if(c>=f){
                c = c-k; 
            }
        }

        for(int l=0;l<n;l=l+k){
            for(int p=0;p<n;p=p+k){
                for(int i=l;i<l+k;i++){
                    for(int j=p;j<p+k;j++){
                        ans[i][j] = ans[a+i-l][b+j-p];
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << ans[i][j];
            }
            cout << endl;
        }
        
	}
}
