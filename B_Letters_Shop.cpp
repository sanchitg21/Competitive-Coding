// //CODE BY CONFUZED CODER
// #define pb push_back
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<int>())
// #define vpl vector<pair<lli,lli>>
// #define vp vector<pair<int,int>>
// #define vll vector<lli>
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     long long int t,m,n,q,i,low,high,mid,mx,mn;
//     cin >> n;
//     string s;
//     cin >> s;
//     vector<pair<char,lli>>v(n);
//     for(i=0;i<n;i++){
//         v[i].first=s[i];
//         v[i].second=i;
//     }
//     sort(v.begin(),v.end());
//     cin >> m;
//     while(m--){
//         string name;
//         cin >> name;
//         t=name.length();
//         map<char,int>mp;
//         for(i=0;i<t;i++){
//             mp[name[i]]++;
//         }
//         mx=0;
//         for(i=0;i<t;i++){
//             low=0;
//             high=n;
//             mn=n;
//             while(low+1<high || high==1){
//                 mid=(high+low)/2;
//                 if(name[i]<=v[mid].first){
//                     high=mid;
//                 }
//                 if(name[i]>v[mid].first){
//                     low=mid;
//                 }
//                 if(name[i]==v[0].first){
//                     mn=v[mp[name[i]]-1].second; 
//                     break;                  
//                 }
//                 if(name[i]==v[mid].first && v[mid-1].first!=name[i]){    
//                     mn=v[mid+mp[name[i]]-1].second;
//                     break;
//                 }
//             }
//             mx=max(mx,mn);
//         }
//         mp.clear();
//         cout << mx+1 << endl;
//     }
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

// Implementation
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     string s;
//     cin >> s;
//     map<char,deque<lli>> mp;
//     for(i=0;i<n;i++){
//         mp[s[i]].push_front(i+1);
//     }
//     cin >> k;
//     map<char,stack<lli>>pm;
// 	while(k--){
// 		string t;
//         cin >> t;
//         lli ans=0;
//         for(i=0;i<t.length();i++){
//             ans=max(ans,mp[t[i]].back());
//             pm[t[i]].push(mp[t[i]].back());
//             mp[t[i]].pop_back();
//         }
//         for(i=t.length()-1;i>=0;i--){
//             mp[t[i]].push_back(pm[t[i]].top());
//             pm[t[i]].pop();
//         }
//         cout << ans << endl;
// 	}
// }

// Binary Search
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli n,m,i,j,k;
    cin >> n;
    string s;
    cin >> s;
    cin >> k;
    vector<pair<char,lli>> v(n);
    for(i=0;i<n;i++){
        v[i].ff=s[i];
        v[i].ss=i+1;
    }
    sa(v);
    vector<char>w(n);
    for(i=0;i<n;i++){
        w[i]=v[i].ff;
    }
    while(k--){
        lli mx=0;
        mps mp;
        string t;
        cin >> t;
        for(i=0;i<t.length();i++){
            lli j=lower_bound(w.begin(),w.end(),t[i])-w.begin();
            mx=max(mx,v[j+mp[t[i]]].ss);   
            mp[t[i]]++;
        }
        cout << mx << endl;
    }
}

