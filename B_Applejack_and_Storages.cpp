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
	lli n,m,t,i,j,k,q,flag,sum2,sum4,num;
	t=1;
	while(t--){
		cin >> n;
        vll v(n);
        mps mp;
        sum2=0;
        sum4=0;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            sum2+= (it->second)/2;
            sum4+= (it->second)/4;
        }
        cin >> q;
        while(q--){
            string s;
            cin >> s;
            cin >> num;
            sum2=sum2-mp[num]/2;
            sum4=sum4-mp[num]/4;
            if(s[0]=='+'){
                mp[num]++;
            }
            else{ 
                mp[num]--;
            }
            sum2=sum2+mp[num]/2;
            sum4=sum4+mp[num]/4;
            if(sum2>=4 && sum4>=1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
	}
}
