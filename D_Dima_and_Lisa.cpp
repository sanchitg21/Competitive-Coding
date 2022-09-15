#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
bool isprime(long long int n)
{
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }   
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i;
    cin >> n;
    if(isprime(n)){
        cout << 1 << endl;
        cout << n << endl;
    }
    else{
        cout << 3 << endl;
        cout << 3 << " ";
        n=n-3;
        for(i=3;i<=n;i=i+2){
            if(isprime(n-i)&& isprime(i)){
                cout << i << " " << n-i << endl;
                break;
            }
        }
    }
}

