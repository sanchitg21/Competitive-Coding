// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=5e5+5;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         set<pair<lli,lli>>s;
//         for(i=0;i<n;i++){
//             s.insert({v[i],i+1});
//         }
//         vpl ans;
//         while(s.size()>=2)
//         {     
//             auto it=s.begin();
//             if((*it).ff==0){
//                 s.erase(it);
//                 continue;
//             }
//             auto ip=s.end();
//             ip--;
//             pair<lli,lli> a={(*it).ff,(*it).ss};
//             pair<lli,lli> b={(*ip).ff,(*ip).ss};
//             pair<lli,lli> c={(*it).ff-1,(*it).ss};
//             pair<lli,lli> d={(*ip).ff-1,(*ip).ss};
//             lli e=(*it).ss,f=(*ip).ss;
//             ans.pb({e,f});
//             s.erase(a); 
//             s.erase(b); 
//             s.insert(c); 
//             s.insert(d); 
//         }
//         cout << ans.size() << endl;
//         for(i=0;i<ans.size();i++){
//             cout << ans[i].ff << " " << ans[i].ss << endl;
//         }
// 	}
// }

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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = 2e9;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,input;
	cin >> t;
	while(t--){
		cin >> n;
        set<pair<lli,lli>>s;
        for(i=0;i<n;i++){
            cin >> input;
            s.insert({input,i+1});
        }
        lli ans=0;
        multiset<pair<lli,pair<lli,lli>>>v;
        while(s.size()){
            auto it=s.begin();
            if((*it).ff ==0){
                s.erase(it);
                continue;
            }
            auto ip=s.end();
            ip--;
            if(ip==it){
                break;
            }
            lli count= 1;
            ans= ans + count;
            v.insert({count,{(*it).ss,(*ip).ss}});
            lli a=(*it).ff-count;
            lli b=(*it).ss;
            lli c=(*ip).ff-count;
            lli d=(*ip).ss;
            s.erase(it);
            s.erase(ip);
            s.insert({a,b});
            s.insert({c,d});
        }
        cout << ans << endl;
        for(auto it=v.begin();it!=v.end();it++){
            for(i=0;i<(*it).ff;i++){
                cout << (*it).ss.ff << " " << (*it).ss.ss << endl;
            }
        }
	}
}
