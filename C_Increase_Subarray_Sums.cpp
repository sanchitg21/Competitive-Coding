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
// const int INF = INT_MAX;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> k;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         vll presum(n+1,0);
//         for(i=1;i<=n;i++){
//             presum[i]=v[i-1]+presum[i-1];
//         }
        
//         vll dp(n+1,0);
//         for(lli len=1;len<=n;len++){
//             lli mx=-INF;
//             for(i=0;i+len<=n;i++){
//                 mx=max(mx,presum[i+len]-presum[i]);
//             }
//             dp[len]=mx;
//         }
//         vll ans(n+1);
//         for(i=0;i<=n;i++){
//             lli mx=-INF;
//             for(j=i;j<=n;j++){
//                 mx=max(mx,dp[j]+k*i);
//             }
//             ans[i]=mx;     
//         }
//         for(i=1;i<=n;i++){
//             ans[i]=max(ans[i],ans[i-1]);
//         }
//         for(i=0;i<=n;i++){
//             cout << ans[i] << " ";
//         }
//         cout << endl;
// 	}
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
// const int INF = INT_MAX;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,x;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> x;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         vll presum(n+1,0);
//         for(i=1;i<=n;i++){
//             presum[i]=presum[i-1]+v[i-1];
//         }

//         // k=0 to k=n;
//         vll a(n+1,0);
//         for(lli len =1;len<=n;len++){
//             lli mx=INT_MIN;
//             for(i=0;i+len<=n;i++){
//                 mx=max(mx,presum[i+len]-presum[i]);
//             }
//             a[len]=mx;
//         }
//         vll dp(n+1,0);
//         for(lli k=0;k<=n;k++){
//             lli mx=0;
//             for(i=k;i<=n;i++){
//                 mx=max(mx,a[i]+k*x);
//             }
//             if(k==0){
//                 dp[k]=mx;
//             }
//             else{
//                 dp[k]=max(mx,dp[k-1]);
//             }
//         }
//         for(i=0;i<=n;i++){
//             cout << dp[i] << " ";
//         }
//         cout << endl;
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
const int INF = INT_MAX;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,x,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> x;
		vll v(n);
		for(i=0;i<n;i++){
			cin >> v[i];
		}
		vll presum(n+1,0);
		for(i=1;i<=n;i++){
			presum[i]=presum[i-1]+v[i-1];
		}
		vll a(n+1,-INF);
		a[0]=0;
		for(lli len=1;len<=n;len++){
			for(i=len;i<=n;i++){
				a[len]=max(a[len],presum[i]-presum[i-len]);
			}
		}
		vll ans(n+1,0);
		for(i=0;i<=n;i++){
			for(j=i;j<=n;j++){
				ans[i]=max(ans[i],a[j]+x*i);
			}
		}
		
		for(i=1;i<=n;i++){
			ans[i]=max(ans[i],ans[i-1]);
		}

		for(i=0;i<=n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
