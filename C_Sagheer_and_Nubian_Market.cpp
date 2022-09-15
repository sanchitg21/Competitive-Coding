// //CODE BY CONFUZED CODER
// #define pb push_back
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<int>())
// #define vpl vector<pair<lli,lli>>
// #define vp vector<pair<int,int>>
// #define vll vector<lli>
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// lli binarysearch(vector<lli>v,lli k){
//     lli i,n,sum=0;
//     n= v.size();
//     vll a(n);
//     for(i=0;i<n;i++){
//         a[i]= v[i]+ k*(i+1);
//     }
//     sort(a.begin(),a.end());
//     for(i=0;i<k;i++){
//         sum+= a[i];
//     }
//     return sum;
// }
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     long long int n,i,k,flag,s,low,high,mid;
//     cin >> n >> s;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     low=0;
//     high=n;
//     while(low+1<high || high==1){
//         mid=(high+low)/2;
//         if(binarysearch(v,mid)<=s){
//             low=mid;          
//         }
//         if(binarysearch(v,mid)>s){
//             high=mid;
//         }
//         if(binarysearch(v,1)>s){
//             cout << 0 << " " << 0 << endl;
//             return 0;
//         }
//         if(binarysearch(v,n)<=s){
//             cout << n << " " << binarysearch(v,n) << endl;
//             return 0;
//         }
//         if(binarysearch(v,mid)<=s && binarysearch(v,mid+1)>s){
//             cout << mid << " " << binarysearch(v,mid) << endl;
//             return 0;
//         }
//     }
// }
