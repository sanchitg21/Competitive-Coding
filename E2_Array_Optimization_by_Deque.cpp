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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;

#include <bits/extc++.h>
using namespace __gnu_pbds;
template<class T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = 2e9;
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
        deque<lli>q;
        lli count=0;
        ordered_set<lli>s;
        mps mp;
        for(i=0;i<n;i++){
            mp[v[i]]++;
            s.insert(v[i]);
            if(!i){
                q.push_front(v[i]);
                continue;
            }
            lli a= s.order_of_key(v[i]);
            lli b= i+1 - a - mp[v[i]];
            if(b>a){
                q.push_front(v[i]);
                count+= a;
            }
            else{
                q.pb(v[i]);
                count+= b;
            }
        }
        cout << count << endl;
	}
}

