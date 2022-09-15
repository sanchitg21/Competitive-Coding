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
// #define endl '\n'
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// using namespace std;
// const int mod=1e9+7;
// const int M=5e5+5;
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
//     lli sum=0,count=0;
//     multiset<lli>s;
//     for(i=0;i<n;i++){
//         sum=sum+v[i];
//         if(v[i]<0){
//             s.insert(v[i]);
//         }
//         while(sum<0){
//             count++;
//             sum=sum-*(s.begin());
//             s.erase(s.begin());
//         }
//     }
//     cout << v.size()-count << endl;
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
// const int M=2e3+1;
// const int INF = 2e9;

// lli mx=0;
// vector<vll> dp(M,vll(M,0));
// lli solve(vll&v,lli n,lli count,lli sum){
//     if(sum<0){
//         mx=max(mx,count-1);
//         return count-1;
//     }
//     if(n<0){
//         mx=max(mx,count);
//         return count;
//     }
//     if(dp[n][count]){
//         return dp[n][count];
//     }
//     if(v[n]>=0){
//         return dp[n][count]=solve(v,n-1,count+1,sum+v[n]);
//     }
//     return dp[n][count]=max(solve(v,n-1,count+1,sum+v[n]),solve(v,n-1,count,sum));
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	t=1;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         reverse(v.begin(),v.end());
//         solve(v,n-1,0,0);
//         cout << mx << endl;
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
	lli n,m,t,i,j,q,k;
	cin >> n;
    vll v(n);
    multiset<lli>s;
    lli sum=0,count=0;
    for(i=0;i<n;i++){
        cin >> q;
        s.insert(q);
        sum=sum+q;
        count++;
        while(sum<0){
            sum=sum-*(s.begin());
            s.erase(s.begin());
        }
    }
    cout << count << endl;
}