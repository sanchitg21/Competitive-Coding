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
    long long int t,i,X,Y,count,ans;
    cin >> t;
    for(int k=1;k<=t;k++){
        cin >> X >> Y;
        string s;
        cin >> s;
        count=0;
        ans=0;
        for(i=0;i<s.length();i++){
            if(s[i]=='?'){ 
                count++;
            }
        }
        if(count==s.length()){ 
            cout << "Case #"<< k << ": "<< ans << endl;
            continue;
        }
        // all ?
        int index;
        for(i=0;i<s.length();i++){
            if(s[i]!='?'){ 
                index=i;
                break;
            }
        }
        for(i=index+1;i<s.length();i++){
            if(s[i]=='?'){
                s[i]=s[i-1];
            }
        }
        for(i=index-1;i>=0;i--){ 
            if(s[i]=='?'){
                s[i]=s[i+1];
            }
        }
        count=0;
        for(i=0;i<s.length()-1;i++){
            if(s[i]=='C' && s[i+1]=='J')
                count++;
        }
        ans= ans+ X*count;
        count=0;
        for(i=0;i<s.length()-1;i++){
            if(s[i]=='J' && s[i+1]=='C')
                count++;
        }
        ans= ans + Y*count;
        cout << "Case #"<< k << ": "<< ans << endl;
    }
}
