//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=998244353;

long long int factors (long long int a) {
    lli count=0;
    for(lli i=1;i*i<a;i++){
        if(a%i==0){
            count++;
        }
    }
    lli b=sqrt(a);
    if(b==sqrt(a)){ 
        return 2*count+1;
    }
    else{
        return 2*count;
    }
}
// long long int solve(long long int n){
//     lli sum=0;
//     if(n==1){
//         return factors(n)%mod;
//     }
//     else{
//         for(lli i=n;i>=2;i--){
//             sum+= (solve(i-1)%mod);
//         }
//         return sum+ factors(n)%mod;
//     }
// }
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    long long int n,i,power,host,help,ex,ans=0,a;
    cin >> n;
    power=0;
    for(i=n-1;i>=1;i--){
        if(power>=50){
            help=50;
            ex=(power/help);
            host=factors(i)%mod;
            while(ex--){
                a=(1<<(help));
                host*=(a%mod)%mod;
            }
            a=(1<<(power%help));
            host*=(a%mod)%mod;
            ans+= (host);
        }
        else{
            ans+= (factors(i)<<power)%mod;
        }
        ans=ans%mod;
        power++;
    }
    ans+= factors(n)%mod;
    cout << ans << endl;
}
