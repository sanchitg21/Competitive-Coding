#include<bits/stdc++.h>
using namespace std;

// struct person{
//     int a;
//     int b;
//     person(int a,int b){
//         this->a=a;
//         this->b=b;
//     }
// };

// struct cmp{
//     bool operator()(person& p1,person &p2){
//         if(p1.a == p2.a){
//             return p1.b > p2.b;
//         }
//         return p1.a < p2.a;
//     }
// };

// int main(){
//     priority_queue<person,vector<person>,cmp>pq;
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         int a,b;
//         cin >> a >> b;
//         pq.push(person(a,b));
//     }
//     for(int i=0;i<n;i++){
//         pair<int,int>c= {pq.top().a,pq.top().b};
//         pq.pop();
//         cout << c.first << " " << c.second << endl;
//     }
// }

class cmp{
    public:
    int a;
    int b;
    cmp(int a,int b){
        this->a =a;
        this->b =b;
    }
};

bool operator<(const cmp& c1,const cmp& c2){
    if(c1.a == c2.a){
        return c1.b > c2.b;
    }
    return c1.a < c2.a;
};

int main(){
    priority_queue<cmp>pq;
    for(int i=0;i<5;i++){
        int a,b;
        cin >> a >> b;
        pq.push(cmp(a,b));
    }
    
}


// struct cmp{
//     bool operator()(pair<int,int>&a, pair<int,int>&b){
//         if(a.first == b.first){
//             return a.second > b.second;
//         }
//         return a.first < b.first;
//     }
// };

// int main(){
//     priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
//     int n,u,v;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         cin >> u >> v;
//         pq.push({u,v});
//     }
//     for(int i=0;i<n;i++){
//         cout << pq.top().first << " " << pq.top().second << endl;
//         pq.pop();
//     }
// }