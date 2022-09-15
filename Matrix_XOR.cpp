//Code by Varun
#include<iostream>
using namespace std;
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, m, num;
        cin >> n >> m >> num;
        long long int x = num + 2;
        long long int ans = 0;
        for (long long int i = 0; i < n; i++) {
            switch (m%4) {
                case 0:
                    ans = ans ^ (x%2 == 0 ? 0 : x ^ (x+m-1) ^ 1);
                    break;
                case 1:
                    ans = ans ^ (x%2 == 1 ? x : x + m -1);
                    break;
                case 2:
                    ans = ans ^ (x%2 == 0 ? 1 : x ^ (x+m-1));
                    break;
                case 3:
                    ans = ans ^ (x%2 == 1 ? x^1 : (x + m - 1) ^ 1);
                    break;
            }
            x++;
        }
        cout << ans << endl;
    }
}
/*
//CODE BY Sanchit
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,t,m,x,n,i,j,k,ans;
    cin >>t;
    while(t--){
        cin >> n >> m >> k;
        ans=0;
        j=1;
        for(i=1;i<=n;i=i+2){  
            ans=(ans^(k+i+j));
        }
        j=m;
        for(i=2;i<=n;i=i+2){ 
            ans=(ans^(k+i+j));
        }
        j=n;
        if(n%2==1){
            for(i=2;i<=m;i++){ 
                ans=(ans^(k+i+j));
            }
        }
        cout << ans << endl;

    }
}
*/