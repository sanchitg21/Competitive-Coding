#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int l = 0;
        int cnt = 0;
        while (l + 1 < n) {
            if (s[l] == '(' || (s[l] == ')' && s[l + 1] == ')')) {
                l += 2;
            } else {
                int r = l + 1;
                while (r < n && s[r] != ')') {
                    ++r;
                }
                if (r == n) {
                    break;
                }
                l = r + 1;
            }
            ++cnt;
        }
        cout << cnt << ' ' << n - l << '\n';
    }
    
    return 0;
}