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

// lli ans=0;

// void dfs(lli root,vll& visited ,vector<vll>& graph,vll& s,vector<vll>& input){
//     visited[root]=1;
//     if(s[input[root][0]]==0 && s[input[root][1]]==0){
//         ans++;
//     }
//     else{
//         s[input[root][0]]=0;
//         s[input[root][1]]=0;
//     }
//     for(lli node: graph[root]){
//         if(!visited[node]){
//             dfs(node,visited,graph,s,input);
//         }
//     }
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     vll s(n+1,0);
//     vector<vll>input(m,vll(2));
//     for(i=0;i<m;i++){
//         cin >> input[i][0] >> input[i][1];
//     }   

//     vector<vll>v(n+1);
//     for(i=0;i<m;i++){
//         for(j=0;j<2;j++){
//             v[input[i][j]].pb(i);
//         }
//     }

//     vector<vll>graph(m);
//     for(i=1;i<=n;i++){
//         s[i]=1;
//         for(j=0;j+1<v[i].size();j++){
//             graph[v[i][j]].pb(v[i][j+1]);
//             graph[v[i][j+1]].pb(v[i][j]);
//         }
//     }

//     vll visited(m,0);
//     for(i=0;i<m;i++){
//         if(!visited[i]){
//             dfs(i,visited,graph,s,input);
//         }
//     }
//     cout << ans << endl;
// }












// lli ans=0;

// lli find_root(lli i,vll& arr){
//     while(arr[i]>=0){
//         if(arr[arr[i]]>=0){
//             arr[i]=arr[arr[i]];
//         }
//         i=arr[i];
//     }
//     return i;
// }

// void w_union(vll& arr,lli u,lli v){
//     if(find_root(u,arr) == find_root(v,arr)){
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
// 	lli n,m,t,i,j,k;
// 	cin >> n >> m;
//     vector<vll>input(m,vll(2));
//     mps pm;
//     for(i=0;i<m;i++){
//         cin >> input[i][0] >> input[i][1];
//         pm[input[i][0]]++;
//         pm[input[i][1]]++;
//     }   

//     vector<vll>v(n+1);
//     for(i=0;i<m;i++){
//         for(j=0;j<2;j++){
//             v[input[i][j]].pb(i);
//         }
//     }

//     vll arr(m,-1);
//     for(i=1;i<=n;i++){
//         for(j=0;j+1<v[i].size();j++){
//             w_union(arr,v[i][j],v[i][j+1]);
//         }
//     }       
    
//     mps mp;
//     for(i=0;i<m;i++){
//         mp[arr[i]]++;
//     }
//     lli count=0;
//     for(auto it=mp.begin();it!=mp.end();++it){
//         if(it->ff < 0){
//             count+= 2*(it->ss);
//         }
//         else{
//             count+= it->ss;
//         }
//     }
//     cout << count-pm.size() << endl;
// }

lli comp=0;
void dfs(lli root, vll &visited,vector<vll>&graph){
    visited[root]=1;
    comp++;
    for(lli i: graph[root]){
        if(!visited[i]){
            dfs(i,visited,graph);
        }
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,u,v;
	cin >> n >> m;
    vector<vll>input(n);
    mps mp;
    for(i=0;i<m;i++){
        cin >> u >> v;
        mp[u];
        mp[v];
        input[u-1].pb(i); 
        input[v-1].pb(i);
    }

    vector<vll>graph(m);
    for(i=0;i<n;i++){
        for(j=0;j+1<input[i].size();j++){
            graph[input[i][j]].pb(input[i][j+1]);
            graph[input[i][j+1]].pb(input[i][j]);
        }
    }
    lli count=0;
    vll visited(m,0);
    for(i=0;i<m;i++){
        if(!visited[i]){
            dfs(i,visited,graph);
            count+=comp;
            count++; 
        }
        comp=0;
    }
    n=mp.size();
    cout << max((lli)0,count-n) << endl;
}
