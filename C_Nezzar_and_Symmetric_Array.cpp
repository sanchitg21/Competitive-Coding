//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<long long int>())
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
	lli n,t,i,j,flag,sum;
    cin >> t;
    while(t--){
        flag=0;
        cin >> n;
        n=n*2;
        vll v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second!=2){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout << "NO" << endl;
            continue;
        }
        n=n/2;
        vll s(n);
        i=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            s[i]=it->first;
            i++;
        }
        vll ans;
        sd(s);
        lli count=0;
        if(s[0]%(2*n)==0){
            ans.pb(s[0]/(2*n));
        }
        else{
            cout << "NO" << endl;
            continue;
        }
        sum=ans[0];
        for(i=1;i<n;i++){
            if(s[i]-2*sum <=0){
                flag=1;
                break;
            }
            if((s[i]-2*(sum))%(2*(n-i))==0){
                ans.pb((s[i]-2*(sum))/(2*(n-i)));
                count++;
                sum=sum+ans[count];
            }
            else{
                flag=1;
                break;
            }
        }
        for(i=0;i<ans.size();i++){
            if(ans[i]<=0){
                flag=1;
            }
        }
        if(flag==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}