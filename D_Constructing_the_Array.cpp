// //CODE BY Sanchit Gupta :)
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

// bool sortbychoice(const pair<lli,lli> &a,const pair<lli,lli> &b){
//     if(a.ss - a.ff +1 < b.ss - b.ff +1){
//         return false;
//     }
//     else if(a.ss - a.ff +1 > b.ss - b.ff +1){
//         return true;
//     }
//     return a.ff < b.ff;
// }
// vpl v;
// void solve(lli low,lli high,lli n){
//     lli mid=(low+high)/2;
//     if(low==high){
//         v.pb({low,high});
//         return;
//     }
//     if(high-low==1){
//         v.pb({low,high});
//         v.pb({high,high});
//         return;
//     }
    
//     v.pb({low,high});
//     solve(low,mid-1,mid-low);
//     solve(mid+1,high,high-mid);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,low,high,mid;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         vll ans(n);
//         low=0;
//         high=n-1;
//         solve(0,n-1,n);
//         sort(v.begin(),v.end(),sortbychoice);
//         for(i=0;i<n;i++){
//             ans[(v[i].ff + v[i].ss)/2]=i+1;   
//         }
//         for(i=0;i<ans.size();i++){
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         v.clear();
//     }
// }


//USING SET
// //CODE BY Sanchit Gupta :)
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
 
// struct cmp{
//     bool operator()(const pair<lli,lli>&a , const pair<lli,lli>&b){
//         if(b.ss - b.ff +1 == a.ss - a.ff +1){
//             return a<b;
//         }
//         return b.ss - b.ff +1 < a.ss - a.ff +1;
//     }
// };
// set<pair<lli,lli>,cmp> v;


// void solve(lli low,lli high,lli n){
//     lli mid=(low+high)/2;
//     if(low==high){
//         v.insert({low,high});
//         return;
//     }
//     if(high-low==1){
//         v.insert({low,high});
//         v.insert({high,high});
//         return;
//     }
//     v.insert({low,high});
//     solve(low,mid-1,mid-low);
//     solve(mid+1,high,high-mid);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,low,high,mid;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         vll ans(n);
//         low=0;
//         high=n-1;
//         solve(0,n-1,n);
//         i=1;
//         for(auto it=v.begin();it!=v.end();it++){
//             ans[((*it).ff + (*it).ss)/2]=i++;   
//         }
//         for(auto it=v.begin();it!=v.end();it++){
//             cout << (*it).ff << " " << (*it).ss << endl; 
//         }
//         for(i=0;i<ans.size();i++){
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         v.clear();
//     }
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
const int INF = INT_MAX;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>

vll v;

struct cmp{
    bool operator()(const pair<lli,lli>& a,const pair<lli,lli>&b){
        if(a.ss-a.ff+1 == b.ss-b.ff+1){
            return a.ff < b.ss;
        }   
        return a.ss-a.ff+1 > b.ss-b.ff+1; 
    }
};  

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        v.resize(n,0);
        set<pair<lli,lli>,cmp>s;
        s.insert({0,n-1});
        lli step=1;  
        while(!s.empty()){
            lli l = (*s.begin()).ff;
            lli r = (*s.begin()).ss;
            lli mid= (l+r)/2;
            v[mid]=step++;
            s.erase(s.begin());
            if(l<=mid-1){
                s.insert({l,mid-1});
            }  
            if(r>=mid+1){
                s.insert({mid+1,r});
            }
        }
        for(i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
	}
}
