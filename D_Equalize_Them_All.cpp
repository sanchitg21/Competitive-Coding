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
// 	lli n,m,t,i,j,k,mx=0,index,num,count=0;
// 	cin >> n;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     mps mp;
//     for(i=0;i<n;i++){
//         mp[v[i]]++;
//     }
//     for(auto it=mp.begin();it!=mp.end();++it){
//         if(it->second >mx){
//             mx=it->second;
//             num=it->first;
//         }
//     }
//     for(i=0;i<n;i++){
//         if(v[i]==num){
//             index=i;
//         }
//         else{
//             count++;
//         }
//     }

//     cout << count << endl;

//     for(i=index-1;i>=0;i--){
//         if(v[i]<num){
//             cout << 1 << " " << i+1 << " " << i+2 << endl; 
//         }
//         else if(v[i]>num){
//             cout << 2 << " " << i+1 << " " << i+2 << endl; 
//         }
//     }
//     for(i=index+1;i<n;i++){
//         if(v[i]<num){
//             cout << 1 << " " << i+1 << " " << i << endl; 
//         }
//         else if(v[i]>num){
//             cout << 2 << " " << i+1 << " " << i << endl; 
//         }
//     }
    
// }
