// //Given a graph G (0-1 adjacency matrix), and a designated root r (a vertex of G), 
// //find the levels of all the nodes in the spanning tree rooted at r obtained by applying BFS method. 

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
// const int M=1e5+5;
// const int INF = 2e9;

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,root;
// 	cin >> n;
//     lli input[n][n];
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cin >> input[i][j];
//         }
//     }
//     cin >> root;

//     //Creating an adjacency list
//     vector<vll> v(n);
//     for(i=0;i<n;i++){
//         for(j=0;j<i;j++){
//             if(input[i][j]==1){
//                 v[i].pb(j);
//                 v[j].pb(i);
//             }
//         }
//     }

//     vll visited(n,0);
//     queue<lli>q;
//     q.push(root-1);
//     visited[root-1]=1;
//     vll ans(n,0);

//     while(!q.empty()){
//         i=q.front();
//         for(lli j: v[i]){
//             if(!visited[j]){
//                 visited[j]=1; 
//                 q.push(j);
//                 ans[j]=ans[i]+1;
//             }
//         }
//         q.pop();
//     }
    
//     for(i=0;i<n;i++){
//         cout << ans[i] << " ";
//     }    
//     cout << endl;
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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    //create adjacency list
    cin >> n;
    vector<vll>input(n,vll(n));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> input[i][j];
        }
    }
    vector<vll>graph(n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n && i>j;j++){
            if(input[i][j]){
                graph[i].pb(j);
                graph[j].pb(i);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<graph[i].size();j++){
            cout << graph[i][j] <<  " ";
        }
        cout << endl;
    }
    cout << endl;
    cin >> m;
    lli cycle=0;
    mps mp;
    queue<pair<lli,lli>>q;
    q.push({m,0});  
    vll visited(n,0);
    visited[m]=1;
    while(!q.empty()){
        lli root = q.front().first;
        lli level = q.front().second;
        q.pop();
        for(lli node: graph[root]){
            if(!visited[node]){
                visited[node]=1;
                q.push({node,level+1});
                cout << node << " " << level+1 << endl;
                mp[node]=root;
            }   
            else if(node!=mp[root]){
                cycle=1;
            }
        }    
    }
    cout << cycle << endl;
}
