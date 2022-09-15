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

// // Weighted union

// lli cycles=0;

// lli find_root(lli i,vll& arr){
//     while(arr[i]>=0){
//         i=arr[i];
//     }
//     return i;
// }

// void w_union(vll& arr,lli u,lli v){
//     if(find_root(u,arr) == find_root(v,arr)){
//         cycles++;
//         return;
//     }
//     if(abs(arr[find_root(u,arr)]) >= abs(arr[find_root(v,arr)])){
//         arr[find_root(u,arr)] += arr[find_root(v,arr)];
//         arr[find_root(v,arr)]=find_root(u,arr);
//     }
//     else{
//         arr[find_root(v,arr)] += arr[find_root(u,arr)];
//         arr[find_root(u,arr)]=find_root(v,arr);
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,u,v;
// 	cin >> n >> m;
//     vll arr(n,-1);
// 	for(i=0;i<m;i++){
//         cin >> u >> v;
//         w_union(arr,u-1,v-1);
//     }
//     cout << cycles << endl;
//     for(i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }   
//     cout << endl;
// }
// as many no. of negatives, that many no. of connected components.
// The value of each negative gives the no. of elements in each connected component.
// if both u and v are found in the same set before union, it means there is a cycle.
// Time Complexity - O(logN) per union. 


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

lli cycles=0;

lli find_root(lli root,vll &id){
    while(id[root]>=0){
        if(id[id[root]]>=0){
            id[root]=id[id[root]];
        }
        root=id[root];
    }
    return root;
}

void w_union(vll &arr,lli u,lli v){
    if(find_root(u,arr)==find_root(v,arr)){
        cycles++;
        return;
    }
    if(abs(arr[find_root(u,arr)]) >= abs(arr[find_root(v,arr)])){
        arr[find_root(u,arr)] += arr[find_root(v,arr)];
        arr[find_root(v,arr)]=find_root(u,arr);
    }
    else{
        arr[find_root(v,arr)] += arr[find_root(u,arr)];
        arr[find_root(u,arr)]= find_root(v,arr);
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n >> m;
    vll arr(n,-1);
    for(i=0;i<m;i++){
        cin >> u >> v;
        w_union(arr,u-1,v-1);
    }
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
