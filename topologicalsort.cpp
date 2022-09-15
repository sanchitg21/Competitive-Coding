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
	lli n,m,t,i,j,k,u,w;
	cin >> n >> m;
    vector<vll> v(n);
    vll indegree(n,0);
    for(i=0;i<m;i++){
        cin >> u >> w;
        v[u].pb(w);
        indegree[w]++;
    }
    queue<lli>q;
    lli index;
    for(i=0;i<n;i++){
        if(indegree[i]==0){
            index=i;
            q.push(index);
        }
    }

    while(!q.empty()){
        lli root = q.front();
        cout << root << endl;
        q.pop();
        for(lli node : v[root]){
            indegree[node]--;
            if(indegree[node]==0){
                q.push(node);
            }
        }
    }


    //M2
    // while(flag){
    //     lli index;
    //     for(i=0;i<n;i++){
    //         if(indegree[i]==0 && visited[i]==0){
    //             index=i;
    //             break;
    //         }
    //     }
    //     visited[index]=1;
    //     cout << index << endl;

    //     flag=0;
    //     for(i=0;i<n;i++){
    //         if(visited[i]==0){
    //             flag=1;
    //         }
    //     }

    //     for(i=0;i<v[index].size();i++){
    //         indegree[v[index][i]]--;
    //     }  
    // }

}
