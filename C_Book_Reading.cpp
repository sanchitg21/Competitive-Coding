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
    long long int t,m,n,i,index,j,y,sum,a,b,c,ans;
    cin >> t;
    while(t--){
        cin >> n >> m;
        sum=0;
        if(m%10==0){ 
            cout << 0 << endl;
        }
        else if(m%10==2 || m%10==4 || m%10==6 || m%10==8){
            a=(n/m);
            b=(a%5);
            c=a/5;
            ans= c*(20);
            b++;
            while(b--){
                ans=ans+(m*b)%10;
            }
            cout << ans << endl;
        }
        else if(m%10==1 || m%10==3 || m%10==7 || m%10==9){
            a=(n/m);
            b=(a%10);
            c=a/10;
            ans=c*45;
            b++;
            while(b--){
                ans= ans+(m*b)%10;
            }
            cout << ans << endl;
        }
        else{
            a=n/m;
            b= (((a+1)/2))*5;
            cout << b << endl;
        }
    }
}