#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t,m,u,v,i,j,k;
	cin >> t;
	while(t--){
    	cin >> n;
    	vector<int> a(n+1);
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		vector<int>dp(n+1,1);

		for(int i=1;i<=n;i++){
			for(int j=1;j*j<=i;j++){
				if(a[i]>a[j] && i%j==0 && i!=j){
					dp[i] = max(dp[i],1+dp[j]);
				}
				if(i%j==0  && a[i]>a[i/j] && i!= i/j){
					dp[i] = max(dp[i],1+dp[i/j]);
				}
			}
		}
    	int ans = 0;
    	for(int i=1;i<=n;i++){
    	    ans = max(ans,dp[i]);
    	}
    	cout << ans << endl;
	}
}
