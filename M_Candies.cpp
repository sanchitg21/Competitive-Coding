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
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

// // // n   k-1 --> removed from pos and still standing on same pos
// // // n-1 k-1 --> removed from pos and moved ahead
// // // n-1 k   --> moved ahead

vll v(101);
lli ans=0;
lli solve(lli n,lli target){
    if(target==0 && n>=0){
        return 1;
    }
    if(target<0 || n==0){
        return 0;
    }
    for(int i=v[n];i>0;i--){
        ans=ans+solve(i,target-v[i]);
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli n,k,i;
    cin >> n >> k;
    for(i=1;i<=n;i++){
        cin >> v[i];
    }
    solve(n,k);
    cout << ans << endl;
}
    #include<bits/stdc++.h>
    using namespace std;
    int a[105];
    const int mod = 1e9+7;
    int main(){
        int n, k, i, j, l;
        cin>>n>>k;
        for(i=0;i<n;++i) cin>>a[i];
     
        // dp[i][j] = sum dp[i-1][j-a[k]] for k from 0 to ai
        vector<int> temp(k+1, 0), dp(k+1, 0);
        for(i=0;i<=k;++i){ 
            dp[i] = a[0] >= i ? 1: 0;
            temp[i]=dp[i];
        }
        for(l=0;l<=k;l++){
            cout << dp[l] << " ";
        }
        cout << endl;
        for(i=1;i<n;++i) {
            for(j=1;j<=k;++j) {
                dp[j] = (dp[j] + dp[j-1])%mod;
                temp[j] = (j>a[i] ? (dp[j] - dp[j-a[i]-1] + mod) : dp[j])%mod;
                for(l=0;l<=k;l++){
                    cout << dp[l] << " ";
                }
                cout << endl;
            }
            dp = temp;
            for(l=0;l<=k;l++){
                cout << dp[l] << " ";
            }
            cout << endl;
            }
        cout<<dp[k]<<"\n";
        return 0;
    }

        #include<bits/stdc++.h>
    using namespace std;
    #define mod 1000000007
    typedef long long ll;
     
    ll solve(vector<int>&ar,int n,int k)
    {
        vector<vector<ll> >dp(n+1,vector<ll>(k+1,0));
        dp[0][0]=1;
        vector<ll>a(k+1,0);
        vector<ll>b(k+1,0);
        for(int i=1;i<n+1;i++)
            dp[i][0]=1;
     
        for(int i=1;i<k+1;i++)
        {
            if(i<=ar[0])
                dp[1][i]=1;
            else
                dp[1][i]=0;
        }
        a[0]=1;b[0]=1;
     
        for(int i=1;i<k+1;i++)
        {
            a[i]=(a[i-1]%mod+dp[1][i]%mod)%mod;
        }
     
        for(int i=2;i<n+1;i++)
        {
            for(int j=1;j<k+1;j++)
            {
                if(j<=ar[i-1])
                {
                    dp[i][j]=a[j];
                    b[j]=(b[j-1]%mod+dp[i][j]%mod)%mod;
                }
                else
                {
                    dp[i][j]=((a[j]-a[j-ar[i-1]])%mod+(dp[i-1][j-ar[i-1]]%mod))%mod;
                    b[j]=(dp[i][j]%mod+b[j-1]%mod)%mod;
                }
            }
            a=b;
        } 
        return dp[n][k]%mod;
    }
     
    int main()
    {
        int n,k;
        cin>>n>>k;
     
        vector<int>ar(n);
        for(int i=0;i<n;i++)
            cin>>ar[i];
     
        cout<<solve(ar,n,k)%mod;
        return 0;
    }