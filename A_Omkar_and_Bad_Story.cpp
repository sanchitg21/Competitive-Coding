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
// const int mod=1e9+7;
// const int M=5e5+5;
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     lli a,b,t,k,n,i,j,flag=0,p;
//     cin >>t;
//     while(t--){
//         cin >>n;
//         flag=0;
//         vll v(n);
//         set<lli>s;
//         set<lli>::iterator it;
//         for(i=0;i<n;i++){
//             cin >> v[i];
//             s.insert(v[i]);
//             if(v[i]<0){
//                 flag=1;
//             }
//         }
//         if(flag==1){
//             cout << "NO" << endl;
//             continue;
//         }
//         while(s.size()<=300){ 
//             p=s.size();
//             sa(v);
//             for(i=0;i+1<v.size();i++){
//                 for(j=i+1;j<v.size();j++){
//                     if(v[i]!=v[j]){
//                         s.insert(abs(v[j]-v[i]));
//                     }
//                 }
//             }
//             if(p==s.size()){
//                 flag=1;
//                 break;
//             }
//             v.clear();
//             for(it=s.begin();it!=s.end();it++){
//                 v.pb(*it);
//             }
//         }   
//         if(flag==0){
//             cout << "NO" << endl;
//             continue;
//         }
//         cout << "YES" << endl;
//         cout << s.size() << endl;
//         for(it=s.begin();it!=s.end();it++){
//             cout << *it << " ";
//         }
//         cout << endl;
//     }
// }
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
    lli a,b,t,k,n,i,j,MAX,low,high,mn,flag=0,galf;
    cin >>t;
    while(t--){
        cin >>n;
        flag=0;
        vll v(n);
        vector<long long int>::iterator ip;
        map<int,int>mp;
        for(i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
            if(v[i]<0){
                flag=1;
            }
        }
        if(flag==1){
            cout << "NO" << endl;
            continue;
        }
        sa(v);
        for(k=0;k<v.size();k++){ 
            galf=0;
            n=v.size();
            for(i=0;i+1<n;i++){
                for(j=i+1;j<n;j++){
                    mp[abs(v[j]-v[i])]++;
                    if(mp[abs(v[j]-v[i])]==1){
                        v.pb(abs(v[j]-v[i]));
                        galf=1;
                    }
                }   
            }
            if(galf==0){
                break;
            }
            sa(v);
            ip = unique(v.begin(),v.begin()+v.size());
            v.resize(distance(v.begin(), ip));
            if(v.size()>300){
                cout << "NO" << endl;
                flag=1;
                break;
            }
            mp.clear();
            for(i=0;i<v.size();i++){
                mp[v[i]]++;
            }
        }
        if(flag==1){
            continue;
        }
        cout << "YES" << endl;
        cout << v.size() << endl;
        for(i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
 //TWO DIFFERENT CODES