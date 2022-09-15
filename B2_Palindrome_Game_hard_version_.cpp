//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,l,k,flag,c0;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        c0=0;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                c0++;
            }
        }
        if(c0==0){
            cout << "DRAW" << endl;
            continue;
        }
        flag=0;
        for(i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]){ //checking whether initially it is a palindrome or not
                continue;
            }
            else{
                flag++;
            }
        }
        if(flag==0){
        if(c0==1 || n%2==0){
            cout << "BOB" << endl;
            continue;
        }
        if(n%2==1){
            if(s[n/2]=='1'){
                cout << "BOB" << endl;           
                continue;
            }
            else{
                cout << "ALICE" << endl;
                continue;
            }
        }
        continue;
        }
        //Not a palindrome initially 
        c0=0;
        for(i=0;i<n/2;i++){
            if(s[i]==s[n-i-1] && s[i]=='0'){
                c0=c0+2;
            }
        }
        if(s[n/2]=='0'){
            c0++;
        }
        if(c0%2==0){
            cout << "ALICE" << endl;
            continue;
        }
        if(c0%2==1){
            if(c0==1 && flag==1){
                cout << "DRAW" << endl;
            }
            else{
                cout << "ALICE" << endl;
            }
        }
        else{
            cout << "ALICE" << endl;
        }
    }
}
