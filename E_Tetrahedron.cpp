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
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e7+1;
// const int INF = 2e9;

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     if(n==1){ 
//         cout << 0 << endl;
//         return 0;
//     }
//     if(n==2){ 
//         cout << 3 << endl;
//         return 0;
//     }
//     lli dp[M][2];
//     dp[1][0]=2;
//     dp[1][1]=3;
//     for(i=2;i<=n-2;i++){
//         for(lli step=0;step<2;step++){ 
//             if(step==0){
//                 dp[i][step]= (dp[i-1][1] + dp[i-1][0]*2)%mod;

//             }
//             else{ 
//                 dp[i][step]=(3*dp[i-1][0])%mod;
//             }
//         }
//     }
//     cout << (3*dp[n-2][0])%mod << endl;
// }

// vector<vll>dp(M,vll(2,0));
// lli solve(lli n, lli step){
//     if(dp[n][step]!=0){
//         return dp[n][step];
//     }
//     if(n==1 && step==0){
//         return dp[n][step]=2;
//     }
//     if(n==1 && step==1){
//         return dp[n][step]=3;
//     }
//     if(step==0){
//         return dp[n][step]=solve(n-1,1) + solve(n-1,0)*2;  
//     }
//     return dp[n][step]=3*solve(n-1,0);
// }
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,ans=3;
// 	cin >> n;
//     if(n==1){ 
//         cout << 0 << endl;
//         return 0;
//     }
//     if(n==2){ 
//         cout << 3 << endl;
//         return 0;
//     }
//     solve(n-2,0);
//     cout << 3*dp[n-2][0] << endl;
// }

//METHOD-3
//CODE BY Sanchit Gupta
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
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e7+1;
// const int INF = 2e9;
// lli dp[M]={0};
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> n;
//     if(n==1){
//         cout << 0 << endl;
//         return 0;
//     }
//     if(n==2){
//         cout << 3 << endl;
//         return 0;
//     }
//     dp[0]=1;
//     for(i=1;i<M;i++){
//         dp[i]=(dp[i-1]*3)%mod;
//     }
//     lli ans=0,step=1;
//     for(i=n-3;i>=0;i--){
//         ans=(ans + dp[i]*step + mod)%mod;
//         step=-step;
//     }
//     if(n%2==1){
//         cout << (abs(ans)*9 -3)%mod;
//     }
//     else{
//         cout << (abs(ans)*9 +3)%mod;
//     }
// }

// Method-4 (MATRIX EXPONENTIATION)
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
#define MOD 1000000007  //1e9 + 7
#define pb push_back
const int N = 1e7 + 5;
typedef vector<vector<int> > matrix;
const int MATN = 2;

matrix mul(matrix A, matrix B) {
    matrix C(MATN+1, vector<int>(MATN+1));
    for (int i = 0; i < MATN; i++)
        for (int j = 0; j < MATN; j++)
            for (int k = 0; k < MATN; k++)
                C[i][j] = (int)((1ll * A[i][k] * B[k][j] % MOD + C[i][j]) % MOD);
    return C;
}

matrix pow(matrix A, int p) {
    if (p == 1)
        return A;
    if (p & 1)
        return mul(A, pow(A, p-1));
    matrix X = pow(A, p/2);
    return mul(X, X);
}

int32_t main() {
    IOS;
    int i, n, ans;
    cin >> n;
    if (n == 1)
        return cout << 0, 0;
    if (n == 2)
        return cout << 3, 0;
    matrix A = {{2,3},{1,0}};
    A = pow(A, n-2);
    ans = (int)(3ll*A[0][0]%MOD);
    cout << ans;
    return 0;
}
