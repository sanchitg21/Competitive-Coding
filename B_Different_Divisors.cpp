//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
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
	lli n,t,i,j,a,b=0,flag;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=1+n;;i++){
            flag=0;
            for(j=2;j<i;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                a=i;
                break;
            }
        }
        for(i=a+n;i<a*a;i++){
            flag=0;
            for(j=2;j<i;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                b=i;
                break;
            }
        }
        if(flag==1){
            cout << a*a*a << endl;
        }
        else{
            cout << a*b << endl;
        }
    }
}