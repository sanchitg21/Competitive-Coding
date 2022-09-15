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
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;

// lli find_root(lli i,vll &arr){
//     while(arr[i]>=0){
//         i=arr[i];
//     }
//     return i;
// }
// void w_union(vll &arr,lli u,lli v){
//     if(find_root(u,arr) == find_root(v,arr)){
//         return;
//     }
//     if((arr[find_root(u,arr)]) > arr[find_root(v,arr)]){ 
//         arr[find_root(v,arr)]=find_root(u,arr);
//     }
//     else{
//         arr[find_root(u,arr)]=find_root(v,arr);
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,u,v;
// 	string s1,s2,s3;
//     cin >> s1 >> s2 >> s3;
//     set<char>s;
//     map<char,lli>mp;
//     map<lli,char>pm;
//     lli step=1;
//     for(i=0;i<s1.length();i++){
//         s.insert(s1[i]);
//         s.insert(s2[i]);
//     }
//     for(auto it=s.begin();it!=s.end();++it){
//         mp[*it]=step;
//         pm[step]=*it;
//         step++;
//     }
//     vll arr(s.size()+1,0);
//     for(i=1;i<=s.size();i++){
//         arr[i]=-i;
//     }
//     for(i=0;i<s1.length();i++){
//         u=mp[s1[i]];
//         v=mp[s2[i]];
//         w_union(arr,u,v);
//     }
//     for(i=0;i<s3.length();i++){
//         if(mp[s3[i]]){
//             s3[i]=pm[find_root(mp[s3[i]],arr)];
//         }
//     }
//     cout << s3 << endl;
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

map<lli,char>pm;
mpc mp;

lli find_root(lli x,vll &id){
    while(id[x]>=0){
        if(id[id[x]]>=0){
            id[x]=id[id[x]];
        }
        x=id[x];
    }
    return x;
}

void w_union(vll &arr,lli u,lli v){
    if(find_root(u,arr) == find_root(v,arr)){
        return;
    }
    if(u>v){
        arr[find_root(u,arr)]=find_root(v,arr);
    }
    else{
        arr[find_root(v,arr)]=find_root(u,arr);
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    n=s1.length();
    for(i=0;i<n;i++){
        mp[s1[i]]=0;
        mp[s2[i]]=0;
        mp[s3[i]]=0;
    }
    lli step=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        it->ss=step;
        pm[step]=it->ff;
        step++;
    }
    vll arr(mp.size(),-1);
	for(i=0;i<n;i++){
        w_union(arr,mp[s1[i]],mp[s2[i]]);
    }
    for(i=0;i<n;i++){
        s3[i]=pm[find_root(mp[s3[i]],arr)];
    }
    cout << s3 << endl;
}
