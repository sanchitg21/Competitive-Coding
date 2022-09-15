#include <bits/stdc++.h>
#include <bitset>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define ll long long
#define INF 2000000000
#define INF2 2000000000000000000
#define FFT_MOD 998244353
 
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set<int>s;
        bool ans = true;
        for(int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if(s.find(x) != s.end())
                ans = false;
            s.insert(x);
        }
        if(!ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}