#include "bits/stdc++.h"
using namespace std;
#define int long long
#define forn(i, n) for(int i = 0; i < (n); i++)
#define pb push_back
#define sz(x) ((int)(x).size())
#define dbg(x) cerr<<#x<<"->"<<(x)<<"\n";
#define prnt(x) cerr<<#x<<'{';for(auto T:x)cerr<<T<<' ';cerr<<"}\n"; 
#define all(x) (x).begin(),(x).end()
#define inf 1000000000000000000 //1e18


int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m, c = 0; cin >> n >> m;
    string s; cin >> s;
    string t[] = { "abc","acb","bac","bca","cab","cba" };
    int pre[6][n + 1];
    forn(i, 6) pre[i][0] = 0;
    forn(x, 6) {
        int k = 0;
        for (int i = 1; i <= n; i++) {
            pre[x][i] = pre[x][i - 1];
            cout << x << " " << i << " " << k << endl;
            cout << s[i-1] << " " << t[x][k] << endl;
            if (s[i - 1] != t[x][k]) pre[x][i]++;
            k++;
            k %= 3;
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<n+1;j++){
            cout << pre[i][j] << " ";
        }
        cout << endl;
    }
    while (m-- > 0) {
        int l, r; cin >> l >> r;
        int ans = inf;
        forn(i, 6) ans = min(ans, pre[i][r] - pre[i][l - 1]);
        cout << ans << '\n';
    }
}