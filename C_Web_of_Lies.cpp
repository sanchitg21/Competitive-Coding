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
	lli n,m,t,i,j,k,q,type,a,b;
	t=1;
	while(t--){
		cin >> n >> m;
        vpl v(m);
        for(i=0;i<m;i++){
            cin >> v[i].first >> v[i].second;
        }
        for(i=0;i<m;i++){
            if(v[i].first>v[i].second){
                swap(v[i].first,v[i].second);
            }
        }
        sa(v);
        mps mp;
        for(i=0;i<m;i++){
            mp[v[i].first]++;
        }
        cin >> q;
        for(i=0;i<q;i++){
            cin >> type;
            if(type==1 || type==2){
                cin >> a >> b;
            }
            if(type==3){
                cout << n-mp.size() << endl;
                continue;
            }
            if(type==1){
                mp[min(a,b)]++;
            }
            else{
                mp[min(a,b)]--;
                if(mp[min(a,b)]==0){
                    mp.erase(min(a,b));
                }
            }
        }
	}
}
