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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

// Q1. A sorted array is rotated unknown times. FInd the minimum number.
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     cin >>n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     lli low=0,high=n-1,mid;
//     while(low<high){
//         mid=(low+high)/2;   
//         if(v[mid]>v[low] && v[mid]>v[high]){
//             low=mid;
//         } 
//         else if(v[mid]<v[low] && v[mid]<v[high]){
//             high=mid;
//         }
//         else if(v[low]<v[mid] && v[mid]<v[high]){
//             mid=low;
//             high=low+1;
//         }
//         else if(v[low]>v[mid] && v[mid]>v[high]){
//             mid=high;
//             low=high-1;
//         }
//         if(high-low==1){
//             break;
//         }
//     }
//     cout << v[mid] << endl;
// }

// Q2. An array of numbers first increases, then decreases. Find max number.
//  int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     cin >>n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     lli low=0,high=n-1,mid;
//     while(low<high){
//         mid=(low+high)/2;

//         if(v[low]<=v[mid] && v[mid]>=v[high]){
//             low=mid;
//         }
//         else if(v[low]>=v[mid] && v[mid]>=v[high]){
//             high=mid;
//         }
//         else if(v[low]<=v[mid] && v[mid]<=v[high]){
//             low=mid;
//         }
//         if(high-low==1){
//             if(v[low]<=v[high]){
//                 mid=high;
//             }
//             else{
//                 mid=low;
//             }
//             break;
//         }
//     }
//     cout << v[mid] << endl;
// }

// Q3. Find square root of a number
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
//     t=50;
// 	double low,high,mid;
//     cin >> n;
//     high=n;
//     low=0;
//     while(t--){
//         mid=(low+high)/2;
//         if(mid*mid > n){
//             high=mid;
//         }
//         else if(mid*mid < n){
//             low=mid;
//         }
//         if(mid*mid==n){  
//             break;
//         }
//     }
//     cout << mid << endl;
// }

