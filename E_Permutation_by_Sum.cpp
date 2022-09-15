// //CODE BY CONFUZED CODER
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
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     lli t,i,n,l,r,s,a,b,range;
//     cin >>t;
//     while(t--){
//         cin >> n >> l >> r >> s;
//         a= (r-l+1)*(r-l+2)/2;
//         b= n*(n+1)/2 - (n-r+l-1)*(n-r+l)/2;
//         if(a>s || b<s){
//             cout << -1 << endl;
//             continue;
//         }
//         range=r-l+1;
//         vll v(n,0);
//         vll index(n,0);
//         l--;
//         while(range!=0){
//             for(i=n;i>=1;i--){
//                 if(s-i>=range*(range-1)/2){
//                     s=s-i;
//                     v[l]=i;
//                     l++;
//                     range--;
//                     index[i-1]=1;
//                 }
//             }
//         }
//         lli j;
//         for(i=0;i<n;i++){
//             if(v[i]==0){
//                 for(j=0;j<n;j++){
//                     if(index[j]==0){
//                         v[i]=j+1;
//                         index[j]=1;
//                         break;
//                     }
//                 }
//             }
//         }
//         for(i=0;i<n;i++){
//             cout << v[i] << " ";
//         }
//         cout << endl;
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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,l,r,s;
	cin >> t;
	while(t--){
		cin >> n >> l >> r >> s;
        lli len= r-l+1;
        lli low= len*(len+1)/2;
        lli high= n*(n+1)/2 - (n-len)*(n-len+1)/2;
        set<lli>a;
        for(i=1;i<=n;i++){
            a.insert(i);
        }
        if(s<low || s>high){
            cout << -1 << endl;
            continue;
        }
        vll ans(n+1,0);
        vll v(len,0);
        lli sum=low;
        for(i=0;i<len;i++){
            v[i]=i+1;
        }
        lli step=0;
        for(i=len-1;i>=0;i--){
            lli flag=0;
            while(sum<s && v[i]<n-step){
                sum++;
                v[i]++;
                flag=1;
            }
            if(flag){
                step++;
            }
        }
        step=0;
        for(i=l;i<=r;i++){
            a.erase(a.find(v[step]));
            ans[i]=v[step];
            step++;
        }
        auto it=a.begin();
        for(i=1;i<=n;i++){
            if(ans[i]==0){
                ans[i]=*it;
                it++;
            }
        }
        for(i=1;i<=n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
	}
}
