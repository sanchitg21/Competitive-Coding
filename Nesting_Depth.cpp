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
    long long int t,j,k,i;
    cin >> t;
    for(k=1;k<=t;k++){ 
        string s;
        cin >> s;        
        for(j=0;j+1<s.length();j++){ 
            long long int y=0;
            long long int a;
            if(s[j+1]-s[j]>0)
                a=s[j+1]-s[j];
            else
                a=s[j]-s[j+1];
            long long int g=s[j+1];
            for(i=0;i<a;i++){ 
                if(g-s[j]>0){ 
                    s.insert(j+1,"(");
                    y++;
                }
                else{ 
                    s.insert(j+1,")");
                    y++;
                }
            }
            j=j+y;
        }
        for(i=0;i<s[0]-48;i++){ 
            s.insert(0,"(");
        }
        long long int p=s.length()-1;
        for(i=0;i<s[p]-48;i++){ 
            s.insert(s.length(),")");
        }
        cout << "Case #" << k <<": "<< s << endl;
        cout << "\n";
    }
}
