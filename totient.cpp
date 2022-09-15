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
// 	lli n,m,t,i,j,k,ans,count;
// 	cin >> m;
//     // prime factorization
//     vll totient(m+1);
//     totient[0]=0;
//     for(j=1;j<=m;j++){ 
//         n=j;
//         ans=1;
//         for(i=2;i*i<=n;i++){
//             count=0;
//             while(n%i==0){
//                 count++;
//                 n=n/i;
//             }
//             if(count>0){
//                 ans=ans*(pow(i,count-1)*(i-1));
//             }
//         }
//         if(n!=1){
//             ans=ans*(n-1);
//         }
//         totient[j]=ans;
//     }
//     for(i=0;i<=m;i++){
//         cout << totient[i] << " ";
//     }
//     cout << endl;
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
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,ans,count;
	cin >> m;
    // prime factorization
    vll totient(m+1);
    for(i=0;i<=m;i++){
        totient[i]=i;
    }
    for(i=2;i<=m;i++){ 
        k=1;
        while(i*k<=m){
            totient[k*i]-=totient[k*i]/i;
            k++;
        }
    }
    for(i=0;i<=m;i++){
        cout << totient[i] << " ";
    }
    cout << endl;
}
