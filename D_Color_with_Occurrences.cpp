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
        string s;
        cin >> s;
        int n = s.length();
		cin >> m;
        vector<string>v(m);
        for(int i=0;i<m;i++){
            cin >> v[i];
        }
        vector<pair<pair<int,int>,int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k = v[j].length();
                if(i+k-1<n && s.substr(i,k) == v[j]){
                    ans.push_back({{i,i+k-1},j+1});
                }
            }
        }
        int index = 0;
        int flag=0;
        vector<pair<int,int>>res;
        while(index<n){
            int a = 0;
            int b = -1;
            int c = 0;
            for(int j=0;j<ans.size();j++){
                if(index>=ans[j].ff.ff && index<=ans[j].ff.ss){
                    if(b < ans[j].ff.ss){
                        b = ans[j].ff.ss;
                        a = ans[j].ff.ff;
                        c = ans[j].ss;
                    }
                }
            }
            if(b==-1){
                flag=1;
                break;
            }
            else{
                res.push_back({c,a});
            }
            index = b+1;
        }
        if(flag){
            cout << -1 << endl;
        }
        else{
            cout << res.size() << endl;
            for(int i=0;i<res.size();i++){
                cout << res[i].ff << " " << res[i].ss+1 << endl;
            }
        }
	}
}
