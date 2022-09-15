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
//     cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     vll presum(n+1,0);
//     for(i=1;i<=n;i++){
//         presum[i]=presum[i-1]+v[i-1];
//     }
//     lli low=0,high=n;
//     lli ans=0,l=0,r=0;
//     cin >> m;
//     for(i=1;i<=n;i++){
//         if(presum[i]-presum[lower_bound(presum.begin(),presum.begin()+i,presum[i]-m)-presum.begin()] < m){
//             if(ans<presum[i]-presum[lower_bound(presum.begin(),presum.begin()+i,presum[i]-m)-presum.begin()]){
//                 ans=presum[i]-presum[lower_bound(presum.begin(),presum.begin()+i,presum[i]-m)-presum.begin()];
//                 l=lower_bound(presum.begin(),presum.begin()+i,presum[i]-m)-presum.begin();
//                 r=i;
//             }

//         }
//         else{
//             if(ans<presum[i]-presum[upper_bound(presum.begin(),presum.begin()+i,presum[i]-m)-presum.begin()]){
//                 ans=presum[i]-presum[upper_bound(presum.begin(),presum.begin()+i,presum[i]-m)-presum.begin()];
//                 l=upper_bound(presum.begin(),presum.begin()+i,presum[i]-m)-presum.begin();
//                 r=i;
//             }
//         }
//     }
//     cout << ans << endl;
//     for(i=l;i<r;i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

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
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     vll presum(n+1,0);
//     for(i=1;i<=n;i++){
//         presum[i]=presum[i-1]+v[i-1];
//     }
//     cin >> m;
//     lli low=0,high=1,mx=0;
//     while(low<high){
//         while(high<=n){
//             if(presum[high]-presum[low]<m){
//                 mx=max(mx,presum[high]-presum[low]);
//                 high++;
//             }
//             else{
//                 break;
//             }
//         }
//         low++;
//     }
//     cout << mx << endl;
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
	lli n,m,t,i,j,k,l=-1,r=-1;
    string s;
    cin >> s;
    n=s.length();
    lli low=0,high=0,mx=0;
    mps mp;
    while(high<n){
        while(high<n){
            mp[s[high]]++;
            if(mp[s[high]]==1){
                if(mx<high-low+1){
                    mx= high-low+1;
                    l=low;
                    r=high;
                }
            }
            else{
                high++;
                break;
            }
            high++;
        }
        while(mp[s[high-1]]==2){
            mp[s[low]]--;
            low++;
        }
    }
    cout << mx << endl;
    cout << string(s.begin()+l,s.begin()+r+1) << endl;
}