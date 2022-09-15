//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
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
	lli n,t,i,j,sum,flag=0;
    cin >> t;
    while(t--){
        sum=0;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            sum=sum+v[i];
        }
        flag=0;
        for(i=0;i+1<n;i++){
            if(v[i]!=v[i+1]){
                flag=1;
            }
        }
        if(flag==0){
            cout << 0 << endl;
            continue;
        }
        vpl s;
        for(i=1;i*i<=sum;i++){
            if(sum%i==0){
                s.pb({i,sum/i});
            }
        }
        vll ans;
        for(i=0;i<s.size();i++){
            flag=0;
            for(j=0;j<n;j++){ 
                if(s[i].first < v[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0 && s[i].second<n){
                ans.pb(s[i].first);
            }
        }
        for(i=0;i<s.size();i++){
            flag=0;
            for(j=0;j<n;j++){ 
                if(s[i].second < v[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0 && s[i].first<n){
                ans.pb(s[i].second);
            }
        }
        lli total=sum;
        lli mn=1e9;
        for(i=0;i<ans.size();i++){
            sum=0;
            flag=0;
            for(j=0;j<n;j++){
                if(v[j]+sum<=ans[i]){
                    sum=sum+v[j];
                }
                else if(v[j]+sum>ans[i]){
                    flag=1;
                    break;
                }
                if(sum==ans[i]){
                    sum=0;
                }
            }
            if(flag==0){
                mn=min(mn,n-total/ans[i]);
            }
        }   
        cout << mn << endl;
    }
}