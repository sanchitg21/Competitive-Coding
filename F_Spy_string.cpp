// // #include <bits/stdc++.h>
// // using namespace std;
// // using ld = long double;
// // using ll = long long;

// // void solve() {
// //     int n, m;
// //     cin >> n >> m;
// //     vector<string> v(n);
// //     for (int i = 0; i < n; i++) {
// //         cin >> v[i];
// //     }
// //     string ans = v[0];
// //     for (int j = 0; j < m; j++) {
// //         char save = ans[j];
// //         for (char d = 'a'; d <= 'z'; d++) {
// //             ans[j] = d;
// //             bool flag = true;
// //             for (int z = 0; z < n; z++) {
// //                 int cntErrors = 0;
// //                 for (int c = 0; c < m; c++) {
// //                     if (v[z][c] != ans[c]) {
// //                         cntErrors++;
// //                     }
// //                 }
// //                 if (cntErrors > 1) {
// //                     flag = false;
// //                     break;
// //                 }
// //             }
// //             if (flag) {
// //                 cout << ans << endl;
// //                 return;
// //             }
// //         }
// //         ans[j] = save;
// //     }
// //     cout << "-1" << endl;
// // }

// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         solve();
// //     }
// // }


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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,m,count,flag;
    char d;
	cin >> t;
	while(t--){
        flag=0;
		cin >> n >> m;
        vector<string> v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        string ans=v[0];
        for(j=0;j<m;j++){
            char save= ans[j];
            for(d='a';d<='z';d++){
                ans[j]=d;
                flag=0;
                for(i=0;i<n;i++){
                    count=0;
                    for(k=0;k<m;k++){
                        if(ans[k]!=v[i][k]){
                            count++;
                        }
                    }
                    if(count>1){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    break;
                }
            }
            if(flag==0){
                break;
            }
            ans[j]=save;
        }
        
        if(flag==1){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }
	}
}
