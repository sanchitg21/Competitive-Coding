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
    long long int n,t,i,num1,num2,sum,flag=0;
    string s;
    cin >> s;
    n=s.length();
    for(i=0;i+2<n;i++){ 
        num1=s[i];
        num2=s[i+1];
        sum=num1+num2;
        if(sum%26==s[i+2]-65){
            continue;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
