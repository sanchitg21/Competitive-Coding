#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
double mod=12e10; 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,c,d;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        c=0;
        d=0;
        vector<int> v(n);
        for(i=0;i<n;i++){
            v[i] = int(s[i])-64;
        }
        sort(v.begin(),v.end());
        for(i=0;i+1<n;i++){
            if(v[i]==v[i+1]){
                c++;
            }
            if(s[i]==s[i+1]){
                d++;
            }
        }
        if(c==d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}