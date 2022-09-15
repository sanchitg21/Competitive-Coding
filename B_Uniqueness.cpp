// #include <bits/stdc++.h>

// using namespace std;

// const int N = 2e3 + 5;
// int a[N];

// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i = 0; i < n; ++i){
//         scanf("%d", &a[i]);
//     }

//     int ans = n - 1;
//     map<int, int> freq; 
//     for(int i = 0; i < n; ++i){
//         bool validPrefix = true;
//         for(int j = 0; j < i; ++j){
//             freq[a[j]]++;
//             if(freq[a[j]] == 2){
//                 validPrefix = false;
//                 break;
//             }
//         }
//         int min_index_suffix = n;
//         for(int j = n - 1; j >= i; --j){
//             freq[a[j]]++;
//             if(freq[a[j]] == 1){
//                 min_index_suffix = j;
//             }
//             else break;
//         }
//         if(validPrefix){
//             ans = min(ans, min_index_suffix - i);
//         }
        
//         freq.clear();
//     }
//     cout << ans << '\n';
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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    lli ans=INF;
    for(i=0;i<n;i++){
        lli flag=1;
        mps mp;
        for(j=0;j<i;j++){
            mp[v[j]]++;
            if(mp[v[j]]==2){
                flag=0;
                break;
            }
        }
        for(j=n-1;j>=i;j--){
            mp[v[j]]++;
            if(mp[v[j]]==2){
                break;
            }
        }
        if(flag){
            ans=min(ans,j-i+1);
        }
    }
    cout << ans << endl;
}