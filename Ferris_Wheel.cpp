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
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     sa(v);
//     lli count=0;
//     for(i=0;i<v.size();i++){
//         lli a=m-v[i];
//         if(a==0){
//             count++;
//             continue;
//         }
//         lli low=i+1;
//         lli high=v.size();
//         if(low==high){
//             count++;
//             break;
//         }
//         // use binary search 
//         while(low+1<high){
//             lli mid= (low+high)/2;
//             if(v[mid]<a){
//                 low=mid;
//             }
//             else if(v[mid]>a){
//                 high=mid;
//             }
//             else{
//                 low=mid;
//                 break;
//             }
//         }
//         if(v[low]<=a){
//             v.erase(v.begin()+low,v.begin()+low+1);
//         }
//         count++;
//     }
//     cout << count << endl;
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     vll v(n);
//     for(i=0;i<n;i++){
//         cin >> v[i];
//     }
//     sa(v);
//     lli count=0;
//     for(i=0;i<v.size();i++){
//         lli a=m-v[i];
//         if(a==0){
//             count++;
//             continue;
//         }
//         lli low=i+1;
//         lli high=v.size();
//         if(low==high){
//             count++;
//             break;
//         }
//         lli mid=lower_bound(v.begin()+low,v.end(),a)-v.begin();
//         if(v[mid]==a){
//             v.erase(v.begin()+mid,v.begin()+mid+1);
//         }
//         else if(mid-1>i && v[mid-1]<a){
//             v.erase(v.begin()+mid-1,v.begin()+mid);
//         }
//         count++;
//     }
//     cout << count << endl;
// }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,low,high;
	cin >> n >> m;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sa(v);
    lli count=0;
    for(low=0,high=n-1;low<=high;){
        if(v[low]+v[high]<=m){ 
            count++;
            low++;
            high--;
        }
        else{
            count++;
            high--;
        }
    }
    cout << count << endl;
}

