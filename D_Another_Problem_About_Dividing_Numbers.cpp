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

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,i,j,a,b,k,MAX,MIN,hcf;
    cin >> t;
    while(t--){
        cin >> a >> b>> k;
        if(a==1 && b==1){
            MIN=0;
        }
        else if(a==1 || b==1){
            MIN=1;
        }
        else if(gcd(a,b)==min(a,b) && gcd(a,b)!=max(a,b)){
            MIN=1;
        }
        else{
            MIN=2;
        }
        mps xa;
        mps xb;
        while(a%2==0){
            xa[2]++;
            a=a/2;
        }
        while(b%2==0){
            xb[2]++;
            b=b/2;
        }
        for(i=3;i*i<=a;i=i+2){
            while(a%i==0){
                xa[i]++;
                a=a/i;
            }
            if(a==1){
                break;
            }
        }
        if(a>1){
            xa[a]++;
        }
        for(i=3;i*i<=b;i=i+2){
            while(b%i==0){
                xb[i]++;
                b=b/i;
            }
            if(b==1){
                break;
            }
        }
        if(b>1){
            xb[b]++;
        }
        MAX=0;
        for(auto it=xa.begin();it!=xa.end();++it){
            MAX+= it->second ;
        }
        for(auto it=xb.begin();it!=xb.end();++it){
            MAX+= it->second ;
        }
        if(k<=MAX && k>=MIN){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
