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
    long long int t,n,i,c,j,a;
    cin >> t;
    while(t--){
        cin >> n;
        c=0;
        if(n<10){
            cout << n << endl;
            continue;
        }
        for(i=1;i<=9;i++){
            a=0;
            for(j=0;j<=9;j++){
                a=a*10 +i;
                if(n>=a){
                    c++;
                }
                else{
                    break;
                }
            }
        }
        cout << c << endl;
    }
}
