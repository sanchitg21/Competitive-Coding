// // iterative method

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// template<typename T>
// class graph{
//     map<T,list<T>> l;
//     public:
//         void addEdge(int x, int y){
//             l[x].push_back(y);
//             l[y].push_back(x);
//         }
//         void bfs(T src){
//             map<T,int> visited;
//             queue<T> q;

//             q.push(src);
//             visited[src]= true;
            
//             while(!q.empty()){
//                 T node = q.front();
//                 q.pop();
//                 cout << node << endl;

//                 for(int nbr:l[node]){
//                     if(!visited[nbr]){
//                         q.push(nbr);

//                         // mark them as visited
//                         visited[nbr]=true;
//                     }
//                 }
//             }
//         }
// };

// int main(){
//     graph<int> g;
//     g.addEdge(0,1);
//     g.addEdge(1,2);
//     g.addEdge(2,3);
//     g.addEdge(0,3);
//     g.addEdge(3,4);
//     g.addEdge(4,5);
//     g.bfs(0);
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

class Graph{
public:
    lli V;
    vector<vll>edge;
    vll visited;
    vll level;
    vll ans;
    Graph(lli v){   // v-->vertices
        V = v;
        edge.resize(V);
        visited.resize(V);
        level.resize(V);
    }
    void addEdge(lli u, lli v){
        edge[u].pb(v);
        edge[v].pb(u);
    }   
    void display(){
        for(lli i=0;i<V;i++){
            for(lli j=0;j<edge[i].size();j++){
                cout << edge[i][j] << " ";
            }
            cout << endl;
        }
    }

    void bfs(){
        for(lli i=0;i<visited.size();i++){
            visited[i]=0;
        }
        queue<lli>q;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            lli i=q.front();
            for(lli j:edge[i]){
                if(!visited[j]){
                    visited[j]=1;
                    q.push(j);
                    level[j]=level[i]+1;
                }
            }
            cout << i << " ";
            ans.pb(i);
            q.pop();
        }
        cout << endl;
    }

    void bfsdisplay(){
        for(lli i=0;i<V;i++){
            cout << level[i] << " ";
        }
        cout << endl;
    }

    void bfscheckcycle(){
        for(lli i=0;i<visited.size();i++){
            visited[i]=-1;
        }
        queue<lli>q;
        lli flag=0;
        lli count=0;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            lli i=q.front();
            for(lli j:edge[i]){
                if(visited[j]==0){
                    count++;
                    flag=1;
                }
                if(visited[j]==-1){
                    visited[j]=0;
                    q.push(j);
                }
            }
            q.pop();
            visited[i]=1;
        }
        if(flag==1){
            cout << "Yes,there are " << count << " cycle/s!" << endl;
        }
        else{
            cout << "No cycle!" << endl;
        }
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    Graph g(5);
    cout << "Adjacency List" << endl;
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(4,3);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(1,3);
    g.display();
    cout << endl;

    g.bfs();
    g.bfsdisplay();
    g.bfscheckcycle();
}
