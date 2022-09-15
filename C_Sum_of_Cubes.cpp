#include<iostream>
#include <cmath> 
using namespace std;
int main(){
    long long int t,i,j,f,x,l,flag;
    long double k;
    cin >> t;
    for(i=0;i<t;i++) { 
        cin >> x;
        for(j=1;j*j*j<x;j++) {
            k=cbrt(x- j*j*j);
            l=cbrt(x-j*j*j);
            flag=0;
            if(k-l==0){ 
                flag=1;
                break;
            }
        }
        if (flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
