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


bool cmp(const pair<lli,lli>&a,const pair<lli,lli>&b ){
    if(a.ff == b.ff){
        return a.ss < b.ss;
    }
    return a.ff < b.ff;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vpl v(n);
        for(i=0;i<n;i++){
            cin >> v[i].first;
        }
        for(i=0;i<n;i++){
            cin >> v[i].second;
        }
        lli flag=0;
        for(i=1;i<n;i++){
            for(j=0;j<i;j++){
                if((v[i].ff < v[j].ff && v[i].ss > v[j].ss ) || (v[i].ff > v[j].ff && v[i].ss < v[j].ss )){
                    flag=1;
                }
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        }

        vpl s=v;
        sort(v.begin(),v.end(),cmp);
        vll a(n,0);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(s[i]==v[j]){
                    a[i]=j+1;
                }
            }
        }

        vpl ans;
        for(i=0;i+1<n;i++){
            lli mn=a[i];
            lli index=i;
            for(j=i+1;j<n;j++){
                if(a[j]<mn){
                    mn=a[j];
                    index=j;
                }
            }
            if(index!=i){
                ans.pb({i+1,index+1});
            }
            swap(a[i],a[index]);
        }
        cout << ans.size() << endl;
        for(i=0;i<ans.size();i++){
            cout << ans[i].ff << " " << ans[i].ss << endl;
        }
	}
}
