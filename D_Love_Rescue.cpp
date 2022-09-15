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

// vector<pair<char,char>> ans;

// lli find_root(lli i,vll& arr){
//     while(arr[i]>=0){
//         i=arr[i];
//     }
//     return i;
// }

// void w_union(vll& arr,lli u,lli v,map<lli,char>& mp){
//     if(find_root(u,arr) == find_root(v,arr)){
//         return;
//     }
//     if(abs(arr[find_root(u,arr)]) >= abs(arr[find_root(v,arr)])){
//         arr[find_root(u,arr)] += arr[find_root(v,arr)];
//         ans.pb({mp[find_root(u,arr)],mp[find_root(v,arr)]});
//         arr[find_root(v,arr)]=find_root(u,arr);
//     }
//     else{
//         arr[find_root(v,arr)] += arr[find_root(u,arr)];
//         ans.pb({mp[find_root(v,arr)],mp[find_root(u,arr)]});
//         arr[find_root(u,arr)]=find_root(v,arr);
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,i,j,k;
// 	cin >> n;
//     string s,t;
//     cin >> s >> t;
//     map<lli,char> mp;
//     map<char,lli> pm;
//     lli step=0;
//     for(i=0;i<n;i++){
//         if(!pm[s[i]]){
//             mp[step]=s[i];
//             pm[s[i]]=step++;
//         }
//         if(!pm[t[i]]){
//             mp[step]=t[i];
//             pm[t[i]]=step++;
//         }
//     }
//     vll arr(step,-1);
//     for(i=0;i<n;i++){
//         w_union(arr,pm[s[i]],pm[t[i]],mp);
//     }

//     cout << ans.size() << endl;
//     for(i=0;i<ans.size();i++){
//         cout << ans[i].ff << " " << ans[i].ss << endl;
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
const int INF = 2e9;

vpl ans;

lli root(lli i,vll &arr){
    while(arr[i]>=0){
        if(arr[arr[i]]>=0){
            arr[i]=arr[arr[i]];
        }
        i=arr[i];
    }
    return i;
}

void w_union(lli u,lli v,vll &arr){
    if(root(u,arr)==root(v,arr)){
        return;
    }
    if(u < v){
        arr[root(u,arr)]+= arr[root(v,arr)];
        arr[root(v,arr)]=root(u,arr);
    }
    else{
        arr[root(v,arr)]+= arr[root(u,arr)];
        arr[root(u,arr)]=root(v,arr);
    }
    ans.pb({u,v});
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
	cin >> n;
	string s,t;
    cin >> s >> t;

    mpc mp;
    map<lli,char>pm;
    for(i=0;i<n;i++){
        mp[s[i]]=1;
        mp[t[i]]=1;
    }
    lli step=0;
    for(auto it=mp.begin();it!=mp.end();++it){
        it->ss = step;
        pm[step]= it->ff;
        step++;
    }
    vll arr(step,-1);
    for(i=0;i<n;i++){
        w_union(mp[s[i]],mp[t[i]],arr);
    }
    
    cout << ans.size() << endl;

    for(i=0;i<ans.size();i++){
        cout << pm[ans[i].ff] << " " << pm[ans[i].ss] << endl;
    }
}
