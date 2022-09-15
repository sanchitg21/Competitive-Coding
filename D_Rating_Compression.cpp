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
	lli n,t,i,j,k,flag,a;
	cin >> t;
	while(t--){
        string s;
        cin >> n;
        s.resize(n);
        vll v(n);
        mps mp;
        flag=0;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->first==1){
                break;
            }
            if(it->first!=1){
                flag=1;
                break;
            }
        }
        if(flag){
            for(i=0;i<n;i++){
                s[i]='0';
            } 
            cout << s << endl;
            continue;
        }
        a=1;
        auto it=mp.begin();
        it++;
        for(it;it!=mp.end();it++){  
            if(it->first-a==1){
                flag=0;
                a=it->first;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            for(i=0;i<n;i++){
                s[i]='0';
            } 
            cout << s << endl;
            continue;
        }
        lli low=0;
        lli high=n-1;
        lli count=0;
        lli steps=1;
        while(low<=high){
            if(v[low]==steps){
                count++;
                low++;
            }
            else if(v[high]==steps){
                count++;
                high--;
            }
            else{
                break;
            }
            steps++;
        }
        if(mp.size()>count){
            count++;
        }
        for(i=n-1;i>=n-count;i--){
            s[i]='1';
        }
        for(i=0;i<n-count;i++){
            s[i]='0';
        }
        flag=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second >1){
                flag=1;
                break;
            }
        }
        if(flag==0){
            s[0]='1';
        }
        cout << s << endl;
	}
}
