#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> compress;
    
    vector<int> a(n),b(n),p(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> p[i];
        b[i]++;
        compress[a[i]], compress[b[i]];
    }

    int coords = 0;
    for (auto&v : compress) {
        v.second = coords++;
    }

    vector<vector<pair<int,int>>> project(coords);
    for (int i = 0; i < n; i++) {
        project[ compress[b[i]] ].emplace_back( compress[a[i]], p[i] );
    }
    for(auto it=compress.begin();it!=compress.end();it++){
      cout << it->first << " " << it->second << endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<project[i].size();j++){
            cout << project[i][j].first << " " << project[i][j].second << endl;
        }
    }
    for(int i=0;i<4;i++){ 
        cout << project[6][0].first << endl;
    }
}