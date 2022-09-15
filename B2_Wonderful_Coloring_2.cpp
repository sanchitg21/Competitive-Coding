//CODE BY Sanchit Gupta
#define pb push_back
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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,index,count;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vpl v(n);
        mps mp;
        vll s(n);
        for(i=0;i<n;i++){
            cin >> v[i].first;
            s[i]=v[i].first;
            v[i].second=i+1;
            mp[v[i].first]++;
        }
        sa(v);
        sa(s);
        vpl ans(n);
        for(i=0;i<n;i++){
            ans[i].first=-1;
        }
        count=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second > k){
                index=lower_bound(s.begin(),s.end(),it->first)-s.begin();
                for(i=index;i<index+(it->second)-k;i++){
                    ans[i].first=0;
                    count++;
                }
            }
        }
        lli step=1;
        lli rem=n-count;
        rem=rem%k;
        for(i=0;i<rem;i++){
            if(ans[i].first==-1){
                ans[i].first=0;
            }
        }
        for(i=0;i<n;i++){
            if(ans[i].first==-1){
                ans[i].first=step;
                step++;
            }
            if(step==k+1){
                step=1;
            }
        }
        for(i=0;i<n;i++){
            ans[i].second=v[i].second;
        }
        for(i=0;i<n;i++){
            swap(ans[i].first,ans[i].second);
        }
        sa(ans);
        for(i=0;i<n;i++){
            cout << ans[i].second << " ";
        }
        cout << endl;
	}
}