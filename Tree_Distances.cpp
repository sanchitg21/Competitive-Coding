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
    lli t,n,i,j,sum,ans,x,y,odd,even;
    cin >>t;
    bool flag;
    while(t--){ 
        cin >> x >> y;
        n=sqrt(x+y);
        flag=false;
        if(n!=sqrt(x+y)){
            cout << "NO" << endl;
            continue;
        }
        if(x+y==1){
            if(y==1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
                cout << 1 << endl;
            }
            continue;
        }
        odd=n-1;
        even=1;
        while(odd>=1){
            if(odd*even*2==y){
                flag=true;
                break;
            }
            odd--;
            even++;
        }
        if(flag==true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
            continue;
        }
        cout << n << endl;
        for(i=1;i<=odd;i++){
            cout << 1 << " " << i+1 << endl;
        }
        for(i=1;i<even;i++){
            cout << 2 << " " << odd+i+1 << endl;
        }
    }
    return 0;
}
