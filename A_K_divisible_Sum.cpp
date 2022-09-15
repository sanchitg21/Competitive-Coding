#include<iostream>
#include <cmath>
using namespace std;
int main(){ 
    int t,i;
    long long int a;
    long double n,k;
    cin >> t;
    for(i=0;i<t;i++) { 
        cin >> n;
        cin >> k;
        a= ceil(k*ceil(n/k)/n);
        cout <<  a << endl;
    }
}
    
