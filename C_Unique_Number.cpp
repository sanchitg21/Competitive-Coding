#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,n,x,y,z;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        if (n>9 && n<=45){ 
            x=9;
            y=0;
            z=x*pow(10,y);
            n=n-x;
            x=x-1;
            y=y+1;
            while(n>x){ 
                z=z+ x*pow(10,y);
                n=n-x;
                x=x-1;
                y=y+1;
            }
            z=z+n*pow(10,y);
            cout << z << endl;
        }
        else if(n>=46) 
            cout << -1 << endl;
        else 
            cout << n << endl; 
    }
}
