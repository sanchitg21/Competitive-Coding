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
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=998244353;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,presum=0,count,num;
    vll primes(1e6+1,0);
    vll help(1e6+1,0);
    for(i=2;i<=1e6;i++){
        if(help[i]==0){ 
            primes[i]=1;
            k=1;
            while(i*k<=1e6){
                if(help[i*k]==0){
                    help[i*k]=1;
                }
                k++;
            }
        }
    }
    vll factors(1000001,1);
    factors[0]=factors[1]=0;
    for(i=2;i<1000001;i++){
        num=i;
        if(primes[num]==1){
            continue;
        }
        for(j=2;j*j<=num;j++){
            count=1;
            while(num%j==0){ 
                count++;
                num=num/j;
            }
            factors[i]=(factors[i]*count)%mod;
            if(primes[num]==1){
                break;
            }
        }
        if(num>1){
            factors[i]=(factors[i]*2)%mod;   
        }
        factors[i]--;
    }

    vll dp(1000001,0);
    dp[0]=dp[1]=1;
    for(i=1;i<1000001;i++){
        presum+=(dp[i-1])%mod;
        dp[i]=(presum+factors[i])%mod;
    }
	cin >> n;
    cout << dp[n] << endl;    
}
