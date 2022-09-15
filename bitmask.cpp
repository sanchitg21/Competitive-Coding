//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

//Q1
// There are persons and tasks, each task is to be alloted to a single person. 
// We are also given a matrix of size , where denotes, how much person is going to charge for task. 
// Now we need to assign each task to a person in such a way that the total cost is minimum. 
// Note that each task is to be alloted to a single person, and each person will be alloted only one task

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vector<vll> cost(n,vll(n,0));
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> cost[i][j];
        }
    }
    vll dp((1<<n),INF);
    dp[0]=0;
    for(lli mask=0;mask<(1<<n);mask++){
        m = __builtin_popcount(mask);
        for(i=0;i<n;i++){
            if((mask&(1<<i))==0){
                dp[mask|(1<<i)]=min(dp[mask|(1<<i)],dp[mask]+cost[m][i]);
            }
        }
    }
    cout << dp[(1<<n)-1] << endl;
    
}


//Q2
// There are 100 different types of caps each having a unique id from 1 to 100. 
// Also, there are ‘n’ persons each having a collection of a variable number of caps. 
// One day all of these persons decide to go in a party wearing a cap but to look unique 
// they decided that none of them will wear the same type of cap. 
// So, count the total number of arrangements or ways such that none of them is wearing the same type of cap.

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
    
// }