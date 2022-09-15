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
    long long int t,n,i,g,s,b,index=0;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long int > v(n+1);
        v[0]=0;
        for(i=1;i<=n;i++){
            cin >> v[i];
        }
        long long int p=n/2;
        if(v[p]!=v[p+1]){
            n=p;
        }
        else{
            while(v[p+1]==v[p]){
                p--;
            }
            n=p;
        }
        
        g=0;
        for(i=1;i+1<=n;i++){
            g++;
            if(v[i]!=v[i+1]){
                index=i+1;
                break;
            }
            if(v[i]==v[i+1] && i==n-1){
                g=n;
                index=n+1;
            }
        }
        s=0;
        for(i=index;i+1<=n;i++){
            s++;
            if(v[i]!=v[i+1]){
                if(s>=2){ 
                    index=i+1;
                    break;
                }
            }
            if(v[i]==v[i+1] && i==n-1){
                s=n-g;
                index=n+1;
            }
        }
        b=0;
        for(i=index;i<=n;i++){
            b++;
        }
        if(g==0 || b==0 || s==0){
            g=s=b=0;
            cout << g << " " << s <<" " << b << endl;
            continue;
        }
        if(g>=s || g >=b){
            g=s=b=0;
            cout << g << " " << s <<" " << b << endl;
            continue;
        }
        if(b>199997 || s>199997 || g>199997 || g+s+b>200000){
            g=s=b=0;
            cout << g << " " << s <<" " << b << endl;
            continue;
        }
        else{
            cout << g << " " << s <<" " << b << endl;
        }
    }
}