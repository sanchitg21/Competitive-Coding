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
	lli n,m,t,i,q,a,b,c,d;
	cin >> n >> q;
    ordered_set rows;
    ordered_set cols;
    mps row;
    mps col;
    while(q--){
        cin >> t;
        if(t==1){
            cin >> a >> b;
            rows.insert(a);
            cols.insert(b);
            row[a]++;
            col[b]++;
        }
        else if(t==2){
            cin >> a >> b;
            row[a]--;
            col[b]--;
            if(row[a]==0){
                rows.erase(rows.find(a));
            }
            if(col[b]==0){
                cols.erase(cols.find(b));
            }
        }
        else{
            cin >> a >> b >> c >> d;
            lli e,f,g,h;
            e=rows.order_of_key(a);
            f=cols.order_of_key(b);
            g=rows.order_of_key(c+1);
            h=cols.order_of_key(d+1);
            if(g-e==c-a+1 || h-f==d-b+1){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }   
}
