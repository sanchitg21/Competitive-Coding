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
    int t,n,m,k;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        if(n>1){
            if((n-1)*1 + (m-1)*n == k){ 
                cout <<"YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            if((n-1)*m + (m-1)*1 ==k){ 
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}
