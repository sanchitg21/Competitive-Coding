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
    lli t,i,n,l,r,x,s,a,b,sum,y,temp;
    cin >>t;
    while(t--){
        cin >> n;
        vll v(n);
        set<lli>s;
        for(i=1;i<=n;i++){
            s.insert(i);
        }
        
        set<lli> ::iterator it=s.begin();
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<n;i++){
            s.erase(v[i]);
        }
        cout << v[0] << " ";
        for(i=1;i<n;i++){
            if(v[i]==v[i-1]){
                cout << *it << " ";
                it++;
            }
            else{
                cout << v[i] << " ";
            }
        }
        cout << endl;
        // for(auto it=s.begin();it!=s.end();++it){
        //     cout << *it << " ";
        // }
        // cout << endl;
        it=s.begin();
        cout << v[0] << " ";
        for(i=1;i<v.size();i++){
            if(v[i-1]!=v[i]){
                cout << v[i] << " ";
            }
            else{
                it=lower_bound(s.begin(),s.end(),v[i]);
                it--;
                cout << *it << " ";
                s.erase(it);
            }
        }
        cout << endl;
    }
}
//CODE BY Sanchit Gupta
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
// 	lli n,m,t,i,j,k,low,high,count;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         vll ans(n,0);
//         set<lli>s;
//         set<lli>::iterator it;
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             s.insert(v[i]);
//         }
//         for(auto it=s.begin();it!=s.end();++it){
//             ans[lower_bound(v.begin(),v.end(),*it)-v.begin()]=*it;
//         }
//         count=1;
//         it=s.begin();
//         for(i=0;i<n;i++){
//             if(ans[i]==0 && *it!=count){
//                 ans[i]=count;
//                 count++;
//             }
//             else if(*it==count){
//                 ++it;
//                 count++;
//                 if(ans[i]==0){
//                     i--;
//                 }
//             }
//         }
//         for(i=0;i<n;i++){
//             cout << ans[i] << " ";
//         }
//         cout << endl;


// 	}
// }
