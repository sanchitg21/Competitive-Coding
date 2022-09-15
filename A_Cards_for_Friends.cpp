#include<iostream>
#include <cmath> 
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,w,h,n,a,b,c,wc,hc;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> w;
        cin >> h;
        cin >> n;
        a=0;
        b=0;
        while (w%2==0){ 
            w=w/2;
            a=a+1;
        }
        wc=pow(2,a);
        
        while (h%2==0){ 
            h=h/2;
            b=b+1;
        }
        hc=pow(2,b);
        
        c=wc*hc;
        if (c>=n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}