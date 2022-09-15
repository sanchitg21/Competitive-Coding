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
// 	lli n,m,t,i,j,k,low=0,high=0,count=0,changes=0,mx=0;
// 	cin >> n >> m;
//     string s;
// 	cin >> s;
// 	while(high<n){
// 		while(high<n){
// 			if(s[high]=='a'){
// 				count++;
// 			}
// 			else if(s[high]=='b'){
// 				changes++;
// 				count++;
// 				if(changes==m+1){
// 					changes--;
// 					count--;
// 					break;
// 			}
// 			}
// 			high++;
// 		}
// 		mx=max(mx,count);
// 		while(s[low]=='a'){
// 			low++;
// 			count--;
// 		}
// 		while(s[low]=='b'){
// 			low++;
// 			count--;
// 			changes--;
// 		}
// 	}
// 	low=0;
// 	high=0;
// 	count=0;
// 	changes=0;
// 	while(high<n){
// 		while(high<n){
// 			if(s[high]=='b'){
// 				count++;
// 			}
// 			else if(s[high]=='a'){
// 				changes++;
// 				count++;
// 				if(changes==m+1){
// 					changes--;
// 					count--;
// 					break;
// 			}
// 			}
// 			high++;
// 		}
// 		mx=max(mx,count);
// 		while(s[low]=='b'){
// 			low++;
// 			count--;
// 		}
// 		while(s[low]=='a'){
// 			low++;
// 			count--;
// 			changes--;
// 		}
// 	}
// 	cout << mx << endl;
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
	cin >> n >> k;
	string s;
	cin >> s;
	lli low=0,high=0;	
	mpc mp;
	lli ans=0;
	for(low=0;low<n;low++){
		while(high<n && mp['a']<=k){
			mp[s[high]]++;
			high++;	
		}
		if(mp['a']>k){
			ans=max(ans,high-low-1);
			mp[s[low]]--;
		}
	}
	if(ans==0){
		ans=n;
	}
	low=0,high=0;	
	mp.clear();
	lli anns=0;
	for(low=0;low<n;low++){
		while(high<n && mp['b']<=k){
			mp[s[high]]++;
			high++;	
		}
		if(mp['b']>k){
			anns=max(anns,high-low-1);
			mp[s[low]]--;
		}
	}
    if(anns==0){
		anns=n;
	}
	cout << max(ans,anns) << endl;
}
