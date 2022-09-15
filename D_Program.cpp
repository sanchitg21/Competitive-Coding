// //CODE BY Sanchit Gupta
// #define pb push_back
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
// #define endl '\n'
// using namespace std;
// const int mod=1e9+7;
// const int M=5e5+5;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,t,i,j,k,l,r,mx,mn,a,b,c,d,high,low;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> k;
//         string s;
//         cin >> s;
//         vll v(n+1);
//         mps mp;
//         v[0]=0;
//         for(i=0;i<n;i++){
//             if(s[i]=='-'){
//                 v[i+1]=v[i]-1;
//             } 
//             else{
//                 v[i+1]=v[i]+1;
//             }
//         }
//         n=n+1;
//         //presums

//         vpl left(n);
//         mx=0;
//         mn=0;
//         for(i=0;i<n;i++){
//             mx=max(v[i],mx);
//             mn=min(v[i],mn);
//             left[i].first=mx;
//             left[i].second=mn;
//         }

//         vpl right(n);
//         mx=v[n-1];
//         mn=v[n-1];
//         for(i=n-1;i>=0;i--){
//             mx=max(v[i],mx);
//             mn=min(v[i],mn);
//             right[i].first=mx;
//             right[i].second=mn;
//         }
        
//         while(k--){
//             cin >> l >> r;
//             a=left[l-1].first;
//             b=left[l-1].second;
//             c=right[r].first+v[l-1]-v[r];
//             d=right[r].second+v[l-1]-v[r];
//             high= max(a,c);
//             low=min(b,d);
//             cout << high-low+1 << endl;
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
	lli n,m,t,i,j,k,l,r;
	cin >> t;
	while(t--){
		cin >> n >> k;
        string s;
        cin >> s;
        vll v(n+1,0);
        for(i=0;i<n;i++){
            if(s[i]=='+'){
                v[i+1]=v[i]+1;
            }
            else{
                v[i+1]=v[i]-1;
            }
        }
        lli mn=0,mx=0;
        vpl low(n+1);
        for(i=0;i<=n;i++){
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
            low[i]={mn,mx};
        }
        mn=v[n],mx=v[n];
        vpl high(n+1);
        for(i=n;i>=0;i--){
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
            high[i]={mn,mx};
        }

        for(i=0;i<k;i++){
            cin >> l >> r;
            if(r!=n){
                cout << max(high[r+1].ss - (v[r]-v[l-1]),low[l-1].ss) - min(high[r+1].ff-(v[r]-v[l-1]),low[l-1].ff) + 1 << endl;
            }
            else{
                cout << low[l-1].ss -low[l-1].ff + 1 << endl;
            }
        }
	}
}
