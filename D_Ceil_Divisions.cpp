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
// 	lli n,t,i,j,k,a,b,steps,ans;
// 	cin >> t;
// 	while(t--){
//         cin >> n;
//         vpl v;
//         ans=0;
//         while(n!=2){
//             a=n;
//             n=sqrt(n);
//             if(n*n!=a){
//                 n++;
//             }
//             v.pb({n,a});
//         }
//         for(i=0;i<v.size();i++){
//             ans=ans+(v[i].ss-v[i].ff+1);
//         }
//         cout << ans << endl;
//         for(i=0;i<v.size();i++){
//             for(j=v[i].ff+1;j<=v[i].ss-1;j++){
//                 cout << j << " " << v[i].ss << endl;
//             }
//             cout << v[i].ss << " " << v[i].ff << endl;
//             cout << v[i].ss << " " << v[i].ff << endl;
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
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n+1,0);
        for(i=1;i<=n;i++){
            v[i]=i;
        }
        vpl ans;
        lli mark=n;
        while(mark!=2){
            for(i=mark-1;i>=ceil(sqrt((db)mark))+1;i--){
                ans.pb({i,mark});
            }
            ans.pb({mark,i});
            ans.pb({mark,i});
            mark=i;
        }
        cout << ans.size() << endl;
        for(i=0;i<ans.size();i++){
            cout << ans[i].ff << " " << ans[i].ss << endl;
        }
	}
}
