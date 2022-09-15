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
// const int M=1e6+5;
// const int INF = 2e9;

// // Recursion
// lli ans=1e9;
// lli solve(lli n,lli count){
//     if(n==0){
//         return count;
//     }
//     if(n<0){
//         return 1e9;
//     }
//     string digit=to_string(n);
//     for(lli i=0;i<digit.size();i++){
//         if(digit[i]=='0'){
//             continue;
//         }
//         ans=min(ans,solve(n-(lli)digit[i]+48,count+1));
//     }
//     return ans;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     cout << solve(n,0) << endl;    
// }

// lli ans;
// lli solve(lli n){
//     if(n==0){
//         return 0;
//     }
//     if(n<0){
//         return 1e9;
//     }
//     string digit=to_string(n);
//     for(lli i=0;i<digit.size();i++){
//         if(digit[i]=='0'){
//             continue;
//         }
//         ans=1+min({solve(n-(lli)digit[i]+48)});
//     }
//     return ans;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     cout << solve(n) << endl;    
// }

// Bottom up
// lli dp[M]={0};
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     for(i=1;i<M;i++){
//         dp[i]=INF;
//     }
//     dp[0]=0;
//     for(j=1;j<=n;j++){
//         string digit=to_string(j);
//         for(lli i=0;i<digit.size();i++){
//             if(digit[i]=='0'){
//                 continue;
//             }
//             dp[j]=min(dp[j],1+dp[j-(lli)digit[i]+48]);
//         }
//     }
//     cout << dp[n] << endl;      
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
const int M=1e6+1;
const int INF = 2e9;

lli dp[M]={0};

lli solve(lli n){
    if(n==0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    lli a=INF,b=n;
    while(b){
        if(b%10){ 
            a= min(a,1+solve(n-b%10));
        }
        b=b/10;
    }
    return dp[n]=a;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,ans;
	cin >> n;
    cout << solve(n) << endl;

}
