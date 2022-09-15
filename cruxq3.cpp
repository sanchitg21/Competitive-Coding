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
const int INF = INT_MAX;

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	//precalculate prime seive
//     vll prime(M,1);
//     prime[0]=0;
//     prime[1]=0;
//     for(i=2;i<M;i++){
//         k=2;   
//         if(!prime[i]){
//             continue;
//         } 
//         while(k*i<M){
//             prime[k*i]=0;
//             k++;
//         }
//     }
//     cin >> n;
//     mps mp;
//     lli num=1;
//     for(i=2;i<=n;i++){
//         num=num*i;
//         // prime factorize num
//         for(j=2;j<=sqrt(num);j++){
//             while(num%j==0){
//                 num=num/j;
//                 mp[j]++;
//             }
//             if(prime[num]){
//                 mp[num]++;
//                 num=1;
//             }
//         }
//     }
//     lli ans=1;
//     for(auto it=mp.begin();it!=mp.end();++it){
//         ans=(ans*(it->ss +1))%mod;
//     }
//     cout << ans << endl;
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	//precalculate prime seive
    vll prime(M,1);
    prime[0]=0;
    prime[1]=0;
    for(i=2;i<M;i++){
        k=2;   
        if(!prime[i]){
            continue;
        } 
        while(k*i<M){
            prime[k*i]=0;
            k++;
        }
    }
    cin >> n;
    mps mp;
    for(i=2;i<M;i++){
        if(prime[i]==1){
            lli sum=0;
            k=i;
            while(n/k){
                sum+= n/(k);
                k=k*i;
            }
            mp[i]=sum;
        }
    }
    lli ans=1;
    for(auto it=mp.begin();it!=mp.end();++it){
        ans=(ans*(it->ss +1))%mod;
    }
    cout << ans << endl;
}
