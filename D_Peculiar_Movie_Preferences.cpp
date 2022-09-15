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
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        lli flag=0;
        set<string> v;
        string s,u,w;
        map<string,lli> mp;
        for(i=0;i<n;i++){
            cin >> s;
            u=s;
            v.insert(s);
            mp[s]=i;
            reverse(s.begin(),s.end());
            if(u==s){
                flag=1;
            }
        }
        if(flag){
            cout << "YES" << endl;
            continue;
        }
        flag=0;
        for(auto it=v.begin();it!=v.end();++it){
            s=*it;
            lli x=mp[s];
            reverse(s.begin(),s.end());
            if(s.length()==3){
                u=string(s.begin()+1,s.end());
                w=string(s.begin(),s.end()-1);
                auto b=v.find(u);
                auto c=v.find(w);
                if(b!=v.end()){
                    if(mp[*b]>x){
                        flag=1;
                    }
                }
                if(c!=v.end()){
                    if(mp[*c]<x){
                        flag=1;
                    }
                }
            }
            auto a=v.find(s);
            if(a!=v.end()){
                flag=1;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}

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
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         lli flag=0;
//         vector<string> v(n);
//         string s,u;
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             s=v[i];
//             reverse(s.begin(),s.end());
//             if(s==v[i]){
//                 flag=1;
//             }
//         }
//         if(flag){
//             cout << "YES" << endl;
//             continue;
//         }
//         flag=0;
//         for(i=0;i<n;i++){
//             s=v[i];
//             reverse(s.begin(),s.end());
//             if(s.length()==3){
//                 u=string(s.begin()+1,s.end());
//                 auto a= lower_bound(v.begin()+i,v.end(),u);
//                 if(v[a-v.begin()]==u){
//                     flag=1;
//                 }
//             }
//             if(s.length()==2){
//                 for(j=97;j<123;j++){
//                     char c=j;
//                     string w=s;
//                     w.insert(0,1,c);
//                     auto b= lower_bound(v.begin()+i,v.end(),w);
//                     if(v[b-v.begin()]==w){
//                         flag=1;
//                         cout <<w << endl;
//                     }
//                 }
//             }
//             auto a=lower_bound(v.begin()+i,v.end(),s);
//             if(v[a-v.begin()]==s){
//                 flag=1;
//             }
//         }
//         if(flag){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
// 	}
// }