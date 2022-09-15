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
// #include<algorithm>
// #define endl '\n'
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// using namespace std;
// const int mod=1e9+7;
// const int M=5e5+5;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,sum;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> k;
//         if(k==1){
//             cout << 1 << endl;
//             continue;
//         }
//         else if(k==2){
//             cout << 1+n << endl;
//             continue;
//         }
//         if(n==1){
//             cout << 2 << endl;
//             continue;
//         }
//         vll mirror(n);
//         sum=1+n;
//         for(i=1;i<n;i++){
//             mirror[i]=i;
//             sum=(sum+i)%mod;
//         }
//         k=k-3;
//         while(k--){
//             reverse(mirror.begin()+1,mirror.end());
//             sum=(sum+mirror[1])%mod;
//             for(i=2;i<n;i++){
//                 mirror[i]=(mirror[i]+mirror[i-1])%mod;
//                 sum=(sum+mirror[i])%mod;
//             }
//         }
//         cout << sum << endl;
// 	}
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
	cin >> t;
	while(t--){
		cin >> n >> k;
        vector<vll>v(k,vll(n+1,0));
        if(k==1){
            cout << 1 << endl;
            continue;
        }
        if(n==1){
            cout << 2 << endl;
            continue;
        }
        for(j=1;j<n;j++){
            v[0][j]=1;
        }
        lli step=k-1; 
        while(step){
            i=k-step;
            for(j=1;j<n;j++){
                v[i][j]=(v[i][j] + v[i][j-1]+v[i-1][j])%mod;
            }
            step--;
            if(!step){
                break;
            }
            i=k-step;
            for(j=n-1;j>0;j--){
                v[i][j]=(v[i][j]+ v[i-1][j]+v[i][j+1])%mod;
            }
            step--;
        }
        lli ans=0;
        for(i=1;i+1<k;i++){
            for(j=0;j<=n;j++){
                ans=(ans+v[i][j])%mod;
            }
        }
        cout << (ans+n+1)%mod << endl;
	}
}
