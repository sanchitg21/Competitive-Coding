#include <iostream>
using namespace std;

int main() {
    long long int x,i,a,b,c,d,y;
    int flag = 0;
    cin >> y;
    x=y*y;
    for (i=1;i*i<=x;i++) {  
        if(x%i==0 && i!=(x/i)) { 
            a= x/i;
            b=i;
            c=a+b;
            d=a-b;
            if (c%2!=0 || d%2!=0)
                continue;
            cout << d/2 << " " << c/2 << endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout << -1 <<  endl;
}
