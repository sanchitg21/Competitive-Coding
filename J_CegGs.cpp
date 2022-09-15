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
	lli n,t,i,j,k,low,high,flag,index;
	cin >> t;
	while(t--){
        cin >> n;
        vpl v(n);
        vll s(200000);
        for(i=0;i<n;i++){
            cin >> v[i].first >>v[i].second;
            v[i].first--;
            v[i].second--;
        }
        sa(v);
        for(i=0;i<200000;i++){
            s[i]=0;
        }
        vll ans;
        for(low=v[0].first;low<=v[0].second;low++){ 
            s[low]=1;
        }
        ans.pb(1);
        index=0;
        for(i=1;i<n;i++){
            flag=0;
            for(low=v[i].first;low<=v[i].second;low++){ 
                index=max(index,v[i].second);
                if(s[low]==1){
                    flag=1;
                    break;
                }
                if(s[low]==2){
                    break;
                }
            }
            if(flag==0){
                for(low=v[i].first;low<=v[i].second;low++){ 
                    s[low]=2;
                }
                ans.pb(2);
            }
            else{
                for(low=index;low<=v[i].second;low++){ 
                    s[low]=1;
                }
                ans.pb(1);
            }
        }
        mps mp;
        for(i=0;i<ans.size();i++){
            if(ans[i]!=0){ 
            mp[ans[i]]++;
            }
        }
        if(mp.size()==1){
            cout << -1 << endl;
            continue;
        }
        for(i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
	}
}
