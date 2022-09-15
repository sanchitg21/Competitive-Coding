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
    int t,n,a,b,c,i;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        n=s.length();
        char first=s[0];
        char last=s[n-1];
        if(first==last){
            cout << "NO" << endl;
            continue;
        }
        a=b=c=0;
        for(i=0;i<n;i++){
            if(s[i]==first){
                a++;
            }
            else if(s[i]==last){
                b++;
            }
            else{
                c++;
            }
        }
        if(a-b>=0){
            if(a-b!=c){
                cout << "NO" << endl;
                continue;
            }
        }
        else{
            if(b-a!=c){
                cout << "NO" << endl;
                continue;
            }
        }
        string v=s;
        
        for(i=0;i<n;i++){
            if(s[i]!=first && s[i]!=last){
                s[i]=first;
            }
        }
        for(i=0;i+1<n;i++){
            if(s[i]==first && s[i+1]==last){
                s.erase(s.begin()+i,s.begin()+i+2);
                i=i-2;
                n=s.size();
            }  
        } 
        n=s.length();
        if(n==0){
            cout << "YES" << endl;
            continue;
        }
        n=v.length();
        for(i=0;i<n;i++){
            if(v[i]!=first && v[i]!=last){
                v[i]=last;
            }
        }
        for(i=0;i+1<n;i++){
            if(v[i]==first && v[i+1]==last){
                v.erase(v.begin()+i,v.begin()+i+2);
                i=i-2;
                n=v.size();
            }  
        } 

        n=v.length();
        if(n==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
