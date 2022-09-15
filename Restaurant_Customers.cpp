// CODE BY Sanchit Gupta
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) static_cast<int32_t>(x.size())
// int main() {
//     int i, n;
//     cin >> n;
//     vector<pair<int, int>> events;
//     for(i = 0; i < n; i++) {
//         int a, b; 
//         cin >> a >> b;
//         events.pb({a,1});
//         events.pb({++b,0});
//     } 
//     sort(events.begin(),events.end());
//     // for(i=0;i<events.size();i++){
//     //     cout << events[i].first << " " << events[i].second << endl;
//     // }
//     int cur = 0, ans = 0;
//     for(i=0;i<events.size();i++){
//         if(events[i].second){
//             cur++;
//         }
//         else{
//             cur--;
//         }
//         ans = max(ans, cur);
//     }
//     cout << ans << endl;
// } 

int main() {
    int i, n;
    cin >> n;
    vector<pair<int, int>> events;
    for(i = 0; i < n; i++) {
        int a, b; 
        cin >> a >> b;
    } 
    sort(events.begin(),events.end());
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,events[i].second);
        events[i].second = mx;
    }
    int cur = 0, ans = 0;
    for(i=0;i<events.size();i++){
        if(events[i].second){
            cur++;
        }
        else{
            cur--;
        }
        ans = max(ans, cur);
    }
    cout << ans << endl;
} 