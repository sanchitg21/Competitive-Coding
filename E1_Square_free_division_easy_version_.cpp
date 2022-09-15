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
// 	lli n,m,t,i,j,k,count,num,flag;
// 	cin >> t;
//     // way of getting prime numbers to a large range !!
//     vll primes(1e7+1,0);
//     vll help(1e7+1,0);
//     for(i=2;i<=1e7;i++){
//         if(help[i]==0){ 
//             primes[i]=1;
//             k=1;
//             while(i*k<=1e7){
//                 if(help[i*k]==0){
//                     help[i*k]=1;
//                 }
//                 k++;
//             }
//         }
//     }
// 	while(t--){
// 		cin >> n >> k;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         for(i=0;i<n;i++){
//             num=1;
//             if(primes[v[i]]==1){
//                 continue;
//             }
//             for(j=2;j*j<=v[i];j++){
//                 count=0;
//                 while(v[i]%j==0){
//                     v[i]=v[i]/j;
//                     count++;
//                 }
//                 if(count%2==1){
//                     num=num*j;
//                 }
//                 if(primes[v[i]]==1){
//                     break;
//                 }
//             }
//             if(v[i]!=1){
//                 v[i]=v[i]*num;
//             }
//             else{
//                 v[i]=num;
//             }
//         }

//         // for(i=0;i<n;i++){
//         //     cout << v[i] << " ";
//         // }
//         // cout << endl;
//         mps mp;
//         count=1;
//         for(i=0;i<n;i++){
//             if(mp[v[i]]==0){
//                 mp[v[i]]++;
//             }
//             else{
//                 count++;
//                 mp.clear();
//                 mp[v[i]]++;
//             }
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
const int M=1e7+1;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
    vll prime(M,1);
    prime[0]=0;
    prime[1]=0;
    for(i=2;i<M;i++){
        k=2;
        while(k*i<M){
            prime[k*i]=0;
            k++;
        }
    }
	while(t--){
		cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
            lli num=1;
            for(j=2;j<=sqrt(v[i]);j++){
                lli count=0;
                if(prime[v[i]]==1){
                    num=num*v[i];
                    v[i]=1;
                }
                while(v[i]%j==0){
                    v[i]=v[i]/j;
                    count++;
                }
                if(count%2==1){
                    num=num*j;
                }
                if(v[i]==1){
                    break;
                }
            }
            if(prime[v[i]]==1){
                num=num*v[i];
            }
            v[i]=num;
        }
        mps mp;
        lli count=1;
        for(i=0;i<n;i++){
            if(mp[v[i]]==1){
                count++;
                mp.clear();
            }
            mp[v[i]]=1;
        }
        cout << count << endl;
	}
}
