// MINIMUM SUM QUESTION 
// EVERYTHING IS WRONG THOUGH:( 

#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,sum=0,j,c;
    char val;
    int mx=0;
    cin >> n;
    int zeroes[10]={0};
    map<int,map<char,int>>mp;
    for(i=0;i<n;i++){ 
        string s;
        cin >> s;
        zeroes[s[0]-97]++;
        n=s.length();
        for(i=n-1;i>=0;i--){   
            mp[n-i][s[i]]++;
        }
    }
    vector<pair<int,char>> v(10);
    for(i=0;i<10;i++){
        v[i].first=i;
        v[i].second=0;
    }
    for(auto it=mp.begin();it!=mp.end();++it){
        cout << it->first << endl;
        for(auto ip=it->second.begin();ip!=it->second.end();ip++){
            cout << ip->first << " " << ip->second << endl;
        }
    }
    auto it=mp.end();
    --it;
    auto is=mp.begin();
    is--;
    for(it;it!=is;--it){
        mx=0;
        c=0;
        for(auto ip=it->second.begin();ip!=it->second.end();ip++){
            mx=max(mx,ip->second);
        }
        for(auto ip=it->second.begin();ip!=it->second.end();ip++){
            if(mx=ip->second){
                c++;
                val=ip->first;
            }
        }
        if(c==1){
            for(i=0;i<v.size();i++){
                if(v[i].second=='0'){
                    if(i==0 && zeroes[int(val)-97]>0){
                        continue;
                    }
                    v[i].second=val;
                    break;
                }
            }
        }
        else{
            // same frequency;
        }
        for(auto is=mp.begin();is!=mp.end();++is){
            for(auto ip=is->second.begin();ip!=is->second.end();is++){
                if(ip->first==val){ 
                    mp[is->first].erase(ip->first); // erase from everything
                }
            }
        }
        if(mp[it->first].size()==0){
            continue;
        }
        else{
            it++;
        }
    }
}
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,i,k,j,n,sum=0,mx=0,l,m;
    cin >> t;
    int nzero[10]={0};
    vector<pair<int,vll>> v(6);
    for(i=0;i<6;i++){
        v[i].first = i;
        v[i].second.resize(11);
    }
    while(t--){ 
        string s;
        cin >> s;
        nzero[s[0]-97]++;
        n=s.length();
        for(i=n-1;i>=0;i--){
            v[n-1-i].second[int(s[i])-96]++;
        }
    }    

    for(i=0;i<v.size();i++){
        cout << v[i].first << endl;
        for(j=v[i].second[0];j<v[i].second.size();j++){
            cout << v[i].second[j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
// #define vl vector<ll> 
// #define vll vector<pair<ll,ll>>
// #define vvl vector<vector<ll>> 
// #define sz(x) int(x.size())
// #define N 1e9+7
// #define MAX 100000
// #define ld long double
  
// int main() 
// { 
//   	ll t;
//   	cin>>t;
//   	while(t--)
//   	{
//   		ll n,m;
//   		cin>>n>>m;
//   		vector<ll> v(n),c(m),vis(n);
//   		for(ll i=0;i<n;i++)
//   		{
//   			ll a;	
//   			cin>>a;
//   			v[i]=a%m;
//   			c[v[i]]++;
//   	  	}
//   	  	if(m%2==0)
//   	  	{
//   	  		ll ans=0;
//   	  		if(c[m/2]!=0) ans++;
//   	  		if(c[0]!=0) ans++;
//   	  		for(ll i=1;i<m/2;i++)
//   	  		{
//   	  			if(c[i]<=0 && c[m-i]<=0) continue;
//   	  			ll x=max(c[i],c[m-i]);
//   	  			ll y=min(c[i],c[m-i]);
//   	  			ll z=0;
//   	  			ans+=max(x-y-1,z)+1;
//   	  		} 
//   	  		cout<<ans<<"\n";
//   	  	}
//   	  	else
//   	  	{
//   	  		ll ans=0;
//   	  		if(c[0]!=0) ans++;
//   	  		for(ll i=1;i<=m/2;i++)
//   	  		{
//   	  			if(c[i]<=0 && c[m-i]<=0) continue;
//   	  			ll x=max(c[i],c[m-i]);
//   	  			ll y=min(c[i],c[m-i]);
//   	  			ll z=0;
//   	  			ans+=max(x-y-1,z)+1;
//   	  		}
//   	  		cout<<ans<<"\n";
//   	  	}
//   	}
// } 
