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
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     long long int k,n,i,j,high,low,mid,mn=0,sum=0,c;
//     cin >> n >> k;
//     vector<long long> v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }   
//     sort(v.begin(),v.end());
//     if(v.size()==1){
//         cout << v[0]+k << endl;
//         return 0;
//     }
//     for(i=n/2;i<n;i++){
//         high=n;
//         low=n/2;
//         while(low+1<high){
//             mid=(high+low)/2;
//             if(v[i]<v[mid]){
//                 high=mid;
//             }
//             if(v[i]>=v[mid]){
//                 low=mid;
//             }
//             if(i==n/2 && v[i+1]!=v[i]){
//                 mn=n/2;
//                 break;
//             }
//             if(v[i]==v[n-1]){
//                 mn=n-1; 
//                 break;
//             }
//             if(v[i]==v[mid] && v[mid+1]!=v[i]){    
//                 mn=mid;
//                 break;
//             }
//         }
//         c=0;
//         if(k>=mn-n/2+1){ 
//             if(k>=(v[mn+1]-v[mn])*(mn-n/2+1)){ 
//                 k=k - (v[mn+1]-v[mn])*(mn-n/2+1);
//                 sum+=v[mn+1]-v[mn];
//             }
//             else{
//                 sum+=(k/(mn-n/2+1));
//                 k=0;
//             }
//             i=mn;
//         }
//         else{
//             break;
//         }
//     }
//     if(k>=n-n/2){
//         sum=sum + k/(n-n/2);
//     }
//     cout << v[n/2] + sum << endl;
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
const int M=1e5+1;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    cin >> n >> k;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sa(v);
    mps mp;
    for(i=n/2;i<n;i++){
        mp[v[i]]++;
    }
    vpl ans;
    auto it=mp.begin();
    ans.pb({it->ff,0});
    auto ip=it;
    ip++;
	for(it;ip!=mp.end();it++){ 
        ans.pb({ip->ff,(it->ss)*(ip->ff - it->ff)});
        ip++;
    }
    for(i=1;i<ans.size();i++){
        ans[i].ss +=(ans[i-1].ss);
    }
    if(k>ans[ans.size()-1].ss){
        k=k-ans[ans.size()-1].ss;
        cout << ans[ans.size()-1].ff + k/(n-n/2) << endl;  
        return 0;
    }

    // Binary search
    vll w(ans.size(),0);
    for(i=0;i<w.size();i++){
        w[i]=ans[i].ss;
    }
    lli low=0;
    lli high=w.size();
    while(low+1<high){
        lli mid=(low+high)/2;
        if(w[mid]<=k){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    if(w[low]>=k){
        cout << ans[low].ff << endl;
    }
    else{
        cout << ans[high].ff << endl;
    }
}