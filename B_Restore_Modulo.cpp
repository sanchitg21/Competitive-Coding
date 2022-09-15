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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,index,flag,c,d;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        else if(n==2 && v[0]<=v[1]){
            cout << 0 << endl;
            continue;
        }
        flag=0;
        for(i=1;i<n;i++){
            if(v[i]==v[i-1]){
                flag=1;
                break;
            }
        }
        if(flag==1 && mp.size()>1){
            cout << -1 << endl;
            continue;
        }
        else if(flag && mp.size()==1){
            cout << 0 << endl;
            continue;
        }
        flag=0;
        mp.clear();
        for(i=1;i<n;i++){
            mp[v[i]-v[i-1]]++;
            if(v[i]-v[i-1]<0){
                flag=1;
            }
        }
        if(mp.size()==1 && flag==0){
            cout << 0 << endl;
            continue;
        }
        flag=0;

        // second num > first num

        mp.clear();
        for(i=0;i+1<n;i++){
            mp[v[i]-v[i+1]]++;
            if(v[i]>v[i+1]){
                flag=1;
            }
        }
        if(flag==1 && mp.size()==1){
            m=v[0];
            c=v[1];
            continue;
        }

        for(i=1;i<n;i++){
            if(v[i]-v[i-1]>0){
                d=v[i]-v[i-1];
                break;
            }
        }
        flag=0;
        m=0;
        mps freq;
        if(v[1]>v[0]){
            c=v[1]-v[0];
        }
        else{
            c=d;
        }
            lli total=0;
            for(i=1;i<n;i++){
                lli count=1;
                if(v[i]<v[i-1]){
                    total++;
                    m=v[i-1]+c-v[i];
                    while(m/count >c){  //here only you will find m
                        if(m%count==0){
                            freq[m/count]++;
                        }
                        count++;
                    }
                }
                else{
                    if(v[i]-v[i-1]!=c){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag){
                cout << -1 << endl;
                continue;    
            }
            for(auto it=freq.begin();it!=freq.end();++it){
                if(it->second == total){
                    m=it->first;
                    flag=1;
                }
            }
            if(m<v[0]){
                cout << -1 << endl;
                continue;
            }
            else if(flag){ 
                cout << m << " " << c << endl;
            }
            else{
                cout << -1 << endl;
            }
            continue;        
	}
}
