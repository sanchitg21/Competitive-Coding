// Shortest common supersequence
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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    string a,b;
    cin >> a >> b;
    vector<vll>dp(a.length()+1,vll(b.length()+1,0));
    lli flag=0;
    for(i=1;i<=a.length();i++){
        for(j=1;j<=b.length();j++){  
            if(a[i-1]==b[j-1]){
                dp[i][j]= 1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    for(i=1;i<=a.length();i++){
        for(j=1;j<=b.length();j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    vpl ans;
    i=a.length();
    j=b.length();
    for(k=dp[a.length()][b.length()];k>=1;k--){ 
        while(dp[i][j]==k){
            j--;
        }
        j++;
        while(dp[i][j]==k){
            i--;
        }
        i++;
        ans.pb({i,j});
        i--;
        j--;
    }
    sa(ans);
    i=1;
    j=1;
    for(k=0;k<ans.size();k++){
        while(i<ans[k].ff){
            cout << a[i-1];
            i++;
        }    
        while(j<ans[k].ss){
            cout << b[j-1];
            j++;
        }
        cout << a[i-1];
        i++;
        j++;
    }
}