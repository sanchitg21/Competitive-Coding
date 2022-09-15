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
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,mx;
	cin >> t;
	while(t--){
		cin >> n;
        vpl v(n);
        vll ans(n+1,-1);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i].ff;
            v[i].ss=i+1;
            mp[v[i].ff]++;
        }
        vll num;
        vll index(n);
        for(i=0;i<n;i++){
            index[i]=v[i].ff;
        }
        sa(index);
        for(auto it=mp.begin();it!=mp.end();++it){
            num.pb(it->first);
        }
        sa(v);
        // 2 pointers
        for(j=0;j<num.size();j++){ 
            i=lower_bound(index.begin(),index.end(),num[j])-index.begin()+1;
            mx=v[i-1].ss;
            while(v[i].ff==v[i-1].ff){
                mx=max(mx,v[i].ss-v[i-1].ss);
                i++;
            }
            mx=max(mx,n-v[i-1].ss+1);
            k=mx;
            while(k<=n && ans[k]==-1){
                ans[k]=num[j];
                k++;
            }
        }
        for(i=1;i<=n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
	}
}