#include <iostream>
#include <cmath>

using namespace std;
int main() {
    long long int x,i,a,b,c,d,y;
    cin >> y;
    x=pow(y,2);
    for (i=1;i<=pow(x,0.5);i++) {  
        if(x%i==0 && i!=(x/i)) { 
            a= x/i;
            b=i;
            c=a+b;
            d=a-b;
            cout << d/2 << " " << c/2 << endl;
        }
        else { 
            cout << -1 << endl;
        }
    }
}
