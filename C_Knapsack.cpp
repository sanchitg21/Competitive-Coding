//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
	lli n,t,i,j,sum,total;
    cin >> t;
    while(t--){
        cin >> n >> sum;
        vpl v(n);
        for(i=0;i<n;i++){
            cin >> v[i].first;
            v[i].second=i+1;
        } 
        sort(v.rbegin(),v.rend());
        total=0;
        vll ans;
        for(i=0;i<n;i++){
            if(sum>=total+v[i].first){
                total=total+v[i].first;
                ans.pb(v[i].second);
            }
        }
        if(total<=sum && total>=ceil(sum*1.0/2)){
            sa(ans);
            cout << ans.size() << endl;
            for(i=0;i<ans.size();i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
