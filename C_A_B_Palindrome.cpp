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
    int t,n,i,a,b,flag;
    cin >> t;
    while(t--){ 
        flag=0;
        cin >> a >> b;
        int g=a;
        int h=b;
        string s;
        cin >> s;
        n=s.length();
        if((s.length())%2==0 && (a%2!=0 || b%2!=0)){
            cout << -1 << endl;
            continue;
        }
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                a--;
            }
            if(s[i]=='1'){
                b--;
            }
        }
        if(a<0 || b <0){
            cout << -1 << endl;
            continue;
        }
        for(i=0;i<n;i++){
            if(s[i]!=s[n-i-1] && s[i]!='?' && s[n-i-1]!='?'){
                cout << -1 << endl;
                flag=1;
                break;
            }
        }
        if(flag==1){
            flag=0;
            continue;
        }
        for(i=0;i<n;i++){
            if((s[i]=='?' && s[n-i-1]!='?')){
                s[i]=s[n-i-1];
                if(s[i]=='0'){
                    a--;
                }
                else{
                    b--;
                }
            }
            if((s[i]!='?' && s[n-i-1]=='?')){
                s[n-i-1]=s[i];
                if(s[i]=='0'){
                    a--;
                }
                else{
                    b--;
                }
            }
        }
        if(a>1){ 
            for(i=0;i<n;i++){
                if(s[i]=='?'){
                    s[i]='0';
                    s[n-i-1]='0';
                    a=a-2;
                    if(a<=1){
                        break;
                    }
                }
            }
        }
        
        if(b>1){  
            for(i=0;i<n;i++){
                if(s[i]=='?'){
                    s[i]='1';
                    s[n-i-1]='1';
                    b=b-2;
                    if(b<=1){
                        break;
                    }
                }
            }
        }
        if(a>0){ 
            for(i=0;i<n;i++){
                if(s[i]=='?'){
                    s[i]='0';
                    s[n-i-1]='0';
                    a=a-2;
                    if(a<=1){
                        break;
                    }
                }
            }
        }
        
        if(b>0){  
            for(i=0;i<n;i++){
                if(s[i]=='?'){
                    s[i]='1';
                    s[n-i-1]='1';
                    b=b-2;
                    if(b<=1){
                        break;
                    }
                }
            }
        }
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                g--;
            }
            if(s[i]=='1'){
                h--;
            }
        }
        if(g==0 && h==0){ 
        cout <<s << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
