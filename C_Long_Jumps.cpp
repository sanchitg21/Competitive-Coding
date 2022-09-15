//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,t,m,x,n,i,j,mx;
    cin >> t;
    while(t--){
        mx=0;
        cin >> n;
        vll v(n);
        vll s(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        if(n==1){ 
            cout << v[0] << endl;
            continue;
        }
        s[n-1]=v[n-1];
        for(i=n-2;i>=0;i--){
            if(i+v[i]<n){
                s[i]=v[i]+s[i+v[i]];
            }
            else{
                s[i]=v[i];
            }
        }
        for(i=0;i<n;i++){
            mx=max(mx,s[i]);
        }
        cout << mx << endl;
    }
}
// #include<iostream>
// using namespace std;
// long long int ans(long long int arr[],long long int score[],long long int i,long long int n){
//     if(i+arr[i]>=n){ 
//         return arr[i];
//     }
//     else{   
//         return arr[i]+ans(arr,score,i+arr[i],n);
//     }
// }
// int main(){ 
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     long long int t,i,j,k,n,s,x;
//     cin >> t;
//     while(t--){ 
//         cin >> n;
//         long long int arr[n];
//         long long int score[n];
//         for(j=0;j<n;j++){ 
//             cin >> arr[j];
//         }
//         long long int maxi = 0;
//         for(j=n-1;j>=0;j--)
//             score[j]=ans(arr,score,j,n);
//         for(j=0;j<n;j++){ 
//             maxi = max(maxi, score[j]);
//         }
//         cout << maxi << endl;
//     }
// }