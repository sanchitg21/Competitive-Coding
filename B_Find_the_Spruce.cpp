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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;

void solve(){ 
    lli n,m,i,j,k;
    cin >> n >> m;
    vector<string> v(n);
	for(i=0;i<n;i++){
        cin >> v[i];
    }
    vector<vll>dp(n,vector<lli>(m));
    for(i=0;i<n;i++){ 
    	for(j=0;j<m;j++){ 
            if(j==0){
                if(v[i][j]=='*'){ 
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=0;
                }
            }
            else{ 
                if(v[i][j]=='*'){ 
                    dp[i][j]= dp[i][j - 1] + 1;
                }
                else{
                    dp[i][j]= dp[i][j - 1];
                }
            }
        }
    }
    lli ans=0;
    for(i=0;i<n;i++){ 
        for(j=0;j<m;j++){ 
    	    if(v[i][j] == '.'){ 
    			continue;
            }
    		for(k=0;k<(min(min(n-i,m-j),j+1));k++){ 
                if(j<k+1){ 
        			if(dp[i+k][j+k] != k*2+1){
                        break;
                    }
                }
                else{ 
                    if(dp[i+k][j+k]-dp[i+k][j-k-1] != k*2+1){
                        break;   
                    }
                }
				ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli t;
	cin >> t;
	while(t--){
        solve();
	}
}
