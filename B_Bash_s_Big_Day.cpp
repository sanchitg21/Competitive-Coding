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
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,mx=0;
	vll primes(M,0);
    for(i=2;i<primes.size();i++){
        k=2;
        while(i*k<primes.size()){
            primes[i*k]=1;
            k++;
        }
    }
    cin >> n;
    
    mps mp;
    for(i=0;i<n;i++){
        cin >> m;
        mp[m]++;
        primes[m]=-1;
    }
    lli count=0;
    for(i=2;i<primes.size();i++){
        if(primes[i]==1){
            continue;
        }
        lli count=0;
        k=1;
        while(i*k<primes.size()){
            if(primes[i*k]==-1){
                count+=mp[i*k];
            }
            k++;
        }
        mx=max(mx,count);
    }
    cout << max((lli)1,mx) << endl;
}
// #define pb push_back
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<int>())
// #define vpl vector<pair<lli,lli>>
// #define vp vector<pair<int,int>>
// #define vll vector<lli>
// #define vv vector<vll> 
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     lli i,n,t,d=0,g,b,q,j,mx=0;
//     lli flag=0;
//     vll primes;
//     for(i=2;i<=100000;i++){
//         flag=0;
//         for(j=2;j*j<=i;j++){
//             if(i%j==0){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             primes.pb(i);
//         }
//     }
//     t=1;
//     while(t--){
//         cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         } 
//         map<int,int>mp;
//         for(i=0;i<v.size();i++){
//             for(j=0;j*j<=primes.size();j++){
//                 if(v[i]%primes[j]==0){
//                     mp[primes[j]]++;
//                     while(v[i]%primes[j]==0){ 
//                         v[i]=v[i]/primes[j];
//                     }
//                 }
//                 if(v[i]==1){
//                     mp[1]=1;
//                 }
//             }
//             if(v[i]!=1){
//                 mp[v[i]]++;
//             }
//         }
//         for(auto it=mp.begin();it!=mp.end();it++){
//             lli q= it->second;
//             mx=max(mx,q);
//         }
//     }
//     cout << mx << endl;
// }