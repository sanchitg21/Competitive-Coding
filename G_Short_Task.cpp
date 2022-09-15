//CODE BY Sanchit Gupta
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
// 	lli n,m,t,i,j,k,sum;
// 	cin >> t;

//     //sieve
//     vll primes(1e7+1,1);
//     n=primes.size();
//     vll help(1e7+1,0);

//     for(i=2;i<n;i++){
//         j=i;
//         while(j<n){
//             primes[j]=primes[j]+i;
//             j=j+i;
//         }
//         if(primes[i]<n && help[primes[i]]==0){
//             help[primes[i]]=i;
//         }
//     }
//     help[1]=1;
//     while(t--){
// 		cin >> m;
//         if(help[m]==0){
//             cout << -1 << endl;
//         }    
//         else{
//             cout << help[m] << endl;
//         }
// 	}
// }
