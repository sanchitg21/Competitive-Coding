// #include <bits/stdc++.h>
// using namespace std;
// //#include <ext/pb_ds/assoc_container.hpp>
// //#include <ext/pb_ds/tree_policy.hpp>
// //using namespace __gnu_pbds;
// #define lli long long int
// //#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
// //change data type as per problem (not in vscode)
// #define INF 1000000000000000000
// #define llu unsigned long long int
// #define pb push_back
// #define ff first
// #define vl vector<pair<lli,lli>>
// #define ss second
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// lli t=1,n,i;
// //cin>>t;
// while(t--)
// {
//     string s;
//     cin>>s;
//     n=s.size();
//     int f=0;
//     for(i=0;i<n;i++)
//     {
//         if(s[i]=='w'||s[i]=='m')
//         f=1;
//     }
//     if(f)
//     cout<<0;
//     else
//     {
//         lli mod=1000000007;
//         lli dp[n+5];
//         dp[0]=1;dp[1]=1;
//         for(i=2;i<=n;i++)
//         {
//             if(s[i-1]==s[i-2]&&(s[i-1]=='u'||s[i-1]=='n'))
//             dp[i]=(dp[i-1]+dp[i-2])%mod;
//             else
//             dp[i]=dp[i-1];
//         }
//         cout<<dp[n];
//     }
// }
// }


//CODE BY Sanchit Gupta
#define pb push_back
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
const int mod=1e9+7;
const int M=5e5+5;

long long int minverse(long long int a,long long int n,long long int m){
    if(n==0){
        return 1;
    }
	long long int t=minverse(a,n/2,m);
    if(n%2==0){
        long long int ans = (t*t)%m;
        return ans;
    }
    else{
        long long int ans = (((a*t)%m)*t)%m;
        return ans;
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,flag,count,x,ans,sum;
	t=1;
	while(t--){
        string s;
		cin >> s;
        n=s.length();
        flag=0;
        for(i=0;i<n;i++){
            if(s[i]=='m' || s[i]=='w'){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << 0 << endl;
            continue;
        }
        count=0;
        vll sub;
        for(i=0;i<n;i++){
            if(s[i]=='u'){
                count++;
            }
            else{
                if(count>1){ 
                    sub.pb(count);
                }
                count=0;
            }
        }
        if(count>1){
            sub.pb(count);
        }
        count=0;
        for(i=0;i<n;i++){
            if(s[i]=='n'){
                count++;
            }
            else{
                if(count>1){ 
                    sub.pb(count);
                }
                count=0;
            }
        }
        if(count>1){
            sub.pb(count);
        }
        if(sub.size()==0){
            cout << 1 << endl;
            continue; 
        }
        vll fact(100001);
        fact[0]=1;
        lli y=1;
        for(i=1;i<fact.size();i++){
            y=(y*i)%mod;
            fact[i]=y;
        }
        sa(sub);
        sum=1;
        ans=0;
        lli total;
        for(i=0;i<sub.size();i++){
            total=0;
            for(x=0;x<=sub[i]/2;x++){
                ans= (fact[sub[i]-x]%mod);// (length-x)Cx
                ans=(ans*minverse(fact[x],mod-2,mod))%mod;
                ans=(ans*minverse(fact[sub[i]-2*x],mod-2,mod))%mod;
                total=(total+(ans%mod))%mod;
            }
            sum=((sum%mod)*(total%mod))%mod;
        }
        cout << sum << endl;
	}
}