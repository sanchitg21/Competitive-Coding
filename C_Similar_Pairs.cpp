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
	lli n,t,i,j,k,odd,even,flag;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        odd=0;
        even=0;
        set<lli>s;
        for(i=0;i<n;i++){
            cin >> v[i];
            s.insert(v[i]);
            if(v[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even%2==0 && odd%2==0){
            cout << "YES" << endl;
            continue;
        }
        auto ip=s.begin();
        auto it=s.begin();
        ip++;
        flag=0;
        for(ip;ip!=s.end();++ip){
            if(*ip-*it==1 &&((*ip%2==1 && *it%2==0)||(*ip%2==0 && *it%2==1))){
                flag=1;
            }
            it++;
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}
