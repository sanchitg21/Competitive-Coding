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
// #define endl '\n'
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// using namespace std;
// const int mod=1e9+7;
// const int M=5e5+5;
// const int INF = 2e9;

// bool sortbychoice(const string &a,const string &b)
// {
//     if(a!=b.substr(0,a.length()) && b!=a.substr(0,b.length())){ 
//         return a<b;
//     }
//     else if(b.length()<=a.length()){
//         lli flag=0;
//         for(lli i=b.length();i<a.length();i++){
//             if(b[i%b.length()]<a[i]){
//                 flag=0;
//                 break;
//             }
//             else if(b[i%b.length()]>a[i]){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==1){
//             return a>b;
//         }
//         else{
//             return a<b;
//         }
//     }
//     else if(a.length()<b.length()){
//         lli flag=0;
//         for(lli i=a.length();i<b.length();i++){
//             if(a[i%a.length()]<b[i]){
//                 flag=0;
//                 break;
//             }
//             else if(a[i%a.length()]>b[i]){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==1){
//             return a<b;
//         }
//         else{
//             return a>b;
//         }
//     }
//     return a<b;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     vector<string> v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     sort(v.begin(),v.end(),sortbychoice);
//     for(i=0;i<n;i++){
//         cout << v[i];
//     }
//     cout << endl;
//     return 0;
// }
