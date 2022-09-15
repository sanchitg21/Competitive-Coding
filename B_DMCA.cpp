#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,sum=0;
    double n;
    cin >> t;
    while(true){ 
        sum=0;
        while(t>0){ 
            sum=sum+(t%10);
            t=t/10;
        }
        t=sum;
        if(t/10==0){
            break;
        }
    }
    cout << sum << endl;
}
