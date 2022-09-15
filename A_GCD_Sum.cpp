#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int q,t,i,n,sum,p,hcf;
    cin >> t;
    while(t--){ 
        cin >> n;
        hcf=1;
        while(hcf==1){ 
            p=n;
            sum=0;
            while(p>0){
                sum=sum+p%10;
                p=p/10;
            }
            hcf= gcd(n,sum);
            if(hcf==1){
                n=n+1;
            }
        }
        cout << n << endl;
    }
}
