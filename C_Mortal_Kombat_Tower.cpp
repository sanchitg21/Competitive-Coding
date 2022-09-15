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
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         lli count=0,step=0;
//         for(i=0;i+1<n;i++){
//             if(step%2==0){
//                 if(v[i]==1 && v[i+1]==0){ //
//                     if(i+2<n && v[i+2]==0){
//                         count++;
//                         step++;
//                         continue;
//                     }
//                     count++;
//                     i++;
//                 }
//                 else if(v[i]==1 && v[i+1]==1){
//                     count++;
//                 }
//                 else if(v[i]==0 && v[i+1]==1){
                    
//                 }
//                 else if(v[i]==0 && v[i+1]==0){ //
//                     if(i+2<n && v[i+2]==0){
//                         step++;
//                         continue;
//                     }
//                     i++;
//                 }
//             }
//             else{
//                 if(v[i]==1 && v[i+1]==1){
//                     i++;
//                 }
//                 else if(v[i]==0 && v[i+1]==0){ 

//                 }
//                 else if(v[i]==1 && v[i+1]==0){ 
//                     if(i+2<n && v[i+2]==0){
//                         i++;
//                         step++;
//                         continue;
//                     }
//                 }
//                 else if(v[i]==0 && v[i+1]==1){ 
//                     i++;
//                 }
                
//             }
//             step++;
//         }
//         if(i==n-1 && step%2==0 && v[n-1]==1){
//             count++;
//         }
//         cout << count << endl;
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
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        vll s;
        int count =1;
        for(int i=0;i+1<n;i++){
            if(v[i]==v[i+1]){
                count++;
            }
            else{
                if(v[i]==1){
                    s.pb(count);
                }
                count=1;
            }
        }
        if(v[n-1]==1){
            s.pb(count);
        }
        int ans = 0;
        if(v[0]==1){
            ans=ceil(db(s[0])/3);
        }
        else if(s.size()){
            ans = s[0]/3;
        }
        for(int i=1;i<s.size();i++){
            ans = ans + s[i]/3;   
        }
        cout << ans << endl;
	}
}
