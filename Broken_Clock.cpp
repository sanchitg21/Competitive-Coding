#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
double mod=12e10; 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,i,j;
    double one,two,three,s,m,h;
    cin >>t;
    for(j=1;j<=t;j++){
        cin >> one >> two >> three;
        one=one/mod;
        two=two/mod;
        three=three/mod;
        for(i=0;i<=43200;i++){
            s=(i*6.0);
            m=(i/10.0);
            h=(i/120.0);
            s=(s-floor(s))*360;
            m=(m-floor(m))*360;
            h=(h-floor(h))*360;
            cout << s << " " << m << " " << h << endl;
            if(s==one && m==two && h==three){
                s=floor(s/6);
                m=floor(m/6);
                h=floor(h/30);
                break;    
            }
            if(s==one && m==three && h==two){
                s=floor(s/6);
                m=floor(m/6);
                h=floor(h/30);
                break;    
            }
            if(s==two && m==one && h==three){
                s=floor(s/6);
                m=floor(m/6);
                h=floor(h/30);
                break;    
            }
            if(s==two && m==three && h==one){
                s=floor(s/6);
                m=floor(m/6);
                h=floor(h/30);
                break;    
                
            }
            if(s==three && m==one && h==two){
                s=floor(s/6);
                m=floor(m/6);
                h=floor(h/30);
                break;    
            }
            if(s==three && m==two && h==one){
                s=floor(s/6);
                m=floor(m/6);
                h=floor(h/30);
                break;    
            }
            else{
                s=m=h=0;
            }
        }
        cout << "Case #" << j << ": " << h  << " " << m  << " " << s << endl; 
    }
}