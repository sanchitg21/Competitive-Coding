//CODE BY Sanchit Gupta
#define pb push_back
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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,count,flag,steps,x,index,help;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n);
        flag=0;
        for(i=0;i<n;i++){
            cin >> v[i];
            v[i]=v[i]%k;
        }
        mps mp;
        for(i=0;i<n;i++){
            if(v[i]==0){
                continue;
            }
            mp[v[i]]++;
        }
        if(mp.size()==0){
            cout << 0 << endl;
            continue;
        }
        lli mx=0,num;
        for(auto it=mp.begin();it!=mp.end();++it){
            mx= max(mx,it->first);
        }
        num=mx;
        mx=0;
        for(auto it=mp.begin();it!=mp.end();++it){
            if(mx<=it->second){
                mx=it->second;
            }
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second == mx){
                num=min(num,it->first);
            }
        }
        cout << (k)*(mx-1)+(k-num+1) << endl;        
    }
}

// bool sortbychoice(const lli &a,const lli &b){
//         lli k=6;
//         return (k-a%k < k-b%k);
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,t,i,j,k,count,flag,steps,x,index,help;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> k;
//         vll s(n);
//         flag=0;
//         for(i=0;i<n;i++){
//             cin >> s[i];
//         }
//         sort(s.begin(),s.end(),sortbychoice);

//         vll v;
//         help=-1;
//         while(v.size()!=n){ 
//             flag=0;
//             for(i=0;i<s.size();i++){ 
//                 if((s[i]%k)!=help){
//                     v.pb(s[i]);
//                     help=s[i]%k;
//                     s.erase(s.begin()+i);
//                     i--;
//                     flag=1;
//                 }
//             }
//             if(flag==0){    
//                 for(i=0;i<s.size();i++){
//                     v.pb(s[i]);
//                 }
//             }
//         }
//         count=0;
//         for(i=0;i<n;i++){
//             if(v[i]%k!=0){
//                 flag=1;
//                 index=i;
//             }
//         }
//         if(flag==0){
//             cout << 0 << endl;
//             continue;
//         }
//         flag=0;
//         steps=0;
//         x=0;
//         for(i=0;i<n;i++){
//             flag=0;
//             if((v[i])%k!=0){
//                 flag=1;
//                 steps++;
//             }
//             if(flag){ 
                
//                 while((v[i]+x)%k!=0){  
//                     x++;
//                     steps++;
//                 }
//                 x++;
//             }
//         }
//         cout << steps << endl;
// 	}
// }
