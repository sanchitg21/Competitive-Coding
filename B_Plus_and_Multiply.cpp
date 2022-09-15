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
    lli t,n,i,j,a,b,flag;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        flag=0;
        if(b==1){
            cout << "Yes" << endl;
            continue;
        }
        else if(a==1){
            if((n-1)%b==0){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
            continue;
        }
        for(i=1;i<=n;i=i*a){
            if((n-i)%b==0){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }   
}