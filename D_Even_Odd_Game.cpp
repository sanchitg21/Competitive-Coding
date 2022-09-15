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
	lli n,t,i,j,b,a,move;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sd(v);
        a=b=0;
        move=0;
        for(i=0;i<n;i++){
            if(v[i]%2==0 && move==0){
                a=a+v[i];
                move=1;
            }
            else if(v[i]%2==0 && move==1){
                move=0;
            }
            else if(v[i]%2==1 && move==0){
                move=1;
            }
            else if(v[i]%2==1 && move==1){
                b=b+v[i];
                move=0;
            }
        }
        if(a>b){
            cout << "Alice" << endl;
        }
        else if(a==b){
            cout << "Tie" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
}