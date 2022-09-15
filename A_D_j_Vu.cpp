#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,i,n,j,k,sum,z,c;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        n=s.length();
        int flag=0;
        for(i=0;i<n;i++){
            if(s[n-1-i]!='a'){
                s.insert(s.begin()+i,'a');
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout << "YES" <<endl;
            cout << s << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
