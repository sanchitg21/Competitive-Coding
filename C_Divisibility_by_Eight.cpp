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
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n,a,i,j,k,flag=0;
    string s;
    cin >> s;
    n=s.length();
    vll digit(10);
    for(i=0;i<n;i++){
        digit[int(s[i])-48]++;
    }
    vll v;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                if(digit[i]>0 && digit[j]>0 && digit[k]>0){
                    a= i*100 + j*10 +k;
                    if(a%8==0){ 
                        v.pb(a);
                    }
                }
            }   
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(digit[i]>0 && digit[j]>0){
                a= i*10 +j;
                if(a%8==0){ 
                    v.pb(a);
                }
            }
        }
    }
    for(i=0;i<10;i++){
        if(digit[i]>0){
            a= i;
            if(a%8==0){ 
                v.pb(a);
            }
        }
    }
    sa(v);
    for(j=0;j<v.size();j++){
        a=v[j];
        flag=0;    
        if(v[j]/100==0){
            flag=1;
        } 
        if(v[j]/10==0){
            flag=2;
        }
        for(i=0;i<n;i++){ 
            if(s[i]-48==v[j]/100 && flag==0){
                v[j]=v[j]-(v[j]/100)*100;
                flag=1;
                continue;
            }
            if(s[i]-48==v[j]/10 && flag==1){
                v[j]=v[j]-(v[j]/10)*10;
                flag=2;
                continue;
            }
            if(s[i]-48==v[j] && flag==2){
                cout << "YES" << endl;
                cout << a << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}
