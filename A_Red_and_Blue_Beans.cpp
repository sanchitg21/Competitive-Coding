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
    long long int t,r,b,n;
    cin >> t;
    while(t--){
        cin >> r >> b >> n;
        if(r>b){
            if(r>(1+n)*b){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else if(b>r){
            if(b>(1+n)*r){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    } 
}
