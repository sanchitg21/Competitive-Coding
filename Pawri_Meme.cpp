#include<iostream>
#include<cmath>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long int t,i,n,k,j,c,m;
    cin >> t;
    for(i=0;i<t;i++){ 
        string s;
        cin >> s;
        n=s.length();
        for(j=0;j+4<n;j++){ 
            if (s[j]=='p' && s[j+1]=='a' && s[j+2]=='r'&& s[j+3]=='t'&& s[j+4]=='y'){ 
                s[j+2]='w';
                s[j+3]='r';
                s[j+4]='i';
            }
        }
        cout << s << endl;
    }

}