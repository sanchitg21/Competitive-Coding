//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli t,i,n,ca,cb,cc,m;
    cin >> t;
    while(t--){
        ca=cb=cc=0;
        string a,b,c;
        string s="1234567890";
        cin >> a >> b >> c;
        for(i=0;i<10;i++){
            if(a[i]=='1'){ 
                ca++;
            }
            if(b[i]=='1'){
                cb++;
            }
            if(c[i]=='1'){
                cc++;
            }
        }
        n=0;
        m=ca+cb+cc;
        if(ca+cb+cc>10){
            m=10;
            n=ca+cb+cc-m;
        }
        if(m<=10){
            for(i=0;i<m;i++){
                s[i]='1';
            }
            if(m<10){
                for(i=m;i<10;i++){ 
                    s[i]='0';
                }
            }
        }
        lli x,y,z;
        lli MIN=1e9;
        MIN=min(MIN,ca);
        MIN=min(MIN,cb);
        MIN=min(MIN,cc);
        if(n){
            x= ceil(n/2);
            y= ceil((n-x)/2);
            z=  n-x-y;
            if(z!=min(z,MIN)){
                z= MIN;
                y=n-x-z;
            }
            if(y!=min(y,MIN)){
                y= n-x-z;
                
            }


        }
        cout << s << endl;
    }
}