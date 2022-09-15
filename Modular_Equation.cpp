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
    int a,b,t,m,x,n,i,j;
    //Precomputing
    vector<vector<int>> divs(M);
    for(int i=1;i<M;i++){   //We find the factors of all the numbers from 1 to M
        for(j=i;j<M;j=j+i){
            divs[j].pb(i); //J is divisible by I
        }
    }
    cin >> t;
    while(t--){ 
        cin >> n >> m;
        lli res=0;
        for(b=2;b<=n;b++){
            x=m-(m%b);
            if(x>0){
                res+= lower_bound(divs[x].begin(),divs[x].end(),b)-divs[x].begin(); 
            }
            else{
                res+= b-1;
            }
        }
        cout << res << endl;
    }
}

//CODE BY CONFUZED CODER
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
// int solve(int i, int j){
//     if(i==0){
//         return 1;
//     }
//     else if(j==0){
//         return 1;
//     }
//     else{
//         return solve(i-1,j)+solve(i,j-1);
//     }
// }
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int a,b,t,m,x,n,i,j;
//     cin >> i >> j;
//     a= solve(i,j);
    
//     cout << a << endl;
// }
